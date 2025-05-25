#ifndef ACCESSJOURNAL_H
#define ACCESSJOURNAL_H

#pragma once

#include <QObject>
#include <QList>
#include <QTimer>
#include "JournalEntry.h"

class AccessJournal : public QObject
{
    Q_OBJECT

private:
    QList<JournalEntry> m_entries;
    QTimer*           m_timer;

public:
    explicit AccessJournal(QObject* parent = nullptr);
    void addEntry(const JournalEntry& entry);
    void clear();
    QList<JournalEntry> getEntries() const;

public slots:
    void sendJournal();

signals:
    void journalSent(const QList<JournalEntry>& entries);
};


#endif // ACCESSJOURNAL_H
