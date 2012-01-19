#include "VideoWindow.h"

#include "MjpegClient.h"
#include "CameraViewerWidget.h"

#include <math.h>

#include <QSettings>
#include <QMessageBox>
#include <QGridLayout>

VideoWindow::VideoWindow(QString configFile,QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *layout = new QGridLayout(this);
    layout->setSpacing(0);
    //layout->setContentsMargins(0,0,0,0);
    layout->setContentsMargins(5,50,40,60);

//    if(verbose)
//        qDebug() << "Viewer: Reading settings from "<<configFile;


    QSettings settings(configFile,QSettings::IniFormat);

    QString title = settings.value("window-title","Camera Viewer").toString();
    setWindowTitle(title);

    if(!settings.value("window-pos").isNull())
    {
        QString pos = settings.value("window-pos","10x10").toString();
        QStringList part = pos.split("x");
        move(part[0].toInt(),part[1].toInt());
    }

    // Load the frame size (the "small" frame - the final frame size is computed automatically)
    QString size = settings.value("frame-size","640x480").toString();
    QStringList part = size.split("x");
    m_frameSize = QSize(part[0].toInt(),part[1].toInt());

//    if(verbose)
//        qDebug() << "Viewer: Frame size: "<<m_frameSize.width()<<"x"<<m_frameSize.height();

#ifdef OPENCV_ENABLED
    bool enableEyeCounting = settings.value("eye-counting","true").toString() == "true";
    bool highlightEyes;
    QString logFile;

    if(enableEyeCounting)
    {
        highlightEyes = settings.value("eye-highlight","true").toString() == "true";
        logFile = settings.value("eye-logfile","eyes-log.csv").toString();

    }
#endif

    // Setup all the threads and create the labels to view the images
    int numCameras = settings.value("num-cams",0).toInt();

    // Load the defaults for use in the cameras section below
    //    QString mainHost = settings.value("host","localhost").toString();
    //    int     mainPort = settings.value("port",80).toInt();
    //    QString mainPath = settings.value("path","/").toString();
    QString mainHost = "alt-server.dyndns.org";
    int     mainPort = 2000;
    QString mainPath = "/?action=stream";
    if((! settings.value("host").isNull() ||
        ! settings.value("port").isNull() ||
        ! settings.value("path").isNull()))
    {
        qDebug() << "host or port or path is null in config";
    }

//    if(verbose)
//        qDebug() << "Viewer: Using default host"<<mainHost<<", port"<<mainPort<<", path"<<mainPath;

//    if(verbose)
//        qDebug() << "Viewer: Going to read"<<numCameras<<"cameras";

    if(!numCameras)
    {
        QMessageBox::critical(this,"No Cameras","Sorry, no cameras were found in viewer.ini");
        QTimer::singleShot(0,this,SLOT(close()));
        return;
    }

    int fps = settings.value("fps",25).toInt();
//    if(verbose)
//        qDebug() << "Viewer: Running at"<<fps<<" frames per second";

    int row=0;
    int col=0;
    int i=0;
    QString group = QString("cam%1").arg(i);

    QString hostKey = QString("%1/host").arg(group);
    QString portKey = QString("%1/port").arg(group);
    QString pathKey = QString("%1/path").arg(group);

    QString host = settings.value(hostKey,mainHost).toString();
    int     port = settings.value(portKey,mainPort).toInt();
    QString path = settings.value(pathKey,mainPath).toString();

    QString user = settings.value(QString("%1/user").arg(group),"").toString();
    QString pass = settings.value(QString("%1/pass").arg(group),"").toString();

    CameraViewerWidget * viewer = new CameraViewerWidget(this);
    viewer->connectTo(host,port,path,user,pass);
    viewer->setDesiredSize(m_frameSize);
    viewer->setLiveFps(fps);

    layout->addWidget(viewer,row,col);

}

VideoWindow::~VideoWindow()
{

}

