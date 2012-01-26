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
private:
    QString host;
    int port;
    QTcpSocket *socket;
};

#endif // NETW_H
