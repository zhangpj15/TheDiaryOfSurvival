/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_game_t {
    QByteArrayData data[17];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game_t qt_meta_stringdata_game = {
    {
QT_MOC_LITERAL(0, 0, 4), // "game"
QT_MOC_LITERAL(1, 5, 13), // "sig_closeGame"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "sig_death"
QT_MOC_LITERAL(4, 30, 12), // "sig_quitgame"
QT_MOC_LITERAL(5, 43, 13), // "sig_borngoods"
QT_MOC_LITERAL(6, 57, 13), // "slot_timeLoop"
QT_MOC_LITERAL(7, 71, 15), // "slot_btnShowTab"
QT_MOC_LITERAL(8, 87, 11), // "slot_attack"
QT_MOC_LITERAL(9, 99, 13), // "slot_gameOver"
QT_MOC_LITERAL(10, 113, 13), // "slot_quitgame"
QT_MOC_LITERAL(11, 127, 12), // "slot_restart"
QT_MOC_LITERAL(12, 140, 7), // "slot_no"
QT_MOC_LITERAL(13, 148, 8), // "slot_yes"
QT_MOC_LITERAL(14, 157, 16), // "slot_learnSkill1"
QT_MOC_LITERAL(15, 174, 16), // "slot_learnSkill2"
QT_MOC_LITERAL(16, 191, 16) // "slot_learnSkill3"

    },
    "game\0sig_closeGame\0\0sig_death\0"
    "sig_quitgame\0sig_borngoods\0slot_timeLoop\0"
    "slot_btnShowTab\0slot_attack\0slot_gameOver\0"
    "slot_quitgame\0slot_restart\0slot_no\0"
    "slot_yes\0slot_learnSkill1\0slot_learnSkill2\0"
    "slot_learnSkill3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        game *_t = static_cast<game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_closeGame(); break;
        case 1: _t->sig_death(); break;
        case 2: _t->sig_quitgame(); break;
        case 3: _t->sig_borngoods(); break;
        case 4: _t->slot_timeLoop(); break;
        case 5: _t->slot_btnShowTab(); break;
        case 6: _t->slot_attack(); break;
        case 7: _t->slot_gameOver(); break;
        case 8: _t->slot_quitgame(); break;
        case 9: _t->slot_restart(); break;
        case 10: _t->slot_no(); break;
        case 11: _t->slot_yes(); break;
        case 12: _t->slot_learnSkill1(); break;
        case 13: _t->slot_learnSkill2(); break;
        case 14: _t->slot_learnSkill3(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (game::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&game::sig_closeGame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (game::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&game::sig_death)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (game::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&game::sig_quitgame)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (game::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&game::sig_borngoods)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject game::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_game.data,
      qt_meta_data_game,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_game.stringdata0))
        return static_cast<void*>(const_cast< game*>(this));
    return QWidget::qt_metacast(_clname);
}

int game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void game::sig_closeGame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void game::sig_death()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void game::sig_quitgame()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void game::sig_borngoods()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
