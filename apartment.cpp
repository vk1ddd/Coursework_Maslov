#include "apartment.h"
#include <QDebug>

Apartment::Apartment(int number, QObject* parent)
    : QObject(parent)
    , m_apartmentNumber(number)
    , m_isBlocked(false)
{
}

int Apartment::apartmentNumber() const
{
    return m_apartmentNumber;
}

bool Apartment::isBlocked() const
{
    return m_isBlocked;
}

void Apartment::pressTalk()
{
    if (m_isBlocked) {
        emit callBlocked(m_apartmentNumber);
        qDebug() << "Apartment" << m_apartmentNumber << ": talk blocked";
    } else {
        emit callStarted(m_apartmentNumber);
        qDebug() << "Apartment" << m_apartmentNumber << ": talk started";
    }
}

void Apartment::toggleBlock()
{
    m_isBlocked = !m_isBlocked;
    emit blockStateChanged(m_apartmentNumber, m_isBlocked);
    qDebug() << "Apartment" << m_apartmentNumber
             << (m_isBlocked ? "blocked" : "unblocked");
}

void Apartment::pressOpen()
{
    emit openRequested(m_apartmentNumber);
    qDebug() << "Apartment" << m_apartmentNumber << ": open requested";
}

void Apartment::receiveCall()
{
    if (m_isBlocked) {
        emit callBlocked(m_apartmentNumber);
        qDebug() << "Apartment" << m_apartmentNumber << ": received call but blocked";
    } else {
        emit callStarted(m_apartmentNumber);
        qDebug() << "Apartment" << m_apartmentNumber << ": received call";
    }
}
