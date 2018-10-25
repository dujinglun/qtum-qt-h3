/****************************************************************************
** Meta object code from reading C++ file 'numkeyboard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "numkeyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numkeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NumKeyBoard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      26,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   12,   12,   12, 0x08,
      50,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NumKeyBoard[] = {
    "NumKeyBoard\0\0sendsignal()\0clickNum()\0"
    "btnClicked()\0on_pushButton_true_pressed()\0"
};

void NumKeyBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NumKeyBoard *_t = static_cast<NumKeyBoard *>(_o);
        switch (_id) {
        case 0: _t->sendsignal(); break;
        case 1: _t->clickNum(); break;
        case 2: _t->btnClicked(); break;
        case 3: _t->on_pushButton_true_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NumKeyBoard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NumKeyBoard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NumKeyBoard,
      qt_meta_data_NumKeyBoard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NumKeyBoard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NumKeyBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NumKeyBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NumKeyBoard))
        return static_cast<void*>(const_cast< NumKeyBoard*>(this));
    return QWidget::qt_metacast(_clname);
}

int NumKeyBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void NumKeyBoard::sendsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NumKeyBoard::clickNum()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
