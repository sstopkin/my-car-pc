#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(ConfigFile *cfgfile,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    buttonVector(QVector<bool>(MAX_JOYSTICK_BUTTONS)),
    m_Joy_ID(-1)
{
    ui->setupUi(this);
    cfg = cfgfile;
    setWindowTitle(cfg->title);

    if(cfg->inputType==2){
        joy = new JoystickAdapter();
    }
    buttonVector.fill(false);

    setAvalibleJoystick();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


viewer = new CameraViewerWidget(this);
    viewer->connectTo(cfg->host,cfg->portCam,cfg->path,cfg->user,cfg->pass);
    viewer->setDesiredSize(m_frameSize);
    viewer->setLiveFps(cfg->fps);
    ui->gridLayout->addWidget(viewer);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->gridLayout->removeWidget(viewer);
    viewer->exit();
}

void MainWindow::on_pushButton_3_clicked()
{
    netw network;
    network.conn();
}

void MainWindow::on_pushButton_4_clicked()
{

}

void MainWindow::setAvalibleJoystick()
{
    ui->comboBox->clear();
    ui->comboBox->addItems(JoystickAdapter::getAvaliableJoystickName());
}
