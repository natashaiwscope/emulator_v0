/****************************************************************************
** Meta object code from reading C++ file 'heartbeat.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../heartbeat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'heartbeat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HeartBeat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      26,   10,   10,   10, 0x05,
      39,   10,   10,   10, 0x05,
      56,   50,   10,   10, 0x05,
     107,  100,   10,   10, 0x05,
     129,  100,   10,   10, 0x05,
     151,   10,   10,   10, 0x05,
     177,   10,   10,   10, 0x05,
     194,   10,   10,   10, 0x05,
     204,   10,   10,   10, 0x05,
     222,   10,   10,   10, 0x05,
     245,   10,   10,   10, 0x05,
     269,   10,   10,   10, 0x05,
     291,   10,   10,   10, 0x05,
     312,   10,   10,   10, 0x05,
     338,   10,   10,   10, 0x05,
     365,   10,   10,   10, 0x05,
     388,   10,   10,   10, 0x05,
     412,   10,   10,   10, 0x05,
     434,   10,   10,   10, 0x05,
     461,   10,   10,   10, 0x05,
     489,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     513,   10,   10,   10, 0x08,
     532,   10,   10,   10, 0x08,
     565,   10,   10,   10, 0x08,
     580,   10,   10,   10, 0x08,
     608,   10,   10,   10, 0x08,
     633,   10,   10,   10, 0x08,
     649,   10,   10,   10, 0x08,
     667,   10,   10,   10, 0x08,
     688,   10,   10,   10, 0x08,
     718,   10,   10,   10, 0x08,
     751,   10,   10,   10, 0x08,
     778,  776,   10,   10, 0x08,
     806,  776,   10,   10, 0x08,
     839,  776,   10,   10, 0x08,
     862,  776,   10,   10, 0x08,
     890,  776,   10,   10, 0x08,
     908,  776,   10,   10, 0x08,
     928,   10,   10,   10, 0x08,
     955,   10,   10,   10, 0x08,
     973,   10,   10,   10, 0x08,
     993,   10,   10,   10, 0x0a,
    1014,   10,   10,   10, 0x0a,
    1037,   10,   10,   10, 0x0a,
    1056,   10,   10,   10, 0x0a,
    1074,   10,   10,   10, 0x0a,
    1092,   10,   10,   10, 0x0a,
    1102,   10,   10,   10, 0x0a,
    1123,   10,   10,   10, 0x0a,
    1136,   10,   10,   10, 0x0a,
    1147,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HeartBeat[] = {
    "HeartBeat\0\0responseRcvd()\0msg_Pumped()\0"
    "finished()\0b,len\0"
    "push_trigger(unsigned char*,unsigned short)\0"
    "string\0sig_pullFile(QString)\0"
    "sig_pushFile(QString)\0sig_script_load_and_run()\0"
    "sig_script_run()\0do_plot()\0sig_WIEG_RESULT()\0"
    "sig_CSCRIPT_SCOPE(int)\0sig_CSCRIPT_SIGNAL(int)\0"
    "sig_CSCRIPT_GPIO(int)\0sig_CSCRIPT_I2C(int)\0"
    "sig_CSCRIPT_I2C_READ(int)\0"
    "sig_CSCRIPT_I2C_WRITE(int)\0"
    "sig_CSCRIPT_INCAP(int)\0sig_CSCRIPT_OUTCAP(int)\0"
    "sig_CSCRIPT_UART(int)\0sig_CSCRIPT_UART_READ(int)\0"
    "sig_CSCRIPT_UART_WRITE(int)\0"
    "sig_CSCRIPT_Extern(int)\0supply_heartbeat()\0"
    "GUI_UPDATE(ioTxtGrpthExchStrct&)\0"
    "timerExpired()\0delayRAMCodeTimerrExpired()\0"
    "onActionCommand(QString)\0newScriptSlot()\0"
    "PushRTCTimeSlot()\0autoExecScriptSlot()\0"
    "slotEditAutoExecScriptC(bool)\0"
    "FoundDataLoggerHWString(QString)\0"
    "HeartBeatTimerSyncSlot()\0x\0"
    "slot_Edit_OR_PUSH_INI(bool)\0"
    "slot_Edit_OR_PUSH_C_Script(bool)\0"
    "slot_Show_Script(bool)\0"
    "slot_Run_Script_In_PC(bool)\0"
    "slot_Reboot(bool)\0slot_FwUpdate(bool)\0"
    "slot_script_load_and_run()\0slot_script_run()\0"
    "slot_FormatSDCard()\0slot_ReInitDevList()\0"
    "selectNewIPDevice(int)\0SaveDeviceIPAddr()\0"
    "CheckDeviceSlot()\0browse_and_send()\0"
    "getFile()\0update_code_buffer()\0"
    "comm_start()\0comm_end()\0msg_PumpedRcvd()\0"
};

void HeartBeat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HeartBeat *_t = static_cast<HeartBeat *>(_o);
        switch (_id) {
        case 0: _t->responseRcvd(); break;
        case 1: _t->msg_Pumped(); break;
        case 2: _t->finished(); break;
        case 3: _t->push_trigger((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 4: _t->sig_pullFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sig_pushFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->sig_script_load_and_run(); break;
        case 7: _t->sig_script_run(); break;
        case 8: _t->do_plot(); break;
        case 9: _t->sig_WIEG_RESULT(); break;
        case 10: _t->sig_CSCRIPT_SCOPE((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->sig_CSCRIPT_SIGNAL((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sig_CSCRIPT_GPIO((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->sig_CSCRIPT_I2C((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->sig_CSCRIPT_I2C_READ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->sig_CSCRIPT_I2C_WRITE((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->sig_CSCRIPT_INCAP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->sig_CSCRIPT_OUTCAP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->sig_CSCRIPT_UART((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->sig_CSCRIPT_UART_READ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->sig_CSCRIPT_UART_WRITE((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->sig_CSCRIPT_Extern((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->supply_heartbeat(); break;
        case 23: _t->GUI_UPDATE((*reinterpret_cast< ioTxtGrpthExchStrct(*)>(_a[1]))); break;
        case 24: _t->timerExpired(); break;
        case 25: _t->delayRAMCodeTimerrExpired(); break;
        case 26: _t->onActionCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->newScriptSlot(); break;
        case 28: _t->PushRTCTimeSlot(); break;
        case 29: _t->autoExecScriptSlot(); break;
        case 30: _t->slotEditAutoExecScriptC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->FoundDataLoggerHWString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->HeartBeatTimerSyncSlot(); break;
        case 33: _t->slot_Edit_OR_PUSH_INI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->slot_Edit_OR_PUSH_C_Script((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->slot_Show_Script((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->slot_Run_Script_In_PC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->slot_Reboot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->slot_FwUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->slot_script_load_and_run(); break;
        case 40: _t->slot_script_run(); break;
        case 41: _t->slot_FormatSDCard(); break;
        case 42: _t->slot_ReInitDevList(); break;
        case 43: _t->selectNewIPDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->SaveDeviceIPAddr(); break;
        case 45: _t->CheckDeviceSlot(); break;
        case 46: _t->browse_and_send(); break;
        case 47: _t->getFile(); break;
        case 48: _t->update_code_buffer(); break;
        case 49: _t->comm_start(); break;
        case 50: _t->comm_end(); break;
        case 51: _t->msg_PumpedRcvd(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HeartBeat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HeartBeat::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HeartBeat,
      qt_meta_data_HeartBeat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HeartBeat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HeartBeat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HeartBeat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HeartBeat))
        return static_cast<void*>(const_cast< HeartBeat*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HeartBeat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void HeartBeat::responseRcvd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HeartBeat::msg_Pumped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void HeartBeat::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void HeartBeat::push_trigger(unsigned char * _t1, unsigned short _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HeartBeat::sig_pullFile(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HeartBeat::sig_pushFile(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HeartBeat::sig_script_load_and_run()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void HeartBeat::sig_script_run()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void HeartBeat::do_plot()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void HeartBeat::sig_WIEG_RESULT()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void HeartBeat::sig_CSCRIPT_SCOPE(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HeartBeat::sig_CSCRIPT_SIGNAL(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void HeartBeat::sig_CSCRIPT_GPIO(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void HeartBeat::sig_CSCRIPT_I2C(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void HeartBeat::sig_CSCRIPT_I2C_READ(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void HeartBeat::sig_CSCRIPT_I2C_WRITE(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void HeartBeat::sig_CSCRIPT_INCAP(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void HeartBeat::sig_CSCRIPT_OUTCAP(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void HeartBeat::sig_CSCRIPT_UART(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void HeartBeat::sig_CSCRIPT_UART_READ(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void HeartBeat::sig_CSCRIPT_UART_WRITE(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void HeartBeat::sig_CSCRIPT_Extern(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_END_MOC_NAMESPACE
