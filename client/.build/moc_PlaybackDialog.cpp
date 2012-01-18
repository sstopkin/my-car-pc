/****************************************************************************
** Meta object code from reading C++ file 'PlaybackDialog.h'
**
** Created: Wed 18. Jan 01:06:21 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PlaybackDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlaybackDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaybackDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   16,   15,   15, 0x0a,
      54,   52,   15,   15, 0x0a,
      99,   77,   15,   15, 0x0a,
     143,  132,   15,   15, 0x08,
     178,  173,   15,   15, 0x28,
     204,   15,   15,   15, 0x28,
     227,   15,   15,   15, 0x08,
     243,   15,   15,   15, 0x08,
     265,   15,   15,   15, 0x08,
     303,   15,   15,   15, 0x08,
     323,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaybackDialog[] = {
    "PlaybackDialog\0\0path\0"
    "setDailyRecordingPath(QString)\0d\0"
    "setPlaybackFps(double)\0highlightEyes,logFile\0"
    "enableEyeDetection(bool,QString)\0"
    "year,month\0updateCalendarWidget(int,int)\0"
    "year\0updateCalendarWidget(int)\0"
    "updateCalendarWidget()\0loadDate(QDate)\0"
    "numFramesChanged(int)\0"
    "statusChanged(PlaybackWidget::Status)\0"
    "playButtonClicked()\0applyFpsValue(int)\0"
};

void PlaybackDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaybackDialog *_t = static_cast<PlaybackDialog *>(_o);
        switch (_id) {
        case 0: _t->setDailyRecordingPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setPlaybackFps((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->enableEyeDetection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->updateCalendarWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->updateCalendarWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateCalendarWidget(); break;
        case 6: _t->loadDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->numFramesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->statusChanged((*reinterpret_cast< PlaybackWidget::Status(*)>(_a[1]))); break;
        case 9: _t->playButtonClicked(); break;
        case 10: _t->applyFpsValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaybackDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaybackDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlaybackDialog,
      qt_meta_data_PlaybackDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaybackDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaybackDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaybackDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaybackDialog))
        return static_cast<void*>(const_cast< PlaybackDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PlaybackDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
