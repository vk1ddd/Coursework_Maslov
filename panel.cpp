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
    if (m_inputBuffer.isEmpty()) {
        m_inputBuffer = QString(CODE_LENGTH, '0');
    }
    m_inputBuffer = m_inputBuffer.mid(1) + QChar('0' + digit);
    emit bufferChanged(m_inputBuffer);
}

void Panel::pressCall()
{
    bool ok = false;
    int aptID = m_inputBuffer.toInt(&ok);
    m_inputBuffer = QString(CODE_LENGTH, '0');
    emit bufferChanged(m_inputBuffer);
    if (ok && m_buttons.contains(aptID)) {
        emit callRequested(aptID);
    } else {
        emit callError();
    }
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
    apt->sendTextToPanel(text);
}

void Panel::inputSpecial(QChar c) {
    if (c == '*') {
        m_specialMode = true;
        m_specialBuffer.clear();
        m_inputBuffer = QString(CODE_LENGTH, '0');
        emit bufferChanged(m_inputBuffer);
        return;
    }
    if (c == '#' && m_specialMode) {
        m_specialMode = false;
        emit specialCodeEntered(m_specialBuffer);
        m_inputBuffer = QString(CODE_LENGTH, '0');
        emit bufferChanged(m_inputBuffer);
        return;
    }
    if (m_specialMode) {
        if (m_specialBuffer.length() < CODE_LENGTH)
            m_specialBuffer.append(c);
        return;
    }
    inputDigit(c.digitValue());
}
