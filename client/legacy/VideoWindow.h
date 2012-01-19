#ifndef VideoWindow_H
#define VideoWindow_H

class MjpegClient;

#include <QImage>
#include <QLabel>
#include <QTimer>

class VideoWindow : public QWidget
{
	Q_OBJECT
public:
    VideoWindow(QString configFile="config.ini",QWidget *parent=0);
	~VideoWindow();
	
private slots:
/*	void newImage(QImage);
	void updateFrames();*/
	
private:
	int m_rows;
	int m_cols;
	QSize m_frameSize;
	
};

#endif // MotionViewer_H
