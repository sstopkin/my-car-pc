#include "netw.h"
#include "QTcpSocket"
#include "QDebug"

netw::netw()//QString host,int port,int timeout
{

}

void netw::conn(){
    QString m_host = "motoprogger.tk";
    int m_port = 50001;

    QTcpSocket *m_socket;
//    if(m_socket)
//    {
//        m_socket->abort();
//        delete m_socket;
//        m_socket = 0;
//    }

    m_socket = new QTcpSocket();//this
//    connect(m_socket, SIGNAL(readyRead()),    this,   SLOT(dataReady()));
//    connect(m_socket, SIGNAL(disconnected()), this,   SLOT(lostConnection()));
//    connect(m_socket, SIGNAL(disconnected()), this, SIGNAL(socketDisconnected()));
//    connect(m_socket, SIGNAL(connected()),    this, SIGNAL(socketConnected()));
//    connect(m_socket, SIGNAL(connected()),    this,   SLOT(connectionReady()));
//    connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SIGNAL(socketError(QAbstractSocket::SocketError)));
//    connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(lostConnection(QAbstractSocket::SocketError)));

    m_socket->connectToHost(m_host,m_port);
    m_socket->setReadBufferSize(1024 * 1024);

    char data[1024];
    sprintf(data, "GET %s HTTP/1.0\r\n",qPrintable(m_host));
    m_socket->write((const char*)&data,strlen((const char*)data));

    if(m_socket)
    {
        m_socket->abort();
        m_socket->disconnectFromHost();
        //m_socket->waitForDisconnected();
        m_socket->deleteLater();
        delete m_socket;
        //m_socket = 0;
    }
}
