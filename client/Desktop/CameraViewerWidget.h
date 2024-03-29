#ifndef CameraViewerWidget_H
#define CameraViewerWidget_H
#include "CameraViewerWidget.h"
#include <QWidget>
#include <QFileInfo>
#include <QImage>
#include <QTimer>

class MjpegClient;
class EyeCounter;

class CameraViewerWidget : public QWidget
{
	Q_OBJECT
public:
	CameraViewerWidget(QWidget *parent=0);
	~CameraViewerWidget();
	
	// QWidget::
	virtual QSize sizeHint () const;
	
	double liveFps() { return m_liveFps; }

	
	
public slots:
    void setDesiredSize(QSize);
	
    MjpegClient * connectTo(QString host, int port, QString path, const QString& user, const QString& pass);
    MjpegClient * exit();
	void setLiveFps(double);
	
protected:
	void paintEvent(QPaintEvent *event);

private slots:
	void newImage(QImage);

private:
	QImage m_currentImage;
	MjpegClient * m_client;
	
	QTimer m_updateTimer;
    QSize m_desiredSize;

    double m_liveFps;
};

#endif //CameraViewerWidget_H
