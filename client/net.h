#ifndef NET_H
#define NET_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
class net : public QObject
{
    Q_OBJECT
public:
    explicit net(QObject *parent = 0);
    void conn();
    void disconn();

    void sendData(int);
signals:
    
public slots:

private:
    QString host;
    int port;
    QTcpSocket *socket;
    char data[1024];
};

#endif // NET_H
