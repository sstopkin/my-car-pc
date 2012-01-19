#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "MjpegClient.h"
#include "CameraViewerWidget.h"

#include <QSettings>
#include <QMessageBox>
#include <QGridLayout>
MainWindow::MainWindow(QString configFile,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSettings settings(configFile,QSettings::IniFormat);
    QString title = settings.value("window/windowTitle","Title").toString();
    setWindowTitle(title);

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

    //Load the defaults for use in the cameras section below
    QString mainHost = settings.value("network/host","localhost").toString();
    int     mainPort = settings.value("network/port",80).toInt();
    QString mainPath = settings.value("network/path","/").toString();
    if((! settings.value("host").isNull() ||
        ! settings.value("port").isNull() ||
        ! settings.value("path").isNull()))
    {
        qDebug() << "host or port or path is null in config";
    }

    int fps = settings.value("cam/fps",25).toInt();
    qDebug() << "Viewer: Running at"<<fps<<" frames per second";

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
    ui->gridLayout->addWidget(viewer,row,col);
}

MainWindow::~MainWindow()
{
    delete ui;
}
