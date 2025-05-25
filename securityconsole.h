#ifndef SECURITYCONSOLE_H
#define SECURITYCONSOLE_H

#pragma once

#include <QObject>
#include "JournalEntry.h"

class SecurityConsole : public QObject
{
    Q_OBJECT

private:
    QList<JournalEntry> m_receivedEntries;

public:
    explicit SecurityConsole(QObject* parent = nullptr);
    void reviewEntries() const;

public slots:
    void receiveJournal(const QList<JournalEntry>& entries);
};


#endif // SECURITYCONSOLE_H
