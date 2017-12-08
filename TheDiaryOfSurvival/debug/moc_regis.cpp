/****************************************************************************
** Meta object code from reading C++ file 'regis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../regis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'regis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_regis_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_regis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_regis_t qt_meta_stringdata_regis = {
    {
QT_MOC_LITERAL(0, 0, 5), // "regis"
QT_MOC_LITERAL(1, 6, 15), // "sig_close_regis"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 18), // "checkButtonClicked"
QT_MOC_LITERAL(4, 42, 18), // "loginButtonClicked"
QT_MOC_LITERAL(5, 61, 17), // "loadButtonClicked"
QT_MOC_LITERAL(6, 79, 17) // "slot_loginSuccess"

    },
    "regis\0sig_close_regis\0\0checkButtonClicked\0"
    "loginButtonClicked\0loadButtonClicked\0"
    "slot_loginSuccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_regis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void regis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        regis *_t = static_cast<regis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_close_regis(); break;
        case 1: _t->checkButtonClicked(); break;
        case 2: _t->loginButtonClicked(); break;
        case 3: _t->loadButtonClicked(); break;
        case 4: _t->slot_loginSuccess(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (regis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&regis::sig_close_regis)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject regis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_regis.data,
      qt_meta_data_regis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *regis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *regis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_regis.stringdata0))
        return static_cast<void*>(const_cast< regis*>(this));
    return QWidget::qt_metacast(_clname);
}

int regis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void regis::sig_close_regis()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
