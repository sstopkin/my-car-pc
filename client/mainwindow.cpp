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

    readConfig(configFile);
}

void MainWindow::readConfig(QString configFile){
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
    host = settings.value("network/host","localhost").toString();
    port = settings.value("network/port",80).toInt();
    path = settings.value("network/path","/").toString();
    user = settings.value("network/user","").toString();
    pass = settings.value("network/pass","").toString();

    if((! settings.value("network/host").isNull() ||
        ! settings.value("network/port").isNull() ||
        ! settings.value("network/path").isNull() ||
        ! settings.value("network/login").isNull() ||
        ! settings.value("network/pass").isNull()))
    {
        qDebug() << "host or port or path is null in config";
    }

    fps = settings.value("cam/fps",25).toInt();
    qDebug() << "Viewer: Running at"<<fps<<" frames per second";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    CameraViewerWidget * viewer = new CameraViewerWidget(this);
    viewer->connectTo(host,port,path,user,pass);
    viewer->setDesiredSize(m_frameSize);
    viewer->setLiveFps(fps);
    ui->gridLayout->addWidget(viewer);
}
