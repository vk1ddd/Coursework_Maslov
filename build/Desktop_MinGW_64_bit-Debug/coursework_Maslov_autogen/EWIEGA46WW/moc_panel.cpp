/****************************************************************************
** Meta object code from reading C++ file 'panel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../panel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPanelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPanelENDCLASS = QtMocHelpers::stringData(
    "Panel",
    "callRequested",
    "",
    "apartmentID",
    "keyPresented",
    "keyID",
    "apartmentTextReceived",
    "text",
    "bufferChanged",
    "newBuffer",
    "callError",
    "specialCodeEntered",
    "code",
    "inputDigit",
    "digit",
    "pressCall",
    "receiveKey",
    "sendTextToApartment",
    "inputSpecial",
    "c"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPanelENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[6];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[22];
    char stringdata7[5];
    char stringdata8[14];
    char stringdata9[10];
    char stringdata10[10];
    char stringdata11[19];
    char stringdata12[5];
    char stringdata13[11];
    char stringdata14[6];
    char stringdata15[10];
    char stringdata16[11];
    char stringdata17[20];
    char stringdata18[13];
    char stringdata19[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPanelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPanelENDCLASS_t qt_meta_stringdata_CLASSPanelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Panel"
        QT_MOC_LITERAL(6, 13),  // "callRequested"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 11),  // "apartmentID"
        QT_MOC_LITERAL(33, 12),  // "keyPresented"
        QT_MOC_LITERAL(46, 5),  // "keyID"
        QT_MOC_LITERAL(52, 21),  // "apartmentTextReceived"
        QT_MOC_LITERAL(74, 4),  // "text"
        QT_MOC_LITERAL(79, 13),  // "bufferChanged"
        QT_MOC_LITERAL(93, 9),  // "newBuffer"
        QT_MOC_LITERAL(103, 9),  // "callError"
        QT_MOC_LITERAL(113, 18),  // "specialCodeEntered"
        QT_MOC_LITERAL(132, 4),  // "code"
        QT_MOC_LITERAL(137, 10),  // "inputDigit"
        QT_MOC_LITERAL(148, 5),  // "digit"
        QT_MOC_LITERAL(154, 9),  // "pressCall"
        QT_MOC_LITERAL(164, 10),  // "receiveKey"
        QT_MOC_LITERAL(175, 19),  // "sendTextToApartment"
        QT_MOC_LITERAL(195, 12),  // "inputSpecial"
        QT_MOC_LITERAL(208, 1)   // "c"
    },
    "Panel",
    "callRequested",
    "",
    "apartmentID",
    "keyPresented",
    "keyID",
    "apartmentTextReceived",
    "text",
    "bufferChanged",
    "newBuffer",
    "callError",
    "specialCodeEntered",
    "code",
    "inputDigit",
    "digit",
    "pressCall",
    "receiveKey",
    "sendTextToApartment",
    "inputSpecial",
    "c"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPanelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       4,    1,   83,    2, 0x06,    3 /* Public */,
       6,    2,   86,    2, 0x06,    5 /* Public */,
       8,    1,   91,    2, 0x06,    8 /* Public */,
      10,    0,   94,    2, 0x06,   10 /* Public */,
      11,    1,   95,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,   98,    2, 0x0a,   13 /* Public */,
      15,    0,  101,    2, 0x0a,   15 /* Public */,
      16,    1,  102,    2, 0x0a,   16 /* Public */,
      17,    2,  105,    2, 0x0a,   18 /* Public */,
      18,    1,  110,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QChar,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject Panel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPanelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Panel, std::true_type>,
        // method 'callRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'keyPresented'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'apartmentTextReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'bufferChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'callError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specialCodeEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'inputDigit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pressCall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendTextToApartment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'inputSpecial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChar, std::false_type>
    >,
    nullptr
} };

void Panel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Panel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->callRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->keyPresented((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->apartmentTextReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->bufferChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->callError(); break;
        case 5: _t->specialCodeEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->inputDigit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->pressCall(); break;
        case 8: _t->receiveKey((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->sendTextToApartment((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->inputSpecial((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Panel::*)(int );
            if (_t _q_method = &Panel::callRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Panel::*)(int );
            if (_t _q_method = &Panel::keyPresented; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Panel::*)(int , const QString & );
            if (_t _q_method = &Panel::apartmentTextReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Panel::*)(const QString & );
            if (_t _q_method = &Panel::bufferChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Panel::*)();
            if (_t _q_method = &Panel::callError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Panel::*)(const QString & );
            if (_t _q_method = &Panel::specialCodeEntered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *Panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Panel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Panel::callRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Panel::keyPresented(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Panel::apartmentTextReceived(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Panel::bufferChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Panel::callError()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Panel::specialCodeEntered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
