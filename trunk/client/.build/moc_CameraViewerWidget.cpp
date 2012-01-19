/****************************************************************************
** Meta object code from reading C++ file 'CameraViewerWidget.h'
**
** Created: Thu 19. Jan 21:34:47 2012
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
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      80,   55,   42,   19, 0x0a,
     147,  127,   42,   19, 0x2a,
     201,  186,   42,   19, 0x2a,
     242,  232,   42,   19, 0x2a,
     270,  265,   42,   19, 0x2a,
     294,  289,   19,   19, 0x0a,
     324,  319,   19,   19, 0x0a,
     357,  355,   19,   19, 0x0a,
     380,   19,   19,   19, 0x0a,
     421,  399,   19,   19, 0x0a,
     468,  454,   19,   19, 0x2a,
     493,   19,   19,   19, 0x2a,
     514,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CameraViewerWidget[] = {
    "CameraViewerWidget\0\0setDesiredSize(QSize)\0"
    "MjpegClient*\0host,port,path,user,pass\0"
    "connectTo(QString,int,QString,QString,QString)\0"
    "host,port,path,user\0"
    "connectTo(QString,int,QString,QString)\0"
    "host,port,path\0connectTo(QString,int,QString)\0"
    "host,port\0connectTo(QString,int)\0host\0"
    "connectTo(QString)\0flag\0"
    "setPlaybackEnabled(bool)\0path\0"
    "setDailyRecordingPath(QString)\0d\0"
    "setPlaybackFps(double)\0setLiveFps(double)\0"
    "highlightEyes,logFile\0"
    "enableEyeDetection(bool,QString)\0"
    "highlightEyes\0enableEyeDetection(bool)\0"
    "enableEyeDetection()\0newImage(QImage)\0"
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
        case 2: { MjpegClient* _r = _t->connectTo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< MjpegClient**>(_a[0]) = _r; }  break;
        case 3: { MjpegClient* _r = _t->connectTo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< MjpegClient**>(_a[0]) = _r; }  break;
        case 4: { MjpegClient* _r = _t->connectTo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MjpegClient**>(_a[0]) = _r; }  break;
        case 5: { MjpegClient* _r = _t->connectTo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MjpegClient**>(_a[0]) = _r; }  break;
        case 6: _t->setPlaybackEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setDailyRecordingPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setPlaybackFps((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setLiveFps((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->enableEyeDetection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->enableEyeDetection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->enableEyeDetection(); break;
        case 13: _t->newImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
