#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "configfile.h"
#include "CameraViewerWidget.h"
#include "joystick.h"
#include "net.h"
#include "MjpegClient.h"
#include "QTimer"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(ConfigFile *cfgfile,QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_connectPushButton_clicked();
    void on_disconnectPushButton_clicked();

    void connectToJoystick();
    void disconnectFromJoystick();
//    void rescanJoystickDevice();

    void axisSetup(int id, int state);
    void hatSetup(int id, int state);
    void buttonSetup(int id, bool state);
    void ballSetup(int id, int stateX, int stateY);

    void writeData();
private:
    void setAvalibleJoystick();
    enum { MAX_JOYSTICK_BUTTONS = 30 };

    Ui::MainWindow *ui;
    QSize m_frameSize;
    ConfigFile *cfg;
    CameraViewerWidget *viewer;
    JoystickAdapter *joy;
    QVector<bool> buttonVector;
    int m_Joy_Id;
    net *network;
    QTimer *timer;

    int povState;
    int buttonState[MAX_JOYSTICK_BUTTONS];
    int joyXaxis;
    int joyYaxis;
    int ZLTaxis;
    int Xrotation;
    int Yrotation;
    int ZRTaxis;
};

#endif // MAINWINDOW_H
