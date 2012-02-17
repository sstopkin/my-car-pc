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
    //sprintf(data, "Host %s is connected",qPrintable(host));
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
void net::sendData(int povState,int buttonState[30], int joyX, int joyY, int rotX, int rotY, int joyZL, int joyZR){
    QString strSend;
    //joyXaxis,joyYaxis,Xrotation,Yrotation,ZLTaxis,ZRTaxis
    /*strSend+="p"+QString::number(povState)+"b";
    for(int i=0;i<30;i++){
        strSend+=QString::number(buttonState[i]);
    }
    strSend+="\n";
    */
    int mode=1;
    if (mode==1){
        switch (povState) {
        case 1 ://U
            strSend+="F255S250";
            break;
        case 2 ://R
            strSend+="B000S500";
            break;
        case 4 ://D
            strSend+="R255S250";
            break;
        case 8 ://L
            strSend+="B000S000";
            break;
        case 3 ://UR
            strSend+="F255S255";
            break;
        case 6 ://RD
            strSend+="R255S500";
            break;
        case 12 ://LD
            strSend+="R255S000";
            break;//LU
        case 9 :
            strSend+="F255S000";
            break;
        case 0 :
            strSend+="F000S250";
            break;
        default :
            strSend+="F000S20";
        }
   //     strSend+=QString::number(joyX)+" "+QString::number(joyY)+" "+QString::number(rotX)+" "+QString::number(rotY)+" "+QString::number(joyZL)+" "+QString::number(joyZR);
   //     strSend+="\n";
    }
    else{
        if(joyY>1){

        }
        if(joyY<1){

        }
    }
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

