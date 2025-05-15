/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabdoor;
    QWidget *tabDoor;
    QStackedWidget *stackedDoor;
    QWidget *page;
    QWidget *page_2;
    QWidget *tabIntercom;
    QPushButton *btnKey;
    QLineEdit *lineEdit;
    QWidget *tabHandset;
    QPushButton *btnOpenFromApt;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(891, 770);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabdoor = new QTabWidget(centralwidget);
        tabdoor->setObjectName("tabdoor");
        tabdoor->setGeometry(QRect(190, 0, 512, 768));
        tabdoor->setCursor(QCursor(Qt::ArrowCursor));
        tabdoor->setTabPosition(QTabWidget::North);
        tabdoor->setTabShape(QTabWidget::Rounded);
        tabDoor = new QWidget();
        tabDoor->setObjectName("tabDoor");
        tabDoor->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/door_close.png);"));
        tabDoor->setInputMethodHints(Qt::ImhNone);
        stackedDoor = new QStackedWidget(tabDoor);
        stackedDoor->setObjectName("stackedDoor");
        stackedDoor->setGeometry(QRect(0, 0, 511, 741));
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/door_close.png);"));
        stackedDoor->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/door_open.png);"));
        stackedDoor->addWidget(page_2);
        tabdoor->addTab(tabDoor, QString());
        tabIntercom = new QWidget();
        tabIntercom->setObjectName("tabIntercom");
        tabIntercom->setStyleSheet(QString::fromUtf8("\n"
"#tabIntercom {border-image: url(:/new/prefix1/images/intercom.png);\n"
"}\n"
""));
        btnKey = new QPushButton(tabIntercom);
        btnKey->setObjectName("btnKey");
        btnKey->setGeometry(QRect(80, 470, 121, 121));
        btnKey->setCursor(QCursor(Qt::PointingHandCursor));
        btnKey->setAutoFillBackground(false);
        btnKey->setFlat(true);
        lineEdit = new QLineEdit(tabIntercom);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 20, 331, 71));
        lineEdit->setCursor(QCursor(Qt::ArrowCursor));
        tabdoor->addTab(tabIntercom, QString());
        tabHandset = new QWidget();
        tabHandset->setObjectName("tabHandset");
        tabHandset->setStyleSheet(QString::fromUtf8("\n"
"#tabHandset {border-image: url(:/new/prefix1/images/handset.png);\n"
"}\n"
""));
        btnOpenFromApt = new QPushButton(tabHandset);
        btnOpenFromApt->setObjectName("btnOpenFromApt");
        btnOpenFromApt->setGeometry(QRect(230, 290, 51, 41));
        btnOpenFromApt->setCursor(QCursor(Qt::PointingHandCursor));
        btnOpenFromApt->setFlat(true);
        tabdoor->addTab(tabHandset, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabdoor->setCurrentIndex(1);
        stackedDoor->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabDoor), QCoreApplication::translate("MainWindow", "\320\224\320\262\320\265\321\200\321\214", nullptr));
        btnKey->setText(QString());
        lineEdit->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabIntercom), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\274\320\276\321\204\320\276\320\275", nullptr));
        btnOpenFromApt->setText(QString());
        tabdoor->setTabText(tabdoor->indexOf(tabHandset), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
