#ifndef KEYREADER_H
#define KEYREADER_H

#pragma once

#include <QObject>
#include <QSet>

class KeyReader : public QObject
{
    Q_OBJECT

private:
    QSet<int> m_validKeys;

public:
    explicit KeyReader(QObject* parent = nullptr);

    void registerKey(int keyID);
    void unregisterKey(int keyID);
    bool isValid(int keyID) const;
};


#endif // KEYREADER_H
