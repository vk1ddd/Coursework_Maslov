#include "journaldialog.h"
#include "ui_journaldialog.h"
#include <QStringList>
#include <QHeaderView>

JournalDialog::JournalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JournalDialog)
{
    ui->setupUi(this);
    ui->tablelog->horizontalHeader()->setStretchLastSection(true);
    ui->tablelog_2->horizontalHeader()->setStretchLastSection(true);

    connect(ui->buttonBox, &QDialogButtonBox::rejected,
            this, &QDialog::reject);
}

JournalDialog::~JournalDialog()
{
    delete ui;
}

void JournalDialog::appendEntryToTable(QTableWidget* table, const JournalEntry& entry) {
    int row = table->rowCount();
    table->insertRow(row);

    auto itemTime = new QTableWidgetItem(
        entry.timestamp().toString("yyyy-MM-dd hh:mm:ss"));
    table->setItem(row, 0, itemTime);

    QString aptNum = entry.apartmentNumber().has_value()
                         ? QString::number(entry.apartmentNumber().value())
                         : "-";
    auto itemApt = new QTableWidgetItem(aptNum);
    table->setItem(row, 1, itemApt);

    auto itemMethod = new QTableWidgetItem(entry.method());
    table->setItem(row, 2, itemMethod);

    QString keyStr = entry.keyID().has_value()
                         ? QString::number(entry.keyID().value())
                         : "-";
    auto itemKey = new QTableWidgetItem(keyStr);
    table->setItem(row, 3, itemKey);
}

void JournalDialog::setLogEntries(const QList<JournalEntry>& entries) {
    ui->tablelog->setRowCount(0);
    for (const auto& e : entries) {
        appendEntryToTable(ui->tablelog, e);
    }
}

void JournalDialog::setConsoleEntries(const QList<JournalEntry>& entries) {
    ui->tablelog_2->setRowCount(0);
    for (const auto& e : entries) {
        appendEntryToTable(ui->tablelog_2, e);
    }
}
