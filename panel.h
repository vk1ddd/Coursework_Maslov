#ifndef PANEL_H
#define PANEL_H

#pragma once
#include <QObject>
#include <QString>
#include <QMap>

class Apartment;

class Panel : public QObject
{
    Q_OBJECT

private:
    QMap<int, Apartment*> m_buttons;
    QString         m_inputBuffer;
    bool  m_specialMode = false;
    QString m_specialBuffer;

public:
    explicit Panel(QObject* parent = nullptr);
    void registerApartment(int apartmentID, Apartment* apartment);
    void clearBuffer();
    QString inputBuffer() const { return m_inputBuffer; }
    static constexpr int CODE_LENGTH = 4;

public slots:
    void inputDigit(int digit);
    void pressCall();
    void receiveKey(int keyID);
    void sendTextToApartment(int apartmentID, const QString& text);
    void inputSpecial(QChar c);

signals:
    void callRequested(int apartmentID);
    void keyPresented(int keyID);
    void apartmentTextReceived(int apartmentID, const QString& text);
    void bufferChanged(const QString& newBuffer);
    void callError();
    void specialCodeEntered(const QString& code);
};

#endif // PANEL_H
