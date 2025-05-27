#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "door.h"
#include "intercomsystem.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Сразу ставим дверной стекед на закрытое
    ui->stackedDoor->setCurrentWidget(ui->lockDoor);



    for (int i = 1; i <= 16; ++i) {
        Apartment* apt = new Apartment(i, this);
        allApartments.append(apt);
    }

    for (int i = 0, n = allApartments.size(); i < n; ++i) {
        Apartment* apt = allApartments[i];
        IntercomSystem::instance().registerApartment(apt);
    }



    connect(&Door::instance(), &Door::doorOpened, this, [this](const QDateTime&){
        ui->stackedDoor->setCurrentIndex(1);
    });
    connect(&Door::instance(), &Door::doorClosed, this, [this](const QDateTime&){
        ui->stackedDoor->setCurrentIndex(0);
    });


    // ПОМЕНЯТЬ РЕАЛИЗАЦИЮ ОТЕРЫТИЯ ДВЕРИ С ТРУБКИ
    connect(ui->btnOpenFromApt, &QPushButton::clicked, this, [](){
        Door::instance().unlock();
        Door::instance().open();
    });


    // Получаем указатель на Panel
    Panel* panel = IntercomSystem::instance().panel();

    // 0–9
    for (int d = 0; d <= 9; ++d) {
        QPushButton* btn = findChild<QPushButton*>(QString("btn%1").arg(d));
        connect(btn, &QPushButton::clicked, this, [this, panel, d]() {
            panel->inputDigit(d);
            ui->lineEditNumber->setText(panel->inputBuffer());
        });
    }

    // * и #
    connect(ui->btnStar, &QPushButton::clicked, this, [this, panel]() {
        panel->inputSpecial('*');
        ui->lineEditNumber->setText(panel->inputBuffer());
    });
    connect(ui->btnGrid, &QPushButton::clicked, this, [this, panel]() {
        panel->inputSpecial('#');
        ui->lineEditNumber->setText(panel->inputBuffer());
    });

    // Call
    connect(ui->Call, &QPushButton::clicked, this, [this, panel]() {
        panel->pressCall();
        ui->lineEditNumber->clear();
    });

    // Когда вызов запрошен — переключаемся на вкладку "Квартиры" и подсвечиваем
    connect(panel, &Panel::callRequested, this, [this](int aptID){
        auto aptBtn = findChild<QPushButton*>(QString("app%1").arg(aptID));
        if (aptBtn) aptBtn->setStyleSheet("border:2px solid yellow;");
    });

    // Нажатие на кнопку квартиры
    for (int i = 1; i <= 16; ++i) {
        QPushButton* aptBtn = findChild<QPushButton*>(QString("app%1").arg(i));
        connect(aptBtn, &QPushButton::clicked, this, [this, i]() {
            m_currentApartmentID = i;
            // Сброс подсветки
            for (int j = 1; j <= 16; ++j) {
                auto b = findChild<QPushButton*>(QString("app%1").arg(j));
                if (b) b->setStyleSheet("");
            }
            // Переключаем stackedApartment на страницу "handset"
            ui->stackedApartment->setCurrentWidget(ui->handset);
        });
    }

    // Back из трубки в план
    connect(ui->btnBack, &QPushButton::clicked, this, [this](){
        ui->stackedApartment->setCurrentWidget(ui->building);
        ui->tabdoor->setCurrentWidget(ui->tabBuilding);
    });

    // Open из трубки
    connect(ui->btnOpenFromApt, &QPushButton::clicked, this, [this](){
        if (m_currentApartmentID > 0) {
            IntercomSystem::instance().openDoorByButton(m_currentApartmentID);
            // Авто-закрытие через 2 секунды
            QTimer::singleShot(2000, this, [](){
                Door::instance().close();
            });
        }
    });


}

MainWindow::~MainWindow()
{

    delete ui;
}
