#ifndef DOOR_H
#define DOOR_H

#pragma once
#include <QObject>
#include <QDateTime>

class Door : public QObject
{
    Q_OBJECT

private:
    Door() : m_isLocked(true) {}
    Q_DISABLE_COPY(Door)

    bool m_isLocked;
    QDateTime m_lastOpenedTimestamp;

public:
    static Door& instance() {
        static Door _instance;
        return _instance;
    }

    bool isLocked() const { return m_isLocked; }
    QDateTime lastOpened() const { return m_lastOpenedTimestamp; }

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
