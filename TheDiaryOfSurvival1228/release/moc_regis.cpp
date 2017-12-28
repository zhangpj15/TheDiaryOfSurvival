/****************************************************************************
** Meta object code from reading C++ file 'regis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../regis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'regis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_regis_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_regis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_regis_t qt_meta_stringdata_regis = {
    {
QT_MOC_LITERAL(0, 0, 5), // "regis"
QT_MOC_LITERAL(1, 6, 16), // "sig_returnButton"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "sig_close_regis"
QT_MOC_LITERAL(4, 40, 8), // "sig_load"
QT_MOC_LITERAL(5, 49, 17), // "slot_returnButton"
QT_MOC_LITERAL(6, 67, 18), // "checkButtonClicked"
QT_MOC_LITERAL(7, 86, 18), // "loginButtonClicked"
QT_MOC_LITERAL(8, 105, 17) // "loadButtonClicked"

    },
    "regis\0sig_returnButton\0\0sig_close_regis\0"
    "sig_load\0slot_returnButton\0"
    "checkButtonClicked\0loginButtonClicked\0"
    "loadButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_regis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
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

void regis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        regis *_t = static_cast<regis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_returnButton(); break;
        case 1: _t->sig_close_regis(); break;
        case 2: _t->sig_load(); break;
        case 3: _t->slot_returnButton(); break;
        case 4: _t->checkButtonClicked(); break;
        case 5: _t->loginButtonClicked(); break;
        case 6: _t->loadButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (regis::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&regis::sig_returnButton)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (regis::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&regis::sig_close_regis)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (regis::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&regis::sig_load)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject regis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_regis.data,
      qt_meta_data_regis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *regis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *regis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_regis.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int regis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void regis::sig_returnButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void regis::sig_close_regis()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void regis::sig_load()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
