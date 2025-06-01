/********************************************************************************
** Form generated from reading UI file 'journaldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOURNALDIALOG_H
#define UI_JOURNALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JournalDialog
{
public:
    QTabWidget *tabJournal;
    QWidget *tabLog;
    QTableWidget *tablelog;
    QWidget *tabConsole;
    QTableWidget *tablelog_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialogJournal)
    {
        if (dialogJournal->objectName().isEmpty())
            dialogJournal->setObjectName("dialogJournal");
        dialogJournal->resize(431, 416);
        tabJournal = new QTabWidget(dialogJournal);
        tabJournal->setObjectName("tabJournal");
        tabJournal->setGeometry(QRect(10, 10, 411, 371));
        tabLog = new QWidget();
        tabLog->setObjectName("tabLog");
        tablelog = new QTableWidget(tabLog);
        if (tablelog->columnCount() < 4)
            tablelog->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablelog->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablelog->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablelog->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablelog->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tablelog->setObjectName("tablelog");
        tablelog->setGeometry(QRect(0, 10, 411, 331));
        QFont font;
        font.setPointSize(12);
        tablelog->setFont(font);
        tablelog->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"\n"
""));
        tablelog->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tablelog->setSelectionMode(QAbstractItemView::NoSelection);
        tablelog->setShowGrid(true);
        tablelog->horizontalHeader()->setVisible(true);
        tablelog->horizontalHeader()->setCascadingSectionResizes(false);
        tablelog->horizontalHeader()->setHighlightSections(true);
        tablelog->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablelog->horizontalHeader()->setStretchLastSection(false);
        tablelog->verticalHeader()->setVisible(true);
        tablelog->verticalHeader()->setCascadingSectionResizes(false);
        tablelog->verticalHeader()->setHighlightSections(true);
        tablelog->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablelog->verticalHeader()->setStretchLastSection(false);
        tabJournal->addTab(tabLog, QString());
        tabConsole = new QWidget();
        tabConsole->setObjectName("tabConsole");
        tablelog_2 = new QTableWidget(tabConsole);
        if (tablelog_2->columnCount() < 4)
            tablelog_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablelog_2->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablelog_2->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablelog_2->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablelog_2->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tablelog_2->setObjectName("tablelog_2");
        tablelog_2->setGeometry(QRect(0, 10, 411, 321));
        tablelog_2->setFont(font);
        tablelog_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"\n"
""));
        tablelog_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tablelog_2->setSelectionMode(QAbstractItemView::NoSelection);
        tablelog_2->setShowGrid(true);
        tablelog_2->horizontalHeader()->setVisible(true);
        tablelog_2->horizontalHeader()->setCascadingSectionResizes(false);
        tablelog_2->horizontalHeader()->setHighlightSections(true);
        tablelog_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablelog_2->horizontalHeader()->setStretchLastSection(false);
        tablelog_2->verticalHeader()->setVisible(true);
        tablelog_2->verticalHeader()->setCascadingSectionResizes(false);
        tablelog_2->verticalHeader()->setHighlightSections(true);
        tablelog_2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablelog_2->verticalHeader()->setStretchLastSection(false);
        tabJournal->addTab(tabConsole, QString());
        buttonBox = new QDialogButtonBox(dialogJournal);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(340, 380, 81, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        retranslateUi(dialogJournal);

        tabJournal->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialogJournal);
    } // setupUi

    void retranslateUi(QDialog *dialogJournal)
    {
        dialogJournal->setWindowTitle(QCoreApplication::translate("JournalDialog", "Dialog", nullptr));
#if QT_CONFIG(accessibility)
        tabJournal->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        QTableWidgetItem *___qtablewidgetitem = tablelog->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("JournalDialog", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablelog->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("JournalDialog", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablelog->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("JournalDialog", "\320\234\320\265\321\202\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablelog->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("JournalDialog", "\320\232\320\273\321\216\321\207", nullptr));
        tabJournal->setTabText(tabJournal->indexOf(tabLog), QCoreApplication::translate("JournalDialog", "Log", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablelog_2->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("JournalDialog", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablelog_2->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("JournalDialog", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablelog_2->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("JournalDialog", "\320\234\320\265\321\202\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tablelog_2->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("JournalDialog", "\320\232\320\273\321\216\321\207", nullptr));
        tabJournal->setTabText(tabJournal->indexOf(tabConsole), QCoreApplication::translate("JournalDialog", "Security Console", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JournalDialog: public Ui_JournalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNALDIALOG_H
