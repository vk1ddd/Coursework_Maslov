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
#include <QtWidgets/QComboBox>
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
    QWidget *lockDoor;
    QWidget *openDoor;
    QWidget *tabIntercom;
    QPushButton *btnKeyReader;
    QLineEdit *lineEditNumber;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *Call;
    QPushButton *btnStar;
    QPushButton *btnGrid;
    QComboBox *comboBox;
    QWidget *tabBuilding;
    QStackedWidget *stackedApartment;
    QWidget *building;
    QPushButton *app6;
    QPushButton *app7;
    QPushButton *app12;
    QPushButton *app4;
    QPushButton *app3;
    QPushButton *app2;
    QPushButton *app1;
    QPushButton *app5;
    QPushButton *app9;
    QPushButton *app13;
    QPushButton *app10;
    QPushButton *app14;
    QPushButton *app15;
    QPushButton *app11;
    QPushButton *app8;
    QPushButton *app16;
    QWidget *handset;
    QPushButton *btnOpenFromApt;
    QPushButton *btnBack;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(891, 770);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget  {background-image:  url(:/new/prefix1/images/background.png);}"));
        tabdoor = new QTabWidget(centralwidget);
        tabdoor->setObjectName("tabdoor");
        tabdoor->setGeometry(QRect(190, 0, 512, 768));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font.setPointSize(24);
        font.setBold(true);
        tabdoor->setFont(font);
        tabdoor->setCursor(QCursor(Qt::ArrowCursor));
        tabdoor->setStyleSheet(QString::fromUtf8("background-color: rgb(49, 32, 12);"));
        tabdoor->setTabPosition(QTabWidget::North);
        tabdoor->setTabShape(QTabWidget::Rounded);
        tabDoor = new QWidget();
        tabDoor->setObjectName("tabDoor");
        tabDoor->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/door_close.png);"));
        tabDoor->setInputMethodHints(Qt::ImhNone);
        stackedDoor = new QStackedWidget(tabDoor);
        stackedDoor->setObjectName("stackedDoor");
        stackedDoor->setGeometry(QRect(0, 0, 511, 741));
        lockDoor = new QWidget();
        lockDoor->setObjectName("lockDoor");
        lockDoor->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/door_close.png);"));
        stackedDoor->addWidget(lockDoor);
        openDoor = new QWidget();
        openDoor->setObjectName("openDoor");
        openDoor->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/door_open.png);"));
        stackedDoor->addWidget(openDoor);
        tabdoor->addTab(tabDoor, QString());
        tabIntercom = new QWidget();
        tabIntercom->setObjectName("tabIntercom");
        tabIntercom->setStyleSheet(QString::fromUtf8("\n"
"#tabIntercom {border-image: url(:/new/prefix1/images/intercom.png);\n"
"}\n"
""));
        btnKeyReader = new QPushButton(tabIntercom);
        btnKeyReader->setObjectName("btnKeyReader");
        btnKeyReader->setGeometry(QRect(90, 460, 101, 101));
        btnKeyReader->setCursor(QCursor(Qt::PointingHandCursor));
        btnKeyReader->setAutoFillBackground(false);
        btnKeyReader->setFlat(true);
        lineEditNumber = new QLineEdit(tabIntercom);
        lineEditNumber->setObjectName("lineEditNumber");
        lineEditNumber->setGeometry(QRect(120, 60, 271, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditNumber->sizePolicy().hasHeightForWidth());
        lineEditNumber->setSizePolicy(sizePolicy);
        lineEditNumber->setSizeIncrement(QSize(0, 0));
        lineEditNumber->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(52);
        font1.setBold(true);
        lineEditNumber->setFont(font1);
        lineEditNumber->setCursor(QCursor(Qt::ArrowCursor));
        lineEditNumber->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEditNumber->setLayoutDirection(Qt::LeftToRight);
        lineEditNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 74, 42);"));
        lineEditNumber->setInputMethodHints(Qt::ImhNone);
        lineEditNumber->setFrame(false);
        lineEditNumber->setEchoMode(QLineEdit::Normal);
        lineEditNumber->setCursorPosition(5);
        lineEditNumber->setDragEnabled(false);
        lineEditNumber->setReadOnly(true);
        btn1 = new QPushButton(tabIntercom);
        btn1->setObjectName("btn1");
        btn1->setEnabled(true);
        btn1->setGeometry(QRect(230, 300, 51, 51));
        btn1->setCursor(QCursor(Qt::PointingHandCursor));
        btn1->setMouseTracking(false);
        btn1->setTabletTracking(false);
        btn1->setAcceptDrops(false);
        btn1->setLayoutDirection(Qt::LeftToRight);
        btn1->setAutoFillBackground(false);
        btn1->setFlat(true);
        btn2 = new QPushButton(tabIntercom);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(310, 300, 51, 51));
        btn2->setCursor(QCursor(Qt::PointingHandCursor));
        btn2->setFlat(true);
        btn3 = new QPushButton(tabIntercom);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(390, 300, 51, 51));
        btn3->setCursor(QCursor(Qt::PointingHandCursor));
        btn3->setFlat(true);
        btn4 = new QPushButton(tabIntercom);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(230, 370, 51, 51));
        btn4->setCursor(QCursor(Qt::PointingHandCursor));
        btn4->setFlat(true);
        btn5 = new QPushButton(tabIntercom);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(310, 370, 51, 51));
        btn5->setCursor(QCursor(Qt::PointingHandCursor));
        btn5->setFlat(true);
        btn6 = new QPushButton(tabIntercom);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(390, 370, 51, 51));
        btn6->setCursor(QCursor(Qt::PointingHandCursor));
        btn6->setFlat(true);
        btn7 = new QPushButton(tabIntercom);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(230, 440, 51, 51));
        btn7->setCursor(QCursor(Qt::PointingHandCursor));
        btn7->setFlat(true);
        btn8 = new QPushButton(tabIntercom);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(310, 440, 51, 51));
        btn8->setCursor(QCursor(Qt::PointingHandCursor));
        btn8->setFlat(true);
        btn9 = new QPushButton(tabIntercom);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(390, 440, 51, 51));
        btn9->setCursor(QCursor(Qt::PointingHandCursor));
        btn9->setFlat(true);
        btn0 = new QPushButton(tabIntercom);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(310, 520, 51, 51));
        btn0->setCursor(QCursor(Qt::PointingHandCursor));
        btn0->setFlat(true);
        Call = new QPushButton(tabIntercom);
        Call->setObjectName("Call");
        Call->setGeometry(QRect(270, 590, 141, 51));
        Call->setCursor(QCursor(Qt::PointingHandCursor));
        Call->setFlat(true);
        btnStar = new QPushButton(tabIntercom);
        btnStar->setObjectName("btnStar");
        btnStar->setGeometry(QRect(230, 510, 51, 51));
        btnStar->setCursor(QCursor(Qt::PointingHandCursor));
        btnStar->setFlat(true);
        btnGrid = new QPushButton(tabIntercom);
        btnGrid->setObjectName("btnGrid");
        btnGrid->setGeometry(QRect(390, 520, 51, 51));
        btnGrid->setCursor(QCursor(Qt::PointingHandCursor));
        btnGrid->setFlat(true);
        comboBox = new QComboBox(tabIntercom);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 0, 91, 21));
        tabdoor->addTab(tabIntercom, QString());
        tabBuilding = new QWidget();
        tabBuilding->setObjectName("tabBuilding");
        tabBuilding->setStyleSheet(QString::fromUtf8("\n"
"#tabHandset {border-image: url(:/new/prefix1/images/handset.png);\n"
"}\n"
""));
        stackedApartment = new QStackedWidget(tabBuilding);
        stackedApartment->setObjectName("stackedApartment");
        stackedApartment->setGeometry(QRect(0, 0, 511, 741));
        building = new QWidget();
        building->setObjectName("building");
        building->setStyleSheet(QString::fromUtf8("#building  {border-image:  url(:/new/prefix1/images/Building.png);\n"
"}"));
        app6 = new QPushButton(building);
        app6->setObjectName("app6");
        app6->setGeometry(QRect(160, 400, 61, 131));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Serif")});
        font2.setPointSize(16);
        font2.setBold(true);
        app6->setFont(font2);
        app6->setCursor(QCursor(Qt::PointingHandCursor));
        app6->setFlat(true);
        app7 = new QPushButton(building);
        app7->setObjectName("app7");
        app7->setGeometry(QRect(290, 400, 61, 131));
        app7->setFont(font2);
        app7->setCursor(QCursor(Qt::PointingHandCursor));
        app7->setFlat(true);
        app12 = new QPushButton(building);
        app12->setObjectName("app12");
        app12->setGeometry(QRect(390, 250, 71, 121));
        app12->setFont(font2);
        app12->setCursor(QCursor(Qt::PointingHandCursor));
        app12->setFlat(true);
        app4 = new QPushButton(building);
        app4->setObjectName("app4");
        app4->setGeometry(QRect(390, 560, 71, 131));
        app4->setFont(font2);
        app4->setCursor(QCursor(Qt::PointingHandCursor));
        app4->setFlat(true);
        app3 = new QPushButton(building);
        app3->setObjectName("app3");
        app3->setGeometry(QRect(290, 560, 61, 131));
        app3->setFont(font2);
        app3->setCursor(QCursor(Qt::PointingHandCursor));
        app3->setFlat(true);
        app2 = new QPushButton(building);
        app2->setObjectName("app2");
        app2->setGeometry(QRect(160, 560, 61, 131));
        app2->setFont(font2);
        app2->setCursor(QCursor(Qt::PointingHandCursor));
        app2->setFlat(true);
        app1 = new QPushButton(building);
        app1->setObjectName("app1");
        app1->setGeometry(QRect(50, 560, 71, 131));
        app1->setFont(font2);
        app1->setCursor(QCursor(Qt::PointingHandCursor));
        app1->setFlat(true);
        app5 = new QPushButton(building);
        app5->setObjectName("app5");
        app5->setGeometry(QRect(50, 400, 71, 131));
        app5->setFont(font2);
        app5->setCursor(QCursor(Qt::PointingHandCursor));
        app5->setFlat(true);
        app9 = new QPushButton(building);
        app9->setObjectName("app9");
        app9->setGeometry(QRect(50, 250, 71, 121));
        app9->setFont(font2);
        app9->setCursor(QCursor(Qt::PointingHandCursor));
        app9->setFlat(true);
        app13 = new QPushButton(building);
        app13->setObjectName("app13");
        app13->setGeometry(QRect(50, 90, 61, 131));
        app13->setFont(font2);
        app13->setCursor(QCursor(Qt::PointingHandCursor));
        app13->setFlat(true);
        app10 = new QPushButton(building);
        app10->setObjectName("app10");
        app10->setGeometry(QRect(160, 250, 61, 121));
        app10->setFont(font2);
        app10->setCursor(QCursor(Qt::PointingHandCursor));
        app10->setFlat(true);
        app14 = new QPushButton(building);
        app14->setObjectName("app14");
        app14->setGeometry(QRect(160, 90, 61, 131));
        app14->setFont(font2);
        app14->setCursor(QCursor(Qt::PointingHandCursor));
        app14->setFlat(true);
        app15 = new QPushButton(building);
        app15->setObjectName("app15");
        app15->setGeometry(QRect(290, 90, 61, 131));
        app15->setFont(font2);
        app15->setCursor(QCursor(Qt::PointingHandCursor));
        app15->setFlat(true);
        app11 = new QPushButton(building);
        app11->setObjectName("app11");
        app11->setGeometry(QRect(290, 250, 61, 121));
        app11->setFont(font2);
        app11->setCursor(QCursor(Qt::PointingHandCursor));
        app11->setFlat(true);
        app8 = new QPushButton(building);
        app8->setObjectName("app8");
        app8->setGeometry(QRect(390, 400, 71, 131));
        app8->setFont(font2);
        app8->setCursor(QCursor(Qt::PointingHandCursor));
        app8->setFlat(true);
        app16 = new QPushButton(building);
        app16->setObjectName("app16");
        app16->setGeometry(QRect(390, 90, 71, 131));
        app16->setFont(font2);
        app16->setCursor(QCursor(Qt::PointingHandCursor));
        app16->setFlat(true);
        stackedApartment->addWidget(building);
        handset = new QWidget();
        handset->setObjectName("handset");
        handset->setStyleSheet(QString::fromUtf8("#handset {border-image:  url(:/new/prefix1/images/handset.png);\n"
"}"));
        btnOpenFromApt = new QPushButton(handset);
        btnOpenFromApt->setObjectName("btnOpenFromApt");
        btnOpenFromApt->setGeometry(QRect(230, 290, 51, 41));
        btnOpenFromApt->setCursor(QCursor(Qt::PointingHandCursor));
        btnOpenFromApt->setAutoFillBackground(false);
        btnOpenFromApt->setAutoDefault(false);
        btnOpenFromApt->setFlat(true);
        btnBack = new QPushButton(handset);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 80, 24));
        stackedApartment->addWidget(handset);
        tabdoor->addTab(tabBuilding, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabdoor->setCurrentIndex(2);
        stackedDoor->setCurrentIndex(0);
        stackedApartment->setCurrentIndex(0);
        btnOpenFromApt->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabDoor), QCoreApplication::translate("MainWindow", "\320\224\320\262\320\265\321\200\321\214", nullptr));
        btnKeyReader->setText(QString());
        lineEditNumber->setText(QCoreApplication::translate("MainWindow", " 0000", nullptr));
        btn1->setText(QString());
        btn2->setText(QString());
        btn3->setText(QString());
        btn4->setText(QString());
        btn5->setText(QString());
        btn6->setText(QString());
        btn7->setText(QString());
        btn8->setText(QString());
        btn9->setText(QString());
        btn0->setText(QString());
        Call->setText(QString());
        btnStar->setText(QString());
        btnGrid->setText(QString());
        tabdoor->setTabText(tabdoor->indexOf(tabIntercom), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\274\320\276\321\204\320\276\320\275", nullptr));
        app6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        app7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        app12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        app4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        app3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        app2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        app1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        app5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        app9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        app13->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
        app10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        app14->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        app15->setText(QCoreApplication::translate("MainWindow", "15", nullptr));
        app11->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        app8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        app16->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        btnOpenFromApt->setText(QString());
        btnBack->setText(QCoreApplication::translate("MainWindow", "\320\232 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\260\320\274", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabBuilding), QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
