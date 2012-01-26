#include "net.h"
net::net(ConfigFile *cfgfile,QObject *parent) :
    QObject(parent)
{
    cfg=cfgfile;
    socket = new QTcpSocket();
    connect(socket, SIGNAL(disconnected()), this,   SLOT(lostConn()));
    host = cfg->host;
    port = cfg->portData;
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

void net::sendData(int povState,int buttonState[30]){
    QString strSend;
    strSend+="p"+QString::number(povState)+"b";
    for(int i=0;i<30;i++){
        strSend+=QString::number(buttonState[i]);
    }
    strSend+="\n";
    sprintf(data, strSend.toAscii(),qPrintable(host));
    socket->write((const char*)&data,strlen((const char*)data));
}

void net::lostConn(){
    if(cfg->autoReconnect==true){
        QTimer::singleShot(1000,this,SLOT(reconn()));
    }
}

void net::reconn(){
    socket->connectToHost(host,port);
}

