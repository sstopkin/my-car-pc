#ifndef CONFIGFILE_H
#define CONFIGFILE_H
#include "QString"
class ConfigFile
{
public:
    ConfigFile(QString configFileName);
    QString host;
    int portCam;
    int portData;
    QString path;
    QString user;
    QString pass;
    int fps;
    QString title;
    int inputType;
    int updateInterval;
    bool autoReconnect;
};

#endif // CONFIGFILE_H
