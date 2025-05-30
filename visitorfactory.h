#ifndef VISITORFACTORY_H
#define VISITORFACTORY_H

#pragma once
#include <QObject>
#include "visitor.h"

class VisitorFactory : public QObject {
    Q_OBJECT
public:
    explicit VisitorFactory(QObject* parent = nullptr) : QObject(parent) {}

    // Создаёт нового посетителя с данным именем и ключом
    Visitor* createVisitor(const QString& name, int keyID) {
        Visitor* v = new Visitor(name, keyID, this);
        return v;
    }
};


#endif // VISITORFACTORY_H
