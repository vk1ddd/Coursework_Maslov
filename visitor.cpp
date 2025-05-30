#include "visitor.h"
#include <QDebug>

void Visitor::pressButton(int apartmentID)
{
    emit buttonPressed(apartmentID);
}

void Visitor::sendText(const QString& text)
{
    emit visitorText(text);
}
