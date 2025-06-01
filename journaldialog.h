#ifndef JOURNALDIALOG_H
#define JOURNALDIALOG_H

#pragma once
#include <QDialog>
#include <QTableWidget>
#include "journalentry.h"

namespace Ui {
class JournalDialog;
}

class JournalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit JournalDialog(QWidget *parent = nullptr);
    ~JournalDialog() override;

    void setLogEntries(const QList<JournalEntry>& entries);
    void setConsoleEntries(const QList<JournalEntry>& entries);

private:
    Ui::JournalDialog *ui;

    void appendEntryToTable(QTableWidget* table, const JournalEntry& entry);
};

#endif // JOURNALDIALOG_H
