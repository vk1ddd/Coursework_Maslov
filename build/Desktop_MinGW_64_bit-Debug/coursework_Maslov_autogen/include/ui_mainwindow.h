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
        btnKey->setGeometry(QRect(80, 470, 111, 101));
        btnKey->setCursor(QCursor(Qt::PointingHandCursor));
        btnKey->setAutoFillBackground(false);
        btnKey->setFlat(true);
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
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(52);
        font.setBold(true);
        lineEditNumber->setFont(font);
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
        btn4->setGeometry(QRect(230, 380, 51, 51));
        btn4->setCursor(QCursor(Qt::PointingHandCursor));
        btn4->setFlat(true);
        btn5 = new QPushButton(tabIntercom);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(310, 380, 51, 51));
        btn5->setCursor(QCursor(Qt::PointingHandCursor));
        btn5->setFlat(true);
        btn6 = new QPushButton(tabIntercom);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(390, 380, 51, 51));
        btn6->setCursor(QCursor(Qt::PointingHandCursor));
        btn6->setFlat(true);
        btn7 = new QPushButton(tabIntercom);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(230, 450, 51, 51));
        btn7->setCursor(QCursor(Qt::PointingHandCursor));
        btn7->setFlat(true);
        btn8 = new QPushButton(tabIntercom);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(310, 450, 51, 51));
        btn8->setCursor(QCursor(Qt::PointingHandCursor));
        btn8->setFlat(true);
        btn9 = new QPushButton(tabIntercom);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(390, 450, 51, 51));
        btn9->setCursor(QCursor(Qt::PointingHandCursor));
        btn9->setFlat(true);
        btn0 = new QPushButton(tabIntercom);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(310, 530, 51, 51));
        btn0->setCursor(QCursor(Qt::PointingHandCursor));
        btn0->setFlat(true);
        Call = new QPushButton(tabIntercom);
        Call->setObjectName("Call");
        Call->setGeometry(QRect(270, 600, 141, 51));
        Call->setCursor(QCursor(Qt::PointingHandCursor));
        Call->setFlat(true);
        btnStar = new QPushButton(tabIntercom);
        btnStar->setObjectName("btnStar");
        btnStar->setGeometry(QRect(230, 530, 51, 51));
        btnStar->setCursor(QCursor(Qt::PointingHandCursor));
        btnStar->setFlat(true);
        btnGrid = new QPushButton(tabIntercom);
        btnGrid->setObjectName("btnGrid");
        btnGrid->setGeometry(QRect(390, 530, 51, 51));
        btnGrid->setCursor(QCursor(Qt::PointingHandCursor));
        btnGrid->setFlat(true);
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
        stackedDoor->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabdoor->setTabText(tabdoor->indexOf(tabDoor), QCoreApplication::translate("MainWindow", "\320\224\320\262\320\265\321\200\321\214", nullptr));
        btnKey->setText(QString());
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
        btnOpenFromApt->setText(QString());
        tabdoor->setTabText(tabdoor->indexOf(tabHandset), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
