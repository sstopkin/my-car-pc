#include "netw.h"
#include "QTcpSocket"
#include "QDebug"

netw::netw()//QString host,int port,int timeout
{

}

int netw::conn(){
    QString     serverName  = "alt-server.dyndns.org";
    quint16     serverPort  = 2001;
    const int   Timeout     = 5 * 1000;


    QTcpSocket socket;
    socket.connectToHost(serverName, serverPort);
    if (!socket.waitForConnected(Timeout)) {

        qDebug()<< "[1] "   << socket.error()
                << ": "     << socket.errorString();
        return 1;
    }


    if (!socket.waitForReadyRead(Timeout)) {

        qDebug()<< "[2] "   << socket.error()
                << ": "     << socket.errorString();
        return 2;
    }


    QByteArray  block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_8);

    out << (quint16)0;
    out << "Hello!!!\n";
    out.device()->seek(0);
    out << (quint16)(block.size() - sizeof(quint16));


    socket.write( block );
    socket.disconnectFromHost();
}
