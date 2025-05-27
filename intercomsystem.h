#ifndef INTERCOMSYSTEM_H
#define INTERCOMSYSTEM_H

#pragma once
#include <QObject>
#include <QMap>
#include <QTimer>
#include "door.h"
#include "panel.h"
#include "apartment.h"
#include "accessjournal.h"
#include "securityconsole.h"
#include "keyreader.h"

class IntercomSystem : public QObject
{
    Q_OBJECT

private:
    explicit IntercomSystem(QObject* parent = nullptr);
    Q_DISABLE_COPY(IntercomSystem)

    // Проверить валидность ключа
    bool verifyKey(int keyID) const;

    // Сформировать и сохранить запись о доступе
    void logAccess(int apartmentNumber, const QString& method, std::optional<int> keyID = std::nullopt);

    Door&              m_door;
    Panel*     m_panel;
    KeyReader* m_keyReader;
    QMap<int, Apartment*> m_apartments;
    AccessJournal*     m_journal;
    SecurityConsole*   m_console;
    QTimer*            m_sendTimer;

public:
    // Единственный экземпляр системы
    static IntercomSystem& instance();

    // Зарегистрировать квартиру, чтобы routeCall знал, куда звонить
    void registerApartment(Apartment* apartment);

    Panel* panel() const { return m_panel; }

public slots:
    // Слот от Panel::callRequested
    void routeCall(int apartmentID);

    // Открыть дверь командой из квартиры
    void openDoorByButton(int apartmentID);

    // Открыть дверь по ключу
    void openDoorByKey(int keyID);

    // Слот для ежедневной отправки журнала
    void sendJournal();
};

#endif // INTERCOMSYSTEM_H
