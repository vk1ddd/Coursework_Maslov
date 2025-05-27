#include "intercomsystem.h"
#include <QDebug>

IntercomSystem& IntercomSystem::instance()
{
    static IntercomSystem _inst;
    return _inst;
}

IntercomSystem::IntercomSystem(QObject* parent)
    : QObject(parent)
    , m_door(Door::instance())
    , m_panel(new Panel(this))           // вместо Panel::instance()
    , m_keyReader(new KeyReader(this))   // вместо KeyReader::instance()
    , m_journal(new AccessJournal(this))
    , m_console(new SecurityConsole(this))
    , m_sendTimer(new QTimer(this))
{
    // Подписка на сигналы панели
    connect(m_panel, &Panel::callRequested,
            this, &IntercomSystem::routeCall);
    connect(m_panel, &Panel::keyPresented,
            this, &IntercomSystem::openDoorByKey);


    // Подписка на сигналы из квартир
    for (auto it = m_apartments.constBegin(); it != m_apartments.constEnd(); ++it) {
        Apartment* apt = it.value();
        connect(apt, &Apartment::openRequested,
                this, &IntercomSystem::openDoorByButton);
    }

    // При открытии двери пишем в журнал
    connect(&m_door, &Door::doorOpened, this, [this](const QDateTime& ts){
        // В этом сигнале нет номера квартиры, логика номера – из последнего запроса
        Q_UNUSED(ts);
    });
    // Но мы логируем доступ непосредственно в openDoorByButton/openDoorByKey

    // По таймеру пересылаем журнал
    m_sendTimer->setInterval(24 * 60 * 60 * 1000); // 24 часа
    connect(m_sendTimer, &QTimer::timeout,
            m_journal, &AccessJournal::sendJournal);
    connect(m_journal, &AccessJournal::journalSent,
            m_console, &SecurityConsole::receiveJournal);
    m_sendTimer->start();
}

void IntercomSystem::registerApartment(Apartment* apartment)
{
    int id = apartment->apartmentNumber();
    m_apartments.insert(id, apartment);

    // Подключим openRequested после регистрации
    connect(apartment, &Apartment::openRequested,
            this, &IntercomSystem::openDoorByButton);

    // И чтобы панель знала о квартире
    m_panel->registerApartment(id, apartment);
}

void IntercomSystem::routeCall(int apartmentID)
{
    qDebug() << "IntercomSystem: routeCall to" << apartmentID;
    auto it = m_apartments.find(apartmentID);
    if (it == m_apartments.end()) {
        qWarning() << "No such apartment:" << apartmentID;
        return;
    }
    Apartment* apt = it.value();
    apt->receiveCall();
}

void IntercomSystem::openDoorByButton(int apartmentID)
{
    qDebug() << "IntercomSystem: openDoorByButton for" << apartmentID;
    auto it = m_apartments.find(apartmentID);
    if (it == m_apartments.end()) return;

    // Открываем дверь
    m_door.unlock();
    m_door.open();

    // Логируем
    logAccess(apartmentID, QStringLiteral("button"));
}

void IntercomSystem::openDoorByKey(int keyID)
{
    qDebug() << "IntercomSystem: openDoorByKey with key" << keyID;
    if (!verifyKey(keyID)) {
        qWarning() << "Invalid key:" << keyID;
        return;
    }
    // Открываем дверь
    m_door.unlock();
    m_door.open();

    // Логируем с указанием keyID
    logAccess(-1, QStringLiteral("key"), keyID);
}

bool IntercomSystem::verifyKey(int keyID) const
{
    return m_keyReader->isValid(keyID);
}

void IntercomSystem::logAccess(int apartmentNumber, const QString& method, std::optional<int> keyID)
{
    JournalEntry entry(
        apartmentNumber >= 0 ? apartmentNumber : -1,
        method,
        keyID
        );
    m_journal->addEntry(entry);
}

void IntercomSystem::sendJournal()
{
    // Форсируем пересылку
    m_journal->sendJournal();
}
