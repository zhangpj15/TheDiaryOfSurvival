/****************************************************************************
** Meta object code from reading C++ file 'start.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../start.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'start.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_start_t {
    QByteArrayData data[14];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_start_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_start_t qt_meta_stringdata_start = {
    {
QT_MOC_LITERAL(0, 0, 5), // "start"
QT_MOC_LITERAL(1, 6, 12), // "sig_btnEnter"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "sig_btnInfo"
QT_MOC_LITERAL(4, 32, 12), // "sig_btnClose"
QT_MOC_LITERAL(5, 45, 12), // "sig_btnRegis"
QT_MOC_LITERAL(6, 58, 12), // "sig_btnLogin"
QT_MOC_LITERAL(7, 71, 11), // "sig_btnRank"
QT_MOC_LITERAL(8, 83, 13), // "slot_btnEnter"
QT_MOC_LITERAL(9, 97, 12), // "slot_btnInfo"
QT_MOC_LITERAL(10, 110, 13), // "slot_btnClose"
QT_MOC_LITERAL(11, 124, 13), // "slot_btnRegis"
QT_MOC_LITERAL(12, 138, 13), // "slot_btnLogin"
QT_MOC_LITERAL(13, 152, 12) // "slot_btnRank"

    },
    "start\0sig_btnEnter\0\0sig_btnInfo\0"
    "sig_btnClose\0sig_btnRegis\0sig_btnLogin\0"
    "sig_btnRank\0slot_btnEnter\0slot_btnInfo\0"
    "slot_btnClose\0slot_btnRegis\0slot_btnLogin\0"
    "slot_btnRank"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_start[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void start::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        start *_t = static_cast<start *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_btnEnter(); break;
        case 1: _t->sig_btnInfo(); break;
        case 2: _t->sig_btnClose(); break;
        case 3: _t->sig_btnRegis(); break;
        case 4: _t->sig_btnLogin(); break;
        case 5: _t->sig_btnRank(); break;
        case 6: _t->slot_btnEnter(); break;
        case 7: _t->slot_btnInfo(); break;
        case 8: _t->slot_btnClose(); break;
        case 9: _t->slot_btnRegis(); break;
        case 10: _t->slot_btnLogin(); break;
        case 11: _t->slot_btnRank(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&start::sig_btnEnter)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&start::sig_btnInfo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&start::sig_btnClose)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&start::sig_btnRegis)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&start::sig_btnLogin)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&start::sig_btnRank)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject start::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_start.data,
      qt_meta_data_start,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *start::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *start::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_start.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int start::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void start::sig_btnEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void start::sig_btnInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void start::sig_btnClose()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void start::sig_btnRegis()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void start::sig_btnLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void start::sig_btnRank()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
