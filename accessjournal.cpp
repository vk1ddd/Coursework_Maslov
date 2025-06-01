#include "accessjournal.h"
#include <QDebug>

AccessJournal::AccessJournal(QObject* parent)
    : QObject(parent)
{
    m_timer = new QTimer(this);
    m_timer->setInterval(60 * 1000);
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

void AccessJournal::sendJournal() {
    if (m_entries.isEmpty()) return;
    emit journalSent(m_entries);
    m_entries.clear();
}

