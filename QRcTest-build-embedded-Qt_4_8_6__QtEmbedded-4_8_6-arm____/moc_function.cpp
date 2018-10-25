/****************************************************************************
** Meta object code from reading C++ file 'function.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QRcTest/function.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'function.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_function[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,    9,    9,    9, 0x08,
      44,    9,    9,    9, 0x08,
      61,    9,    9,    9, 0x08,
      79,    9,    9,    9, 0x08,
      94,    9,    9,    9, 0x08,
     103,    9,    9,    9, 0x08,
     115,    9,    9,    9, 0x08,
     125,    9,    9,    9, 0x08,
     156,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_function[] = {
    "function\0\0sendsignal()\0clock_receiveMoney()\0"
    "clock_moneypay()\0clock_constract()\0"
    "clock_record()\0reshow()\0returnFun()\0"
    "balance()\0on_pushButton_return_clicked()\0"
    "on_pushButton_receMoney_clicked()\0"
};

void function::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        function *_t = static_cast<function *>(_o);
        switch (_id) {
        case 0: _t->sendsignal(); break;
        case 1: _t->clock_receiveMoney(); break;
        case 2: _t->clock_moneypay(); break;
        case 3: _t->clock_constract(); break;
        case 4: _t->clock_record(); break;
        case 5: _t->reshow(); break;
        case 6: _t->returnFun(); break;
        case 7: _t->balance(); break;
        case 8: _t->on_pushButton_return_clicked(); break;
        case 9: _t->on_pushButton_receMoney_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData function::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject function::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_function,
      qt_meta_data_function, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &function::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *function::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *function::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_function))
        return static_cast<void*>(const_cast< function*>(this));
    return QWidget::qt_metacast(_clname);
}

int function::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void function::sendsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
