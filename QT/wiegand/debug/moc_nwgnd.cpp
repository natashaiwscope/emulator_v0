/****************************************************************************
** Meta object code from reading C++ file 'nwgnd.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nwgnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nwgnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Nwgnd[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,    7,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   41,    6,    6, 0x0a,
      95,   86,    6,    6, 0x0a,
     143,   86,    6,    6, 0x0a,
     191,    6,    6,    6, 0x08,
     207,    6,    6,    6, 0x08,
     220,    6,    6,    6, 0x08,
     233,    6,    6,    6, 0x08,
     243,    6,    6,    6, 0x08,
     255,    6,    6,    6, 0x08,
     270,    6,    6,    6, 0x08,
     285,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Nwgnd[] = {
    "Nwgnd\0\0newValue,s\0stringMsg(int,QString)\0"
    "l1,line\0wiegnStatusLine(unsigned char,char*)\0"
    "l1,l2,l3\0wiegnCLEDPump(unsigned char,unsigned char,uint)\0"
    "wiegnPLEDPump(unsigned char,unsigned char,uint)\0"
    "browse_C_Code()\0browse_CSV()\0run_C_Code()\0"
    "run_CSV()\0scan_Wieg()\0scan_WiegRAW()\0"
    "scan_WiegBIN()\0slot_WIEG_RESULT()\0"
};

void Nwgnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Nwgnd *_t = static_cast<Nwgnd *>(_o);
        switch (_id) {
        case 0: _t->stringMsg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->wiegnStatusLine((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        case 2: _t->wiegnCLEDPump((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 3: _t->wiegnPLEDPump((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->browse_C_Code(); break;
        case 5: _t->browse_CSV(); break;
        case 6: _t->run_C_Code(); break;
        case 7: _t->run_CSV(); break;
        case 8: _t->scan_Wieg(); break;
        case 9: _t->scan_WiegRAW(); break;
        case 10: _t->scan_WiegBIN(); break;
        case 11: _t->slot_WIEG_RESULT(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Nwgnd::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Nwgnd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Nwgnd,
      qt_meta_data_Nwgnd, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Nwgnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Nwgnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Nwgnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Nwgnd))
        return static_cast<void*>(const_cast< Nwgnd*>(this));
    return QWidget::qt_metacast(_clname);
}

int Nwgnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Nwgnd::stringMsg(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
