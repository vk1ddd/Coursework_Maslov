#include "visitor.h"
#include <QDebug>

void Visitor::pressButton(int apartmentID)
{
    emit buttonPressed(apartmentID);
}
