#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "door.h"
#include "intercomsystem.h"
#include "panel.h"
#include "visitordialog.h"
#include "journaldialog.h"
#include "journalentry.h"
#include "accessjournal.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Сразу ставим дверной стекед на закрытое
    ui->stackedDoor->setCurrentWidget(ui->lockDoor);
    ui->dialogContainerIntercom->setVisible(false);
    ui->dialogContainerApt     ->setVisible(false);



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

        pendingTextToApt.clear();
        pendingTextToIntercom.clear();
        ui->dialogContainerIntercom->setVisible(true);
        ui->dialogContainerApt     ->setVisible(true);

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

        ui->dialogContainerIntercom->setVisible(false);
        ui->dialogContainerApt     ->setVisible(false);
    });

    connect(ui->btnOpenFromApt, &QPushButton::clicked, this, [this]() {
        if (m_currentApartmentID == m_lastCalledApartment && m_currentApartmentID > 0) {
            Apartment* apt = allApartments.at(m_currentApartmentID - 1);
            apt->pressOpen();

            QTimer::singleShot(6000, this, [](){
                Door::instance().close();
            });

            ui->dialogContainerIntercom->setVisible(false);
            ui->dialogContainerApt     ->setVisible(false);
        } else {
            qDebug() << "Open denied: currentApartment" << m_currentApartmentID
                     << "lastCalled" << m_lastCalledApartment;
        }
    });






    connect(ui->addVisitor, &QPushButton::clicked,
            this, &MainWindow::onAddVisitor);

    connect(ui->btnKeyReader, &QPushButton::clicked,
            this, &MainWindow::onKeyReaderClicked);






    connect(ui->tabdoor, &QTabWidget::currentChanged,
            this, &MainWindow::onTabIntercomChanged);
    connect(ui->stackedApartment, &QStackedWidget::currentChanged,
            this, &MainWindow::onTabApartmentChanged);

    connect(ui->btnSendIntercom, &QPushButton::clicked, this, [this](){
        QString text = ui->lineEditSendIntercom->text();

        ui->lineEditSendIntercom->clear();
        ui->labelReceiveIntercom->setVisible(false);

        pendingTextToApt = text;

        if (ui->stackedApartment->currentWidget() == ui->handset) {
            startAptAnimation();
        }
    });



    connect(ui->btnSendApt, &QPushButton::clicked, this, [this](){
        QString text = ui->lineEditSendApt->text();
        ui->lineEditSendApt->clear();
        ui->labelReceiveApt->setVisible(false);
        pendingTextToIntercom = text;
        if (ui->tabdoor->currentWidget() == ui->tabIntercom) {
            startIntercomAnimation();
        }
    });







    connect(ui->btnShowJournal, &QPushButton::clicked,
            this, &MainWindow::onShowJournalClicked);

    connect(&IntercomSystem::instance().journal(), &AccessJournal::journalSent,
            this, [&](const QList<JournalEntry>& entries){
                m_consoleArchive.append(entries);
                if (m_journalDialog && m_journalDialog->isVisible()) {
                    m_journalDialog->setLogEntries(entries);
                    m_journalDialog->setConsoleEntries(m_consoleArchive);
                }
            });







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

void MainWindow::startAptAnimation() {
    animationTimer.stop();
    disconnect(&animationTimer, &QTimer::timeout, this, nullptr);

    ui->labelReceiveApt->setText("");
    ui->labelReceiveApt->setVisible(true);
    animationIndex = 0;
    connect(&animationTimer, &QTimer::timeout, this, [this]() {
        if (animationIndex < pendingTextToApt.length()) {
            ui->labelReceiveApt->setText(
                ui->labelReceiveApt->text() + pendingTextToApt[animationIndex]
                );
            animationIndex++;
        } else {
            animationTimer.stop();
            QTimer::singleShot(2000, this, [this](){
                ui->labelReceiveApt->setVisible(false);
            });
        }
    });
    animationTimer.start(100);
}

void MainWindow::startIntercomAnimation() {
    animationTimer.stop();
    disconnect(&animationTimer, &QTimer::timeout, this, nullptr);

    ui->labelReceiveIntercom->setText("");
    ui->labelReceiveIntercom->setVisible(true);
    animationIndex = 0;
    connect(&animationTimer, &QTimer::timeout, this, [this]() {
        if (animationIndex < pendingTextToIntercom.length()) {
            ui->labelReceiveIntercom->setText(
                ui->labelReceiveIntercom->text() + pendingTextToIntercom[animationIndex]
                );
            animationIndex++;
        } else {
            animationTimer.stop();
            QTimer::singleShot(2000, this, [this](){
                ui->labelReceiveIntercom->setVisible(false);
            });
        }
    });
    animationTimer.start(100);
}


void MainWindow::onTabIntercomChanged(int index)
{
    if (ui->tabdoor->widget(index) == ui->tabIntercom
        && !pendingTextToIntercom.isEmpty()) {
        ui->labelReceiveIntercom->clear();
        ui->labelReceiveIntercom->setVisible(true);
        startIntercomAnimation();
    }
}

void MainWindow::onTabApartmentChanged(int index)
{
    if (ui->stackedApartment->widget(index) == ui->handset
        && !pendingTextToApt.isEmpty()) {
        ui->labelReceiveApt->clear();
        ui->labelReceiveApt->setVisible(true);
        startAptAnimation();
    }
}


void MainWindow::onShowJournalClicked()
{
    if (!m_journalDialog) {
        m_journalDialog = new JournalDialog(this);
        connect(m_journalDialog, &QDialog::finished, this, [this](){
            m_journalDialog->setLogEntries({});
            m_journalDialog->setConsoleEntries(m_consoleArchive);
        });
    }

    QList<JournalEntry> currentEntries = IntercomSystem::instance().journal().getEntries();

    m_journalDialog->setLogEntries(currentEntries);
    m_journalDialog->setConsoleEntries(m_consoleArchive);

    m_journalDialog->show();
    m_journalDialog->raise();
    m_journalDialog->activateWindow();
}



MainWindow::~MainWindow()
{

    delete ui;
}
