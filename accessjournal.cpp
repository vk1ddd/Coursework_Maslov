#include "accessjournal.h"
#include <QDebug>

AccessJournal::AccessJournal(QObject* parent)
    : QObject(parent)
{
    m_timer = new QTimer(this);
    m_timer->setInterval(24 * 60 * 60 * 1000); // 86 400 000мс = 24 часа
    connect(m_timer, &QTimer::timeout, this, &AccessJournal::sendJournal);
    m_timer->start();
}

void AccessJournal::addEntry(const JournalEntry& entry)
{
    m_entries.append(entry);
    qDebug() << "AccessJournal: added entry -" << entry.getDetails();
}

void AccessJournal::clear()
{
    m_entries.clear();
    qDebug() << "AccessJournal: cleared all entries";
}

QList<JournalEntry> AccessJournal::getEntries() const
{
    return m_entries;
}

void AccessJournal::sendJournal()
{
    if (m_entries.isEmpty()) {
        qDebug() << "AccessJournal: no entries to send";
        return;
    }
    emit journalSent(m_entries);
    qDebug() << "AccessJournal: journalSent signal emitted with"
             << m_entries.size() << "entries";

    clear();
}
