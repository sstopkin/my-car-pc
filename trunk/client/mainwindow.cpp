#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"
MainWindow::MainWindow(ConfigFile *cfgfile,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    buttonVector(QVector<bool>(MAX_JOYSTICK_BUTTONS)),
    m_Joy_Id(-1),
    joy(0)
{
    ui->setupUi(this);
    cfg = cfgfile;
    setWindowTitle(cfg->title);

    if(cfg->inputType==2){
        joy = new JoystickAdapter();
    }
    buttonVector.fill(false);
    setAvalibleJoystick();

    network=new net;
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

    network->conn();

}

void MainWindow::setAvalibleJoystick()
{
    ui->joystickComboBox->clear();
    ui->joystickComboBox->addItems(JoystickAdapter::getAvaliableJoystickName());
}

void MainWindow::connectToJoystick(){
    int joyComboBox = ui->joystickComboBox->currentIndex();

    if(joyComboBox != -1)
    {
        m_Joy_Id = joyComboBox;

        if(joy->open(m_Joy_Id))
        {
            connect(joy, SIGNAL(sigButtonChanged(int, bool)), this, SLOT(buttonSetup(int,bool)));
            connect(joy, SIGNAL(sigAxisChanged(int,int)), this, SLOT(axisSetup(int,int)));
            connect(joy, SIGNAL(sigHatCanged(int,int)), this, SLOT(hatSetup(int,int)));
            connect(joy, SIGNAL(sigBallChanged(int,int,int)), this, SLOT(ballSetup(int,int,int)));
        }

        QString joyName = joy->getJoystickName();
        if(joyName == "")
            joyName = "Not connected";
//        ui->joystickNameLabel->setText(joyName);
//        ui->joystickIdLabel->setText(tr("%1").arg(m_adapter->getJoystickId()));
//        ui->joystickAxisLabel->setText(tr("%1").arg(m_adapter->getJoystickNumAxes()));
//        ui->joystickHatsLabel->setText(tr("%1").arg(m_adapter->getJoystickNumHats()));
//        ui->joystickBallsLabel->setText(tr("%1").arg(m_adapter->getJoystickNumBalls()));
//        ui->joystickButtonsLabel->setText(tr("%1").arg(m_adapter->getJoystickNumButtons()));

//        ui->joystickStateBox->setEnabled(true);
//        ui->joystickInformationBox->setEnabled(true);
        ui->connectPushButton->setDisabled(true);
        ui->disconnectPushButton->setEnabled(true);
        ui->joystickComboBox->setDisabled(true);
//        ui->rescanPushButton->setDisabled(true);
    }
}

void MainWindow::disconnectFromJoystick()
{
    if(joy->isConnected())
    {
        joy->close();
        disconnect(joy, SIGNAL(sigButtonChanged(int, bool)), this, SLOT(buttonSetup(int,bool)));
        disconnect(joy, SIGNAL(sigAxisChanged(int,int)), this, SLOT(axisSetup(int,int)));
        disconnect(joy, SIGNAL(sigHatCanged(int,int)), this, SLOT(hatSetup(int,int)));
        disconnect(joy, SIGNAL(sigBallChanged(int,int,int)), this, SLOT(ballSetup(int,int,int)));
    }

//    ui->joystickStateBox->setDisabled(true);
//    ui->joystickInformationBox->setDisabled(true);

    ui->connectPushButton->setEnabled(true);
    ui->disconnectPushButton->setDisabled(true);
    ui->joystickComboBox->setEnabled(true);
//    ui->rescanPushButton->setEnabled(true);

    m_Joy_Id = -1;

    //setDefaultText();
    setAvalibleJoystick();
}

void MainWindow::on_connectPushButton_clicked()
{
    connectToJoystick();
}

void MainWindow::on_disconnectPushButton_clicked()
{
    disconnectFromJoystick();
}

void MainWindow::axisSetup(int id, int state)
{
//    switch(id)
//    {
//    case 0:
//        ui->joystickXaxisLabel->setText(tr("%1").arg(state));
//        break;
//    case 1:
//        ui->joystickYaxisLabel->setText(tr("%1").arg(-1*state));
//        break;
//    case 2:
//        ui->joystickZLTaxisLabel->setText(tr("%1").arg(state));
//        break;
//    case 3:
//        ui->joystickXrotationLabel->setText(tr("%1").arg(state));
//        break;
//    case 4:
//        ui->joystickYrotationLabel->setText(tr("%1").arg(-1*state));
//        break;
//    case 5:
//        ui->joystickZRTaxisLabel->setText(tr("%1").arg(state));
//        break;
//    }
}

void MainWindow::hatSetup(int id, int state)
{
    Q_UNUSED(id);
//    ui->joystickPOV0Label->setText(tr("%1").arg(state));
}

void MainWindow::buttonSetup(int id, bool state)
{
    buttonVector[id] = state;

    QString buttonTest = "";
    for(int i = 0; i < MAX_JOYSTICK_BUTTONS; ++i)
    {
        if(buttonVector[i] == true)
        {
            if(i < 10)
                buttonTest += tr("0%1  ").arg(i);
            else
                buttonTest += tr("%1").arg(i);
        }
    }
//    ui->joystickButtonsTestLabel->setText(buttonTest);
}

void MainWindow::ballSetup(int id, int stateX, int stateY)
{
    Q_UNUSED(id);
    Q_UNUSED(stateX);
    Q_UNUSED(stateY);
}

void MainWindow::on_pushButton_4_clicked()
{
    network->disconn();
}
