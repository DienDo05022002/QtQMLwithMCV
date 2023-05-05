/****************************************************************************
** Meta object code from reading C++ file 'controlleritem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QtQML-Lib/AppQML/controlleritem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlleritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControllerItem_t {
    QByteArrayData data[12];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControllerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControllerItem_t qt_meta_stringdata_ControllerItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ControllerItem"
QT_MOC_LITERAL(1, 15, 9), // "signalAdd"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "signalRemove"
QT_MOC_LITERAL(4, 39, 12), // "signalUpdata"
QT_MOC_LITERAL(5, 52, 13), // "signalAddItem"
QT_MOC_LITERAL(6, 66, 4), // "text"
QT_MOC_LITERAL(7, 71, 16), // "signalRemoveItem"
QT_MOC_LITERAL(8, 88, 5), // "index"
QT_MOC_LITERAL(9, 94, 16), // "signalUpdateItem"
QT_MOC_LITERAL(10, 111, 7), // "getData"
QT_MOC_LITERAL(11, 119, 10) // "ItemModel*"

    },
    "ControllerItem\0signalAdd\0\0signalRemove\0"
    "signalUpdata\0signalAddItem\0text\0"
    "signalRemoveItem\0index\0signalUpdateItem\0"
    "getData\0ItemModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControllerItem[] = {

 // content:
       8,       // revision
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

 // methods: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x02 /* Public */,
       7,    1,   55,    2, 0x02 /* Public */,
       9,    2,   58,    2, 0x02 /* Public */,
      10,    0,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    6,
    0x80000000 | 11,

       0        // eod
};

void ControllerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalAdd(); break;
        case 1: _t->signalRemove(); break;
        case 2: _t->signalUpdata(); break;
        case 3: _t->signalAddItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->signalRemoveItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->signalUpdateItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: { ItemModel* _r = _t->getData();
            if (_a[0]) *reinterpret_cast< ItemModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControllerItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerItem::signalAdd)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControllerItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerItem::signalRemove)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControllerItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerItem::signalUpdata)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControllerItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ControllerItem.data,
    qt_meta_data_ControllerItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControllerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControllerItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ControllerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ControllerItem::signalAdd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControllerItem::signalRemove()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControllerItem::signalUpdata()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
