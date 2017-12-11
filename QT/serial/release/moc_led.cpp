/****************************************************************************
** Meta object code from reading C++ file 'led.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../led.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'led.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LEDWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      19,   10,   10,   10, 0x0a,
      25,   10,   10,   10, 0x0a,
      30,   10,   10,   10, 0x0a,
      37,   10,   10,   10, 0x0a,
      44,   10,   10,   10, 0x0a,
      52,   10,   10,   10, 0x0a,
      59,   10,   10,   10, 0x0a,
      66,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LEDWidget[] = {
    "LEDWidget\0\0flash()\0Off()\0On()\0Sync()\0"
    "ledg()\0check()\0ledr()\0ledy()\0extinguish()\0"
};

void LEDWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LEDWidget *_t = static_cast<LEDWidget *>(_o);
        switch (_id) {
        case 0: _t->flash(); break;
        case 1: _t->Off(); break;
        case 2: _t->On(); break;
        case 3: _t->Sync(); break;
        case 4: _t->ledg(); break;
        case 5: _t->check(); break;
        case 6: _t->ledr(); break;
        case 7: _t->ledy(); break;
        case 8: _t->extinguish(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LEDWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LEDWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_LEDWidget,
      qt_meta_data_LEDWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LEDWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LEDWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LEDWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LEDWidget))
        return static_cast<void*>(const_cast< LEDWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int LEDWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
