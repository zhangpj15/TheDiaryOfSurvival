/****************************************************************************
** Meta object code from reading C++ file 'end.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../end.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'end.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_end_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_end_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_end_t qt_meta_stringdata_end = {
    {
QT_MOC_LITERAL(0, 0, 3), // "end"
QT_MOC_LITERAL(1, 4, 10), // "sig_gameno"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 11), // "sig_gameyes"
QT_MOC_LITERAL(4, 28, 10), // "slot_btnNo"
QT_MOC_LITERAL(5, 39, 11) // "slot_btnYes"

    },
    "end\0sig_gameno\0\0sig_gameyes\0slot_btnNo\0"
    "slot_btnYes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_end[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void end::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        end *_t = static_cast<end *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_gameno(); break;
        case 1: _t->sig_gameyes(); break;
        case 2: _t->slot_btnNo(); break;
        case 3: _t->slot_btnYes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (end::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&end::sig_gameno)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (end::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&end::sig_gameyes)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject end::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_end.data,
      qt_meta_data_end,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *end::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *end::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_end.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int end::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void end::sig_gameno()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void end::sig_gameyes()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
