#include "keyreader.h"

KeyReader::KeyReader(QObject* parent)
    : QObject(parent)
{
    m_validKeys.insert(1209);
}

void KeyReader::registerKey(int keyID)
{
    m_validKeys.insert(keyID);
}

void KeyReader::unregisterKey(int keyID)
{
    m_validKeys.remove(keyID);
}

bool KeyReader::isValid(int keyID) const
{
    return m_validKeys.contains(keyID);
}
