/****************************************************************************
** Meta object code from reading C++ file 'accounts_manegment_win.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../accounts_manegment_win.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accounts_manegment_win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_accounts_manegment_win_t {
    QByteArrayData data[13];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_accounts_manegment_win_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_accounts_manegment_win_t qt_meta_stringdata_accounts_manegment_win = {
    {
QT_MOC_LITERAL(0, 0, 22), // "accounts_manegment_win"
QT_MOC_LITERAL(1, 23, 28), // "on_accountstable_cellClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 3), // "row"
QT_MOC_LITERAL(4, 57, 6), // "column"
QT_MOC_LITERAL(5, 64, 18), // "on_backbtn_clicked"
QT_MOC_LITERAL(6, 83, 22), // "on_transferbtn_clicked"
QT_MOC_LITERAL(7, 106, 25), // "on_transactionbtn_clicked"
QT_MOC_LITERAL(8, 132, 18), // "on_cardbtn_clicked"
QT_MOC_LITERAL(9, 151, 27), // "on_passgeneratorbtn_clicked"
QT_MOC_LITERAL(10, 179, 13), // "transfer_slot"
QT_MOC_LITERAL(11, 193, 2), // "to"
QT_MOC_LITERAL(12, 196, 12) // "trans_amount"

    },
    "accounts_manegment_win\0"
    "on_accountstable_cellClicked\0\0row\0"
    "column\0on_backbtn_clicked\0"
    "on_transferbtn_clicked\0on_transactionbtn_clicked\0"
    "on_cardbtn_clicked\0on_passgeneratorbtn_clicked\0"
    "transfer_slot\0to\0trans_amount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_accounts_manegment_win[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x08 /* Private */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    2,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   12,

       0        // eod
};

void accounts_manegment_win::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<accounts_manegment_win *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_accountstable_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_backbtn_clicked(); break;
        case 2: _t->on_transferbtn_clicked(); break;
        case 3: _t->on_transactionbtn_clicked(); break;
        case 4: _t->on_cardbtn_clicked(); break;
        case 5: _t->on_passgeneratorbtn_clicked(); break;
        case 6: _t->transfer_slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject accounts_manegment_win::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_accounts_manegment_win.data,
    qt_meta_data_accounts_manegment_win,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *accounts_manegment_win::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *accounts_manegment_win::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_accounts_manegment_win.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int accounts_manegment_win::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
