#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "door.h"
#include "intercomsystem.h"
#include "panel.h"
#include "visitordialog.h"

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




    Panel* panel = IntercomSystem::instance().panel();

    connect(panel, &Panel::bufferChanged, this, [this](const QString& buf){
        ui->lineEditNumber->setText(buf);
    });

    panel->clearBuffer();

    for (int d = 0; d <= 9; ++d) {
        auto btn = findChild<QPushButton*>(QString("btn%1").arg(d));
        connect(btn, &QPushButton::clicked, this, [panel, d]() {
            panel->inputSpecial(QChar('0' + d));
        });
    }

    connect(ui->btnStar, &QPushButton::clicked, this, [panel]() {
        panel->inputSpecial('*');
    });
    connect(ui->btnGrid, &QPushButton::clicked, this, [panel]() {
        panel->inputSpecial('#');
    });

    connect(ui->Call, &QPushButton::clicked, this, [this, panel]() {
        panel->pressCall();
    });

    connect(panel, &Panel::callRequested, this, [this](int aptID){
        m_lastCalledApartment = aptID;

        ui->tabdoor->setCurrentWidget(ui->tabBuilding);
        ui->stackedApartment->setCurrentWidget(ui->building);

        auto b = findChild<QPushButton*>(QString("app%1").arg(aptID));
        if (b) b->setStyleSheet("border:2px solid yellow;");
    });

    for (int i = 1; i <= 16; ++i) {
        QPushButton* aptBtn = findChild<QPushButton*>(QString("app%1").arg(i));
        connect(aptBtn, &QPushButton::clicked, this, [this, i]() {
            m_currentApartmentID = i;

            auto newBtn = findChild<QPushButton*>(QString("app%1").arg(i));
            if (newBtn) newBtn->setStyleSheet("border:2px solid yellow;");

            m_lastHighlightedApartment = i;
            ui->stackedApartment->setCurrentWidget(ui->handset);
        });
    }

    connect(ui->btnBack, &QPushButton::clicked, this, [this](){
        if (m_lastHighlightedApartment != -1) {
            auto prevBtn = findChild<QPushButton*>(
                QString("app%1").arg(m_lastHighlightedApartment));
            if (prevBtn) prevBtn->setStyleSheet("");
            m_lastHighlightedApartment = -1;
        }

        ui->stackedApartment->setCurrentWidget(ui->building);
        ui->tabdoor->setCurrentWidget(ui->tabBuilding);
    });

    connect(ui->btnOpenFromApt, &QPushButton::clicked, this, [this]() {
        if (m_currentApartmentID == m_lastCalledApartment && m_currentApartmentID > 0) {
            Apartment* apt = allApartments.at(m_currentApartmentID - 1);
            apt->pressOpen();

            QTimer::singleShot(2000, this, [](){
                Door::instance().close();
            });
        } else {
            qDebug() << "Open denied: currentApartment" << m_currentApartmentID
                     << "lastCalled" << m_lastCalledApartment;
        }
    });






    connect(ui->addVisitor, &QPushButton::clicked,
            this, &MainWindow::onAddVisitor);

    connect(ui->btnKeyReader, &QPushButton::clicked,
            this, &MainWindow::onKeyReaderClicked);






    connect(panel, &Panel::callError, this, [this]() {
        ui->lineEditNumber->setText("EROR");
        QTimer::singleShot(2000, this, [this]() {
            ui->lineEditNumber->setText("0000");
        });
    });

    connect(&IntercomSystem::instance(), &IntercomSystem::showError, this, [this]() {
        ui->lineEditNumber->setText("EROR");
        QTimer::singleShot(2000, this, [this]() {
            ui->lineEditNumber->setText("0000");
        });
    });


}

void MainWindow::onAddVisitor() {
    VisitorDialog dlg(this);
    if (dlg.exec() == QDialog::Accepted) {
        QString name = dlg.visitorName();
        int key = dlg.visitorKey();

        Visitor* v = m_visitorFactory.createVisitor(name, key);
        m_visitors.append(v);

        ui->visitors->addItem(name, key);
    }
}

void MainWindow::onKeyReaderClicked() {
    int idx = ui->visitors->currentIndex();
    if (idx < 0) return;
    int keyID = ui->visitors->itemData(idx).toInt();

    IntercomSystem::instance().openDoorByKey(keyID);

    QTimer::singleShot(2000, this, [](){
        Door::instance().close();
    });
}



MainWindow::~MainWindow()
{

    delete ui;
}
