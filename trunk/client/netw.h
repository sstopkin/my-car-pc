#ifndef NETW_H
#define NETW_H

#include <QTcpSocket>
#include <QString>

class netw
{
public:
    netw();//QString host,int port,int timeout
    ~netw();
    void conn();
    void disconn();
private:
    QString host;
    int port;
    QTcpSocket *socket;
    char data[1024];
};

#endif // NETW_H
