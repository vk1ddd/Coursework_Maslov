#include "securityconsole.h"
#include <QDebug>

SecurityConsole::SecurityConsole(QObject* parent)
    : QObject(parent)
{
}

void SecurityConsole::receiveJournal(const QList<JournalEntry>& entries)
{
    m_receivedEntries = entries;
    qDebug() << "SecurityConsole: Journal received with"
             << m_receivedEntries.size() << "entries.";
}

void SecurityConsole::reviewEntries() const
{
    qDebug() << "SecurityConsole: Reviewing journal entries:";
    for (const auto& entry : m_receivedEntries) {
        qDebug() << entry.getDetails();
    }
}
