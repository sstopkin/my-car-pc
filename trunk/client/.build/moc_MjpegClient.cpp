/****************************************************************************
** Meta object code from reading C++ file 'MjpegClient.h'
**
** Created: Sun 22. Jan 21:42:12 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MjpegClient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MjpegClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MjpegClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      34,   12,   12,   12, 0x05,
      76,   12,   12,   12, 0x05,
      94,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,   12,   12,   12, 0x08,
     123,   12,   12,   12, 0x08,
     138,   12,   12,   12, 0x08,
     155,   12,   12,   12, 0x08,
     200,   12,   12,   12, 0x08,
     212,   12,   12,   12, 0x08,
     234,  230,   12,   12, 0x08,
     264,  251,   12,   12, 0x08,
     298,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MjpegClient[] = {
    "MjpegClient\0\0socketDisconnected()\0"
    "socketError(QAbstractSocket::SocketError)\0"
    "socketConnected()\0newImage(QImage)\0"
    "dataReady()\0processBlock()\0lostConnection()\0"
    "lostConnection(QAbstractSocket::SocketError)\0"
    "reconnect()\0connectionReady()\0url\0"
    "loadUrl(QString)\0networkReply\0"
    "handleNetworkData(QNetworkReply*)\0"
    "pollServer()\0"
};

void MjpegClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MjpegClient *_t = static_cast<MjpegClient *>(_o);
        switch (_id) {
        case 0: _t->socketDisconnected(); break;
        case 1: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->socketConnected(); break;
        case 3: _t->newImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->dataReady(); break;
        case 5: _t->processBlock(); break;
        case 6: _t->lostConnection(); break;
        case 7: _t->lostConnection((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->reconnect(); break;
        case 9: _t->connectionReady(); break;
        case 10: _t->loadUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->handleNetworkData((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->pollServer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MjpegClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MjpegClient::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MjpegClient,
      qt_meta_data_MjpegClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MjpegClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MjpegClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MjpegClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MjpegClient))
        return static_cast<void*>(const_cast< MjpegClient*>(this));
    return QThread::qt_metacast(_clname);
}

int MjpegClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MjpegClient::socketDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MjpegClient::socketError(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MjpegClient::socketConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MjpegClient::newImage(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
