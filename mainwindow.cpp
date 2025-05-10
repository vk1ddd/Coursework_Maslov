#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Настраиваем pushButton так, чтобы он был полностью прозрачным и не «унаследовал» фон родителя
    ui->btnKey->setFlat(true);
    ui->btnKey->setAttribute(Qt::WA_TranslucentBackground);  // Делает фон прозрачным
    ui->btnKey->setAttribute(Qt::WA_StyledBackground, true); // Заставляет кнопку использовать свой stylesheet для отрисовки фона
    ui->btnKey->setAutoFillBackground(false);
    ui->btnKey->setStyleSheet("background: none; background-color: transparent; border: none;");

}

MainWindow::~MainWindow()
{


    delete ui;
}
