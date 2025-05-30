#include "visitordialog.h"
#include "ui_visitordialog.h"

VisitorDialog::VisitorDialog(QWidget* parent)
    : QDialog(parent), ui(new Ui::VisitorDialog)
{
    ui->setupUi(this);
}

VisitorDialog::~VisitorDialog() {
    delete ui;
}

QString VisitorDialog::visitorName() const {
    return ui->lineEditName->text();
}

int VisitorDialog::visitorKey() const {
    return ui->lineEditKey->text().toInt();
}
