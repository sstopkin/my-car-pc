#include "netw.h"
#include "QDebug"

netw::netw() ://QString host,int port,int timeout
socket(0)
{
    host = "motoprogger.tk";
    port = 55001;
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

    socket = new QTcpSocket();
    host = "motoprogger.tk";
    port = 55001;;

//    if(m_socket)
//    {
//        m_socket->abort();
//        delete m_socket;
//        m_socket = 0;
//    }
    socket = new QTcpSocket();
//    m_socket = new QTcpSocket(this);/*
//    connect(m_socket, SIGNAL(readyRead()),    this,   SLOT(dataReady()));
//    connect(m_socket, SIGNAL(disconnected()), this,   SLOT(lostConnection()));
//    connect(m_socket, SIGNAL(disconnected()), this, SIGNAL(socketDisconnected()));
//    connect(m_socket, SIGNAL(connected()),    this, SIGNAL(socketConnected()));
//    connect(m_socket, SIGNAL(connected()),    this,   SLOT(connectionReady()));
//    connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SIGNAL(socketError(QAbstractSocket::SocketError)));
//    connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(lostConnection(QAbstractSocket::SocketError)));*/

    socket->connectToHost(host,port);
    socket->setReadBufferSize(1024 * 1024);

    char data[1024];
    sprintf(data, "GET HTTP/1.0\r\n");
    socket->write((const char*)&data,strlen((const char*)data));

    sprintf(data, "Host: %s\r\n",qPrintable(host));
    socket->write((const char*)&data,strlen((const char*)data));
}
