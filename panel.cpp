#include "panel.h"
#include "apartment.h"
#include <QDebug>

Panel::Panel(QObject* parent)
    : QObject(parent)
    , m_inputBuffer()
{}

void Panel::registerApartment(int apartmentID, Apartment* apartment)
{
    m_buttons.insert(apartmentID, apartment);
}

void Panel::clearBuffer()
{
    m_inputBuffer.clear();
}

void Panel::inputDigit(int digit)
{
    if (digit < 0 || digit > 9) {
        qWarning() << "Panel::inputDigit: invalid digit" << digit;
        return;
    }
    m_inputBuffer.append(QChar('0' + digit));
    qDebug() << "Panel buffer:" << m_inputBuffer;
}

void Panel::pressCall()
{
    bool ok = false;
    int aptID = m_inputBuffer.toInt(&ok);
    clearBuffer();

    if (!ok || !m_buttons.contains(aptID)) {
        qWarning() << "Panel::pressCall: apartment" << m_inputBuffer << "not found";
        return;
    }

    qDebug() << "Panel: requesting call to apartment" << aptID;
    emit callRequested(aptID);
}

void Panel::receiveKey(int keyID)
{
    qDebug() << "Panel: key presented:" << keyID;
    emit keyPresented(keyID);
}

void Panel::sendTextToApartment(int apartmentID, const QString& text)
{
    if (!m_buttons.contains(apartmentID)) {
        qWarning() << "Panel::sendTextToApartment: no such apartment" << apartmentID;
        return;
    }
    Apartment* apt = m_buttons.value(apartmentID);
    qDebug() << "Panel: sending text to apartment" << apartmentID << ":" << text;
    // перенаправляем в квартиру
    apt->sendTextToPanel(text);
}
