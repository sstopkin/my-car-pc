#ifndef NETW_H
#define NETW_H

#include "QString"

class netw
{
public:
    netw();//QString host,int port,int timeout
    int conn();
};

#endif // NETW_H
