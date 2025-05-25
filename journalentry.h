#ifndef JOURNALENTRY_H
#define JOURNALENTRY_H

#pragma once

#include <QString>
#include <QDateTime>
#include <optional>

class JournalEntry
{
private:
    QDateTime            m_timestamp;
    std::optional<int>   m_apartmentNumber;
    QString              m_method;
    std::optional<int>   m_keyID;

public:
    JournalEntry(int apartmentNumber,
                 const QString& method,
                 std::optional<int> keyID = std::nullopt);

    QDateTime timestamp() const;
    std::optional<int> apartmentNumber() const;
    QString method() const;
    std::optional<int> keyID() const;
    QString getDetails() const;
};


#endif // JOURNALENTRY_H
