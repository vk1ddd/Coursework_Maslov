#ifndef PANEL_H
#define PANEL_H

#pragma once
#include <QObject>
#include <QString>
#include <QMap>

class Apartment;

class Panel : public QObject
{
    Q_OBJECT

private:
    QMap<int, Apartment*> m_buttons;
    QString         m_inputBuffer;

public:
    explicit Panel(QObject* parent = nullptr);

    // Зарегистрировать квартиру, чтобы при вызове можно было найти объект
    void registerApartment(int apartmentID, Apartment* apartment);

    // Очистить буфер набранных цифр
    void clearBuffer();

    QString inputBuffer() const { return m_inputBuffer; }

public slots:
    // Нажата цифра на домофоне
    void inputDigit(int digit);

    // Нажата кнопка «Call»
    void pressCall();

    // Сработал считыватель ключа
    void receiveKey(int keyID);

    // Текст пришёл из квартиры (тру́бки) — переслать его дальше
    void sendTextToApartment(int apartmentID, const QString& text);

    void inputSpecial(QChar c) {
        m_inputBuffer.append(c);
        emit bufferChanged(m_inputBuffer);
    }

signals:
    // Показываем UI, что начинать вызов в указанную квартиру
    void callRequested(int apartmentID);

    // Проверен ключ — дальше по цепочке
    void keyPresented(int keyID);

    // Текст от квартиры пришёл на панель
    void apartmentTextReceived(int apartmentID, const QString& text);

    void bufferChanged(const QString& newBuffer);
};

#endif // PANEL_H
