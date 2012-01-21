#include <QApplication>
#include <QDir>

#include "mainwindow.h"
#include "configfile.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    QString configFileName="config.ini";
    ConfigFile cfg("config.ini");
    MainWindow gui(&cfg);
    gui.show();
	
	return app.exec();
}
/*
private:
    ConfigFile *cfg;
public:
    SomeClass(ConfigFile *cfgfile) {cfg = cfgfile};
}

void main(int argc, char[][] argv) {
    ConfigFile cfg;
    SomeClass cls(&cfg);
}
*/
/*
class SomeClass {
private:
    ConfigFile &cfg;
public:
    SomeClass(ConfigFile &cfgfile) {cfg = cfgfile};
}

void main(int argc, char[][] argv) {
    ConfigFile cfg;
    SomeClass cls(cfg);
}
*/
