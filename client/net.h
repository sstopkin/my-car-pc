#ifndef NET_H
#define NET_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
#include "configfile.h"
class net : public QObject
{
    Q_OBJECT
public:
    explicit net(ConfigFile *cfg,QObject *parent = 0);
    void conn();
    void disconn();

    void sendData(int,int[],int,int,int,int,int,int);
signals:
    
public slots:
private slots:
    void lostConn();
private:
    void reconn();
    ConfigFile *cfg;
    QString host;
    int port;
    QTcpSocket *socket;
    char data[1024];
};

#endif // NET_H
