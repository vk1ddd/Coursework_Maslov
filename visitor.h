#ifndef VISITOR_H
#define VISITOR_H
#pragma once

#include <QObject>
#include <QString>

class Visitor : public QObject
{
    Q_OBJECT

private:
    QString m_name;
    int     m_keyID;


public:
    explicit Visitor(const QString& name, int keyID, QObject* parent = nullptr)
        : QObject(parent), m_name(name), m_keyID(keyID) {}

    QString name() const { return m_name; }
    int keyID() const     { return m_keyID; }

public slots:
    void pressButton(int apartmentID);
    void sendText(const QString& text);

signals:
    // Сигнал для IntercomSystem и Panel о звонке НЕ ЗАБЫТЬ!
    void buttonPressed(int apartmentID);
    void visitorText(const QString& text);
};


#endif // VISITOR_H
