#include "CameraViewerWidget.h"
#include "MjpegClient.h"

#include <QPainter>
#include <QDebug>

CameraViewerWidget::CameraViewerWidget(QWidget *parent)
	: QWidget(parent)
	, m_client(0)
//    , m_desiredSize(100,100)
    , m_liveFps(25)
{

	connect(&m_updateTimer, SIGNAL(timeout()), this, SLOT(update()));
	
	m_updateTimer.setInterval((int)(1000/m_liveFps));
	m_updateTimer.start();

};

CameraViewerWidget::~CameraViewerWidget()
{
	if(m_client)
	{
		m_client->quit();
		m_client->wait();
		delete m_client;
		m_client = 0;
	}
}
	
void CameraViewerWidget::setLiveFps(double fps)
{
	m_liveFps = fps;
	
	m_updateTimer.stop();
	m_updateTimer.setInterval((int)(1000/m_liveFps));
	m_updateTimer.start();
}

void CameraViewerWidget::setDesiredSize(QSize size)
{
    if(m_client)
        m_client->setAutoResize(size);
    m_desiredSize = size;
}

QSize CameraViewerWidget::sizeHint() const
{
    return m_desiredSize;
}
	
MjpegClient * CameraViewerWidget::connectTo(QString host, int port, QString path, const QString& user, const QString& pass)
{
	if(m_client)
	{
		m_client->quit();
		m_client->wait();
		delete m_client;
	}
	
	m_client = new MjpegClient();
	m_client->connectTo(host,port,path,user,pass);
	m_client->setAutoResize(rect().size());
	// TODO catch resize event and update autoresize accordingly
	m_client->start();
	connect(m_client, SIGNAL(newImage(QImage)), this, SLOT(newImage(QImage)));
	
	return m_client;	
}

MjpegClient * CameraViewerWidget::exit(){

    m_client->exit();
    if(m_client)
    {
        //утечка памяти где то в MjpegClient
        m_client->quit();
        m_client->wait();
        delete m_client;
//        m_client = 0;
    }
        m_updateTimer.stop();
    qDebug("exit =)");
    return 0;
}
	
void CameraViewerWidget::paintEvent(QPaintEvent */*event*/)
{
	QPainter painter(this);

	if(!m_currentImage.isNull())
	{
		painter.drawImage(rect(),m_currentImage);
	}
	else
	{
 		painter.fillRect(rect(),Qt::black);
 		painter.setPen(Qt::white);
        painter.drawText(5,15,QString("Waiting for video from %1:%2...").arg(m_client->host()).arg(m_client->port()));
	}
}

void CameraViewerWidget::newImage(QImage image)
{
	m_currentImage = image;
}
