#ifndef DOOR_H
#define DOOR_H

#pragma once

#include <QObject>
#include <QDateTime>

class Door : public QObject
{
    Q_OBJECT

private:
    bool m_isLocked;
    QDateTime m_lastOpenedTimestamp;

public:
    explicit Door(QObject* parent = nullptr);

    bool isLocked() const;
    QDateTime lastOpened() const;

public slots:
    void open();
    void close();
    void lock();
    void unlock();

signals:
    void doorOpened(const QDateTime& timestamp);
    void doorClosed(const QDateTime& timestamp);
};

#endif // DOOR_H
