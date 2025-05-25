#ifndef APARTMENT_H
#define APARTMENT_H

#pragma once

#include <QObject>

class Apartment : public QObject
{
    Q_OBJECT

private:
    int   m_apartmentNumber;
    bool  m_isBlocked;

public:
    explicit Apartment(int number, QObject* parent = nullptr);

    int apartmentNumber() const;
    bool isBlocked() const;

public slots:
    void pressTalk();
    void toggleBlock();
    void pressOpen();
    void receiveCall();
    void sendTextToPanel(const QString& text);

signals:
    void callStarted(int apartmentNumber);
    void callBlocked(int apartmentNumber);
    void blockStateChanged(int apartmentNumber, bool isBlocked);
    void openRequested(int apartmentNumber);
    void apartmentText(int apartmentNumber, const QString& text);
};


#endif // APARTMENT_H
