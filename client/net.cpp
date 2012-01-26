#include "net.h"
net::net(QObject *parent) :
    QObject(parent)
{
    socket = new QTcpSocket();
    host = "motoprogger.tk";
    port = 55002;
}


void net::conn(){
    socket->connectToHost(host,port);
    socket->setReadBufferSize(1024 * 1024);
    sprintf(data, "Host %s is connected",qPrintable(host));
    socket->write((const char*)&data,strlen((const char*)data));
}

void net::disconn(){
    socket->disconnectFromHost();
    socket->abort();
}

void net::sendData(int povState){
    QString strSend=QString::number(povState);
    sprintf(data, strSend.toAscii(),qPrintable(host));
    socket->write((const char*)&data,strlen((const char*)data));
}

