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
    , m_panel(new Panel(this))
    , m_keyReader(new KeyReader(this))
    , m_journal(new AccessJournal(this))
    , m_console(new SecurityConsole(this))
    , m_sendTimer(new QTimer(this))
{
    connect(m_panel, &Panel::callRequested,
            this, &IntercomSystem::routeCall);
    connect(m_panel, &Panel::keyPresented,
            this, &IntercomSystem::openDoorByKey);
    connect(m_panel, &Panel::callError,
            this, [&](){ emit showError(); });

    connect(m_panel, &Panel::specialCodeEntered,
            this, &IntercomSystem::handleSpecialCode);


    for (auto it = m_apartments.constBegin(); it != m_apartments.constEnd(); ++it) {
        Apartment* apt = it.value();
        connect(apt, &Apartment::openRequested,
                this, &IntercomSystem::openDoorByButton);
    }

    connect(&m_door, &Door::doorOpened, this, [this](const QDateTime& ts){
        Q_UNUSED(ts);
    });

    m_sendTimer->setInterval(24 * 60 * 60 * 1000);
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

    connect(apartment, &Apartment::openRequested,
            this, &IntercomSystem::openDoorByButton);

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

    m_door.unlock();
    m_door.open();

    logAccess(apartmentID, QStringLiteral("button"));
}

void IntercomSystem::openDoorByKey(int keyID)
{
    if (!verifyKey(keyID)) {
        emit showError();
        return;
    }
    openDoorWithMethod(-1, "key", keyID);
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
    m_journal->sendJournal();
}

void IntercomSystem::openDoorWithMethod(int apartmentID, const QString& method, std::optional<int> keyID) {
    m_door.unlock();
    m_door.open();
    logAccess(apartmentID, method, keyID);
}


void IntercomSystem::handleSpecialCode(const QString& code) {
    static const QString MASTER = "2514";
    if (code == MASTER) {
        openDoorWithMethod(-1, "password");

        QTimer::singleShot(2000, this, [this](){
            Door::instance().close();
        });
    } else {
        emit showError();
    }
}
