/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../burger0/admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admin_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_admin_t qt_meta_stringdata_admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "admin"
QT_MOC_LITERAL(1, 6, 23), // "on_stock_change_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_stock_delete_clicked"
QT_MOC_LITERAL(4, 55, 21), // "on_money_push_clicked"
QT_MOC_LITERAL(5, 77, 20), // "on_money_pop_clicked"
QT_MOC_LITERAL(6, 98, 25), // "on_stock_show_cellClicked"
QT_MOC_LITERAL(7, 124, 3), // "row"
QT_MOC_LITERAL(8, 128, 6), // "column"
QT_MOC_LITERAL(9, 135, 21) // "on_admin_back_clicked"

    },
    "admin\0on_stock_change_clicked\0\0"
    "on_stock_delete_clicked\0on_money_push_clicked\0"
    "on_money_pop_clicked\0on_stock_show_cellClicked\0"
    "row\0column\0on_admin_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    2,   48,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,

       0        // eod
};

void admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_stock_change_clicked(); break;
        case 1: _t->on_stock_delete_clicked(); break;
        case 2: _t->on_money_push_clicked(); break;
        case 3: _t->on_money_pop_clicked(); break;
        case 4: _t->on_stock_show_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_admin_back_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject admin::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_admin.data,
    qt_meta_data_admin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
