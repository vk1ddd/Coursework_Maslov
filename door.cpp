#include "door.h"

Door::Door(QObject* parent)
    : QObject(parent)
    , m_isLocked(true)            // по умолчанию дверь закрыта и заблокирована
    , m_lastOpenedTimestamp()
{}

bool Door::isLocked() const
{
    return m_isLocked;
}

QDateTime Door::lastOpened() const
{
    return m_lastOpenedTimestamp;
}

void Door::open()
{
    if (!m_isLocked) {
        m_lastOpenedTimestamp = QDateTime::currentDateTime();
        emit doorOpened(m_lastOpenedTimestamp);
    }
    // иначе можем логировать попытку или игнорировать
}

void Door::close()
{
    emit doorClosed(QDateTime::currentDateTime());
}

void Door::lock()
{
    m_isLocked = true;
}

void Door::unlock()
{
    m_isLocked = false;
}
