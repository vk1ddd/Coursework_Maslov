#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "apartment.h"
#include "visitor.h"
#include "visitorfactory.h"
#include <QVector>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAddVisitor();
    void onKeyReaderClicked();

    void startAptAnimation();
    void startIntercomAnimation();
    void onTabIntercomChanged(int index);
    void onTabApartmentChanged(int index);

private:
    Ui::MainWindow *ui;
    QList<Apartment*> allApartments;
    int m_currentApartmentID   = -1;
    int m_lastCalledApartment  = -1;
    int m_lastHighlightedApartment = -1;

    VisitorFactory m_visitorFactory;
    QVector<Visitor*> m_visitors;

    QString pendingTextToApt;
    QString pendingTextToIntercom;
    QTimer animationTimer;
    int animationIndex;
};

#endif // MAINWINDOW_H
