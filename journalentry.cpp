#include "journalentry.h"

JournalEntry::JournalEntry(int apartmentNumber,
                           const QString& method,
                           std::optional<int> keyID)
    : m_timestamp(QDateTime::currentDateTime())
    , m_apartmentNumber(apartmentNumber)
    , m_method(method)
    , m_keyID(keyID)
{
}

QDateTime JournalEntry::timestamp() const
{
    return m_timestamp;
}

std::optional<int> JournalEntry::apartmentNumber() const
{
    return m_apartmentNumber;
}

QString JournalEntry::method() const
{
    return m_method;
}

std::optional<int> JournalEntry::keyID() const
{
    return m_keyID;
}

QString JournalEntry::getDetails() const
{
    QStringList parts;
    parts << QString("[%1]").arg(m_timestamp.toString("yyyy-MM-dd HH:mm:ss"));
    if (m_apartmentNumber.has_value())
        parts << QString("Apartment: %1,").arg(*m_apartmentNumber);
    parts << QString("Method: %1").arg(m_method);
    if (m_keyID.has_value())
        parts << QString(", KeyID: %1").arg(*m_keyID);

    return parts.join(' ');
}

