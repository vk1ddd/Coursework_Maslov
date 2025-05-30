#ifndef VISITORDIALOG_H
#define VISITORDIALOG_H

#pragma once
#include <QDialog>

namespace Ui { class VisitorDialog; }

class VisitorDialog : public QDialog {
    Q_OBJECT
public:
    explicit VisitorDialog(QWidget* parent = nullptr);
    ~VisitorDialog();

    QString visitorName() const;
    int     visitorKey() const;

private:
    Ui::VisitorDialog* ui;
};


#endif // VISITORDIALOG_H
