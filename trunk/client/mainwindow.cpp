#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "MjpegClient.h"
#include "CameraViewerWidget.h"
#include "netw.h"
#include <QMessageBox>
MainWindow::MainWindow(ConfigFile *cfgfile,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cfg = cfgfile;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    setWindowTitle(cfg->title);

    CameraViewerWidget *viewer = new CameraViewerWidget(this);
    viewer->connectTo(cfg->host,cfg->portCam,cfg->path,cfg->user,cfg->pass);
    viewer->setDesiredSize(m_frameSize);
    viewer->setLiveFps(cfg->fps);
    ui->gridLayout->addWidget(viewer);
}

void MainWindow::on_pushButton_2_clicked()
{
    netw network;
    network.conn();
}
