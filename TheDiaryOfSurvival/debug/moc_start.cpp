/****************************************************************************
** Meta object code from reading C++ file 'start.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../start.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'start.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_start_t {
    QByteArrayData data[10];
    char stringdata0[113];
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
QT_MOC_LITERAL(6, 58, 13), // "slot_btnEnter"
QT_MOC_LITERAL(7, 72, 12), // "slot_btnInfo"
QT_MOC_LITERAL(8, 85, 13), // "slot_btnClose"
QT_MOC_LITERAL(9, 99, 13) // "slot_btnRegis"

    },
    "start\0sig_btnEnter\0\0sig_btnInfo\0"
    "sig_btnClose\0sig_btnRegis\0slot_btnEnter\0"
    "slot_btnInfo\0slot_btnClose\0slot_btnRegis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_start[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
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
        case 4: _t->slot_btnEnter(); break;
        case 5: _t->slot_btnInfo(); break;
        case 6: _t->slot_btnClose(); break;
        case 7: _t->slot_btnRegis(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&start::sig_btnEnter)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&start::sig_btnInfo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&start::sig_btnClose)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (start::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&start::sig_btnRegis)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject start::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_start.data,
      qt_meta_data_start,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *start::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *start::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_start.stringdata0))
        return static_cast<void*>(const_cast< start*>(this));
    return QWidget::qt_metacast(_clname);
}

int start::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void start::sig_btnEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void start::sig_btnInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void start::sig_btnClose()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void start::sig_btnRegis()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
