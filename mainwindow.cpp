#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "door.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

    // СКАНЕР КЛЮЧА РЕАЛИЗОВАТЬ
    //connect(ui->btnKeyReader, &QPushButton::clicked, this, [](){
    //    int keyID = 4;
    //    if (KeyReader::instance().isValid(keyID)) {
    //        Door::instance().unlock();
    //        Door::instance().open();
    //    }
    //});

    // Настраиваем pushButton так, чтобы он был полностью прозрачным и не «унаследовал» фон родителя
    ui->btnKeyReader->setFlat(true);
    ui->btnKeyReader->setAttribute(Qt::WA_TranslucentBackground);  // Делает фон прозрачным
    ui->btnKeyReader->setAttribute(Qt::WA_StyledBackground, true); // Заставляет кнопку использовать свой stylesheet для отрисовки фона
    ui->btnKeyReader->setAutoFillBackground(false);
    ui->btnKeyReader->setStyleSheet("background: none; background-color: transparent; border: none;");

}

MainWindow::~MainWindow()
{


    delete ui;
}
