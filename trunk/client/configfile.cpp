#include "configfile.h"
#include "QSettings"
#include "QDebug"
ConfigFile::ConfigFile(QString configFileName)
{
    QSettings settings(configFileName,QSettings::IniFormat);
    title = settings.value("window/windowTitle","Title").toString();
    //Load the defaults for use in the cameras section below
    host = settings.value("network/host","localhost").toString();
    portCam = settings.value("network/portCam",80).toInt();
    portData = settings.value("network/portData",8080).toInt();
    path = settings.value("network/path","/").toString();
    user = settings.value("network/user","").toString();
    pass = settings.value("network/pass","").toString();

    if((! settings.value("network/host").isNull() ||
        ! settings.value("network/portCam").isNull() ||
        ! settings.value("network/portData").isNull() ||
        ! settings.value("network/path").isNull() ||
        ! settings.value("network/login").isNull() ||
        ! settings.value("network/pass").isNull()))
    {
        qDebug() << "host or port or path is null in config";
    }

    fps = settings.value("cam/fps",25).toInt();
    qDebug() << "Viewer: Running at"<<fps<<" frames per second";

}
