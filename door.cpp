#include "door.h"

void Door::open()
{
    if (!m_isLocked) {
        m_lastOpenedTimestamp = QDateTime::currentDateTime();
        emit doorOpened(m_lastOpenedTimestamp);
    }
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
