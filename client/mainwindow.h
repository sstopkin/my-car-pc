#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QString configFile,QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSize m_frameSize;
    void readConfig(QString);

    QString host;
    int     port;
    QString path;
    QString user;
    QString pass;
    int fps;
};

#endif // MAINWINDOW_H
