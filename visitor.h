#ifndef VISITOR_H
#define VISITOR_H
#pragma once

#include <QObject>
#include <QString>

class Visitor : public QObject
{
    Q_OBJECT

private:
    int m_id;


public:
    explicit Visitor(int id, QObject* parent = nullptr);

    int id() const;

public slots:
    void pressButton(int apartmentID);
    void sendText(const QString& text);

signals:
    // Сигнал для IntercomSystem и Panel о звонке НЕ ЗАБЫТЬ!
    void buttonPressed(int apartmentID);
    void visitorText(const QString& text);
};


#endif // VISITOR_H
