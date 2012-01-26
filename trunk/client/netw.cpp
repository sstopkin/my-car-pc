#include "netw.h"
#include "QDebug"

netw::netw() ://QString host,int port,int timeout
socket(0)
{
    socket = new QTcpSocket();
    host = "motoprogger.tk";
    port = 55002;

}

netw::~netw(){
    if(socket)
    {
        socket->abort();
        socket->disconnectFromHost();
        //m_socket->waitForDisconnected();
        socket->deleteLater();
        delete socket;
        //m_socket = 0;
    }
}

void netw::conn(){
    socket->connectToHost(host,port);
    socket->setReadBufferSize(1024 * 1024);


    sprintf(data, "GET HTTP/1.0\r\n");
    socket->write((const char*)&data,strlen((const char*)data));

    sprintf(data, "Host: %s\r\n",qPrintable(host));
    socket->write((const char*)&data,strlen((const char*)data));
}

void netw::disconn(){
    socket->disconnectFromHost();
    socket->abort();
}
