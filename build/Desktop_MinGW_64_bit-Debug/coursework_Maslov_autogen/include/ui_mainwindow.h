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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabdoor;
    QWidget *tabDoor;
    QWidget *tabIntercom;
    QWidget *tabHandset;

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
        tabdoor->setStyleSheet(QString::fromUtf8(""));
        tabdoor->setTabPosition(QTabWidget::North);
        tabdoor->setTabShape(QTabWidget::Rounded);
        tabDoor = new QWidget();
        tabDoor->setObjectName("tabDoor");
        tabdoor->addTab(tabDoor, QString());
        tabIntercom = new QWidget();
        tabIntercom->setObjectName("tabIntercom");
        tabdoor->addTab(tabIntercom, QString());
        tabHandset = new QWidget();
        tabHandset->setObjectName("tabHandset");
        tabdoor->addTab(tabHandset, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabdoor->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabDoor), QCoreApplication::translate("MainWindow", "\320\224\320\262\320\265\321\200\321\214", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabIntercom), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\274\320\276\321\204\320\276\320\275", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabHandset), QCoreApplication::translate("MainWindow", "\320\242\321\200\321\203\320\261\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
