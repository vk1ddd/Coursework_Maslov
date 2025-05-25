#include "visitor.h"
#include <QDebug>

Visitor::Visitor(int id, QObject* parent)
    : QObject(parent)
    , m_id(id)
{}

int Visitor::id() const
{
    return m_id;
}

void Visitor::pressButton(int apartmentID)
{
    emit buttonPressed(apartmentID);
}

void Visitor::sendText(const QString& text)
{
    emit visitorText(text);
}
