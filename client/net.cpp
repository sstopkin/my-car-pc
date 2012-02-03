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
/*
F - т€говый двигатель, движение вперЄд
R - т€говый двигатель, движение назад
B - т€говый двигатель, торможение
S - рулевое управление
*/
void net::sendData(int povState,int buttonState[30]){
    QString strSend;

    /*strSend+="p"+QString::number(povState)+"b";
    for(int i=0;i<30;i++){
        strSend+=QString::number(buttonState[i]);
    }
    strSend+="\n";
    */
    switch (povState) {
    case 1 ://U
        strSend+="F999S500";
        break;
    case 2 ://R
        strSend+="B000S999";
        break;
    case 4 ://D
        strSend+="R999S500";
        break;
    case 8 ://L
        strSend+="B000S000";
        break;
    case 3 ://UR
        strSend+="F999S999";
        break;
    case 6 ://RD
        strSend+="R999S999";
        break;
    case 12 ://LD
        strSend+="R999S000";
        break;//LU
    case 9 :
        strSend+="F999S000";
        break;
    default :
        strSend+="B000S500";
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

