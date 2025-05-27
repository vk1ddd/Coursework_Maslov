/****************************************************************************
** Meta object code from reading C++ file 'intercomsystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../intercomsystem.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intercomsystem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSIntercomSystemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSIntercomSystemENDCLASS = QtMocHelpers::stringData(
    "IntercomSystem",
    "showError",
    "",
    "routeCall",
    "apartmentID",
    "openDoorByButton",
    "openDoorByKey",
    "keyID",
    "sendJournal",
    "openDoorWithMethod",
    "method",
    "std::optional<int>",
    "handleSpecialCode",
    "code"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSIntercomSystemENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[12];
    char stringdata5[17];
    char stringdata6[14];
    char stringdata7[6];
    char stringdata8[12];
    char stringdata9[19];
    char stringdata10[7];
    char stringdata11[19];
    char stringdata12[18];
    char stringdata13[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSIntercomSystemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSIntercomSystemENDCLASS_t qt_meta_stringdata_CLASSIntercomSystemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "IntercomSystem"
        QT_MOC_LITERAL(15, 9),  // "showError"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 9),  // "routeCall"
        QT_MOC_LITERAL(36, 11),  // "apartmentID"
        QT_MOC_LITERAL(48, 16),  // "openDoorByButton"
        QT_MOC_LITERAL(65, 13),  // "openDoorByKey"
        QT_MOC_LITERAL(79, 5),  // "keyID"
        QT_MOC_LITERAL(85, 11),  // "sendJournal"
        QT_MOC_LITERAL(97, 18),  // "openDoorWithMethod"
        QT_MOC_LITERAL(116, 6),  // "method"
        QT_MOC_LITERAL(123, 18),  // "std::optional<int>"
        QT_MOC_LITERAL(142, 17),  // "handleSpecialCode"
        QT_MOC_LITERAL(160, 4)   // "code"
    },
    "IntercomSystem",
    "showError",
    "",
    "routeCall",
    "apartmentID",
    "openDoorByButton",
    "openDoorByKey",
    "keyID",
    "sendJournal",
    "openDoorWithMethod",
    "method",
    "std::optional<int>",
    "handleSpecialCode",
    "code"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIntercomSystemENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   63,    2, 0x0a,    2 /* Public */,
       5,    1,   66,    2, 0x0a,    4 /* Public */,
       6,    1,   69,    2, 0x0a,    6 /* Public */,
       8,    0,   72,    2, 0x0a,    8 /* Public */,
       9,    3,   73,    2, 0x0a,    9 /* Public */,
       9,    2,   80,    2, 0x2a,   13 /* Public | MethodCloned */,
      12,    1,   85,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 11,    4,   10,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,   10,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject IntercomSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSIntercomSystemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSIntercomSystemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSIntercomSystemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IntercomSystem, std::true_type>,
        // method 'showError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'routeCall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'openDoorByButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'openDoorByKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendJournal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openDoorWithMethod'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::optional<int>, std::false_type>,
        // method 'openDoorWithMethod'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleSpecialCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void IntercomSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IntercomSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showError(); break;
        case 1: _t->routeCall((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->openDoorByButton((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->openDoorByKey((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->sendJournal(); break;
        case 5: _t->openDoorWithMethod((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::optional<int>>>(_a[3]))); break;
        case 6: _t->openDoorWithMethod((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->handleSpecialCode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IntercomSystem::*)();
            if (_t _q_method = &IntercomSystem::showError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *IntercomSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntercomSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSIntercomSystemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IntercomSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void IntercomSystem::showError()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
