/****************************************************************************
** Meta object code from reading C++ file 'recemoney.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "recemoney.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recemoney.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_receMoney[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   10,   10,   10, 0x08,
      36,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_receMoney[] = {
    "receMoney\0\0sendsignal()\0returnFun()\0"
    "GenerationTwoCode()\0"
};

void receMoney::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        receMoney *_t = static_cast<receMoney *>(_o);
        switch (_id) {
        case 0: _t->sendsignal(); break;
        case 1: _t->returnFun(); break;
        case 2: _t->GenerationTwoCode(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData receMoney::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject receMoney::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_receMoney,
      qt_meta_data_receMoney, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &receMoney::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *receMoney::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *receMoney::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_receMoney))
        return static_cast<void*>(const_cast< receMoney*>(this));
    return QWidget::qt_metacast(_clname);
}

int receMoney::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void receMoney::sendsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
