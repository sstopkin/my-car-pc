/****************************************************************************
** Meta object code from reading C++ file 'v_joystick_adapter.h'
**
** Created: Tue 17. Jan 14:18:48 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../v_joystick_adapter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v_joystick_adapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VJoystickAdapter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   18,   17,   17, 0x05,
      54,   18,   17,   17, 0x05,
      78,   18,   17,   17, 0x05,
     117,  100,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_VJoystickAdapter[] = {
    "VJoystickAdapter\0\0id,state\0"
    "sigButtonChanged(int,bool)\0"
    "sigAxisChanged(int,int)\0sigHatCanged(int,int)\0"
    "id,stateX,stateY\0sigBallChanged(int,int,int)\0"
};

void VJoystickAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VJoystickAdapter *_t = static_cast<VJoystickAdapter *>(_o);
        switch (_id) {
        case 0: _t->sigButtonChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->sigAxisChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->sigHatCanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sigBallChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VJoystickAdapter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VJoystickAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VJoystickAdapter,
      qt_meta_data_VJoystickAdapter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VJoystickAdapter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VJoystickAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VJoystickAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VJoystickAdapter))
        return static_cast<void*>(const_cast< VJoystickAdapter*>(this));
    return QObject::qt_metacast(_clname);
}

int VJoystickAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void VJoystickAdapter::sigButtonChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VJoystickAdapter::sigAxisChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VJoystickAdapter::sigHatCanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VJoystickAdapter::sigBallChanged(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_VJoystickAdapter__VJoystickThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_VJoystickAdapter__VJoystickThread[] = {
    "VJoystickAdapter::VJoystickThread\0"
};

void VJoystickAdapter::VJoystickThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VJoystickAdapter::VJoystickThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VJoystickAdapter::VJoystickThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_VJoystickAdapter__VJoystickThread,
      qt_meta_data_VJoystickAdapter__VJoystickThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VJoystickAdapter::VJoystickThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VJoystickAdapter::VJoystickThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VJoystickAdapter::VJoystickThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VJoystickAdapter__VJoystickThread))
        return static_cast<void*>(const_cast< VJoystickThread*>(this));
    return QThread::qt_metacast(_clname);
}

int VJoystickAdapter::VJoystickThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
