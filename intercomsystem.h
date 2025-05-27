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
    bool verifyKey(int keyID) const;
    void logAccess(int apartmentNumber, const QString& method, std::optional<int> keyID = std::nullopt);

    Door&              m_door;
    Panel*     m_panel;
    KeyReader* m_keyReader;
    QMap<int, Apartment*> m_apartments;
    AccessJournal*     m_journal;
    SecurityConsole*   m_console;
    QTimer*            m_sendTimer;

public:
    static IntercomSystem& instance();
    void registerApartment(Apartment* apartment);
    Panel* panel() const { return m_panel; }

public slots:
    void routeCall(int apartmentID);
    void openDoorByButton(int apartmentID);
    void openDoorByKey(int keyID);
    void sendJournal();
    void openDoorWithMethod(int apartmentID, const QString& method, std::optional<int> keyID = std::nullopt);
    void handleSpecialCode(const QString& code);

signals:
    void showError();
};

#endif // INTERCOMSYSTEM_H
