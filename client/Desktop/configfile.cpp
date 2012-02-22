#include "configfile.h"
#include "QSettings"
#include "QDebug"
ConfigFile::ConfigFile(QString configFileName)
{
    QSettings settings(configFileName,QSettings::IniFormat);

    host = settings.value("network/host","localhost").toString();
    portCam = settings.value("network/portCam",80).toInt();
    portData = settings.value("network/portData",8080).toInt();
    path = settings.value("network/path","/").toString();
    user = settings.value("network/user","").toString();
    pass = settings.value("network/pass","").toString();
    autoReconnect = settings.value("network,autoReconnect","true").toBool();

    fps = settings.value("cam/fps",25).toInt();

    title = settings.value("window/windowTitle","Title").toString();

    inputType = settings.value("joy/inputType",1).toInt();
    updateInterval = settings.value("joy/updateInterval",1).toInt();

//    if((! settings.value("network/host").isNull() ||
//        ! settings.value("network/portCam").isNull() ||
//        ! settings.value("network/portData").isNull() ||
//        ! settings.value("network/path").isNull() ||
//        ! settings.value("network/login").isNull() ||
//        ! settings.value("network/pass").isNull()))
//    {
//        qDebug() << "host or port or path is null in config";
//    }
}
