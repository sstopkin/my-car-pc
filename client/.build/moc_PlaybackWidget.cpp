/****************************************************************************
** Meta object code from reading C++ file 'PlaybackWidget.h'
**
** Created: Wed 18. Jan 01:06:21 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PlaybackWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlaybackWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaybackWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      41,   15,   15,   15, 0x05,
      63,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   15,   15,   15, 0x0a,
     123,   15,   15,   15, 0x0a,
     154,   15,   15,   15, 0x0a,
     177,   15,   15,   15, 0x0a,
     203,  198,   15,   15, 0x0a,
     229,   15,   15,   15, 0x0a,
     283,  261,   15,   15, 0x0a,
     316,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaybackWidget[] = {
    "PlaybackWidget\0\0currentFrameChanged(int)\0"
    "numFramesChanged(int)\0"
    "statusChanged(PlaybackWidget::Status)\0"
    "setDesiredSize(QSize)\0"
    "setDailyRecordingPath(QString)\0"
    "setPlaybackFps(double)\0setCurrentFrame(int)\0"
    "date\0loadPlaybackDate(QString)\0"
    "setPlayDirection(PlayDirection)\0"
    "highlightEyes,logFile\0"
    "enableEyeDetection(bool,QString)\0"
    "updateImage()\0"
};

void PlaybackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaybackWidget *_t = static_cast<PlaybackWidget *>(_o);
        switch (_id) {
        case 0: _t->currentFrameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->numFramesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< PlaybackWidget::Status(*)>(_a[1]))); break;
        case 3: _t->setDesiredSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 4: _t->setDailyRecordingPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setPlaybackFps((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setCurrentFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->loadPlaybackDate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setPlayDirection((*reinterpret_cast< PlayDirection(*)>(_a[1]))); break;
        case 9: _t->enableEyeDetection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->updateImage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaybackWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaybackWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlaybackWidget,
      qt_meta_data_PlaybackWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaybackWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaybackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaybackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaybackWidget))
        return static_cast<void*>(const_cast< PlaybackWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlaybackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PlaybackWidget::currentFrameChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaybackWidget::numFramesChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaybackWidget::statusChanged(PlaybackWidget::Status _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
