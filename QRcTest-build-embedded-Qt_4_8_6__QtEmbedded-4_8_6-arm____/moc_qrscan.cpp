/****************************************************************************
** Meta object code from reading C++ file 'qrscan.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QRcTest/qrscan.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrscan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qrscan[] = {

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
       8,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,    7,    7,    7, 0x08,
      45,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qrscan[] = {
    "qrscan\0\0sendsignal()\0on_pushButton_clicked()\0"
    "on_tickTimer_over()\0"
};

void qrscan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qrscan *_t = static_cast<qrscan *>(_o);
        switch (_id) {
        case 0: _t->sendsignal(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_tickTimer_over(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qrscan::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qrscan::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_qrscan,
      qt_meta_data_qrscan, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qrscan::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qrscan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qrscan::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qrscan))
        return static_cast<void*>(const_cast< qrscan*>(this));
    return QFrame::qt_metacast(_clname);
}

int qrscan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void qrscan::sendsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
