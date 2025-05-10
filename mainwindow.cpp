#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabHandset->setStyleSheet(
        "border-image: url(:/new/prefix1/images/door.png);"
        );
    ui->tabIntercom->setStyleSheet(
        "border-image: url(:/new/prefix1/images/intercom.png);"
        );
    ui->tabdoor->setStyleSheet(
        "border-image: url(:/new/prefix1/images/handset.png);"
        );
}

MainWindow::~MainWindow()
{


    delete ui;
}
