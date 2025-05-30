/********************************************************************************
** Form generated from reading UI file 'visitordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITORDIALOG_H
#define UI_VISITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisitorDialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEditKey;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditName;
    QLabel *label;

    void setupUi(QDialog *VisitorDialog)
    {
        if (VisitorDialog->objectName().isEmpty())
            VisitorDialog->setObjectName("VisitorDialog");
        VisitorDialog->resize(191, 172);
        widget = new QWidget(VisitorDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 171, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditKey = new QLineEdit(widget);
        lineEditKey->setObjectName("lineEditKey");
        lineEditKey->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditKey, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName("lineEditName");

        gridLayout->addWidget(lineEditName, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(VisitorDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, VisitorDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VisitorDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(VisitorDialog);
    } // setupUi

    void retranslateUi(QDialog *VisitorDialog)
    {
        VisitorDialog->setWindowTitle(QCoreApplication::translate("VisitorDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\321\201\320\265\321\202\320\270\321\202\320\265\320\273\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("VisitorDialog", "\320\232\320\273\321\216\321\207:", nullptr));
        label->setText(QCoreApplication::translate("VisitorDialog", "\320\230\320\274\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisitorDialog: public Ui_VisitorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITORDIALOG_H
