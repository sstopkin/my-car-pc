#include <QApplication>
#include <QDir>

#include "mainwindow.h"
//#include "../common/getopt/getopt.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//	QString pluginPath = QString("%1/plugins").arg(QDir::currentPath());
//	app.addLibraryPath(pluginPath);
	
	// construct class from command line arguments
//	GetOpt opts(argc, argv);
	
//	bool verbose = false;
//	opts.addSwitch("verbose", &verbose);

	// add some switches
    QString configFile="config.ini";
//	opts.addOptionalOption('c',"config", &configFile, "viewer.ini");
	
	// do the parsing and check for errors
//	if (!opts.parse())
//	{
//		fprintf(stderr,"Usage: %s [--verbose] [-c|--config configfile]\n", qPrintable(opts.appName()));
//		return 1;
//	}
	
//	if(configFile.isEmpty())
//		configFile = "viewer.ini";
			
		
    MainWindow gui(configFile);
    gui.show();
//    VideoWindow viewer(configFile);//configFile
//    viewer.show();

	
	return app.exec();
}
