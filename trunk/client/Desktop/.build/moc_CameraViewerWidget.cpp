/****************************************************************************
** Meta object code from reading C++ file 'CameraViewerWidget.h'
**
** Created: Fri 27. Jan 04:19:41 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CameraViewerWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraViewerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CameraViewerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      80,   55,   42,   19, 0x0a,
     127,   19,   42,   19, 0x0a,
     134,   19,   19,   19, 0x0a,
     153,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CameraViewerWidget[] = {
    "CameraViewerWidget\0\0setDesiredSize(QSize)\0"
    "MjpegClient*\0host,port,path,user,pass\0"
    "connectTo(QString,int,QString,QString,QString)\0"
    "exit()\0setLiveFps(double)\0newImage(QImage)\0"
};

void CameraViewerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CameraViewerWidget *_t = static_cast<CameraViewerWidget *>(_o);
        switch (_id) {
        case 0: _t->setDesiredSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 1: { MjpegClient* _r = _t->connectTo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< MjpegClient**>(_a[0]) = _r; }  break;
        case 2: { MjpegClient* _r = _t->exit();
            if (_a[0]) *reinterpret_cast< MjpegClient**>(_a[0]) = _r; }  break;
        case 3: _t->setLiveFps((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->newImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CameraViewerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CameraViewerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CameraViewerWidget,
      qt_meta_data_CameraViewerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CameraViewerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CameraViewerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CameraViewerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CameraViewerWidget))
        return static_cast<void*>(const_cast< CameraViewerWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CameraViewerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
