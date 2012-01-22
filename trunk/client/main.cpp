#include <QApplication>
#include "mainwindow.h"
#include "configfile.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(systray);

    QApplication app(argc, argv);

    ConfigFile cfg("config.ini");
    MainWindow gui(&cfg);
    gui.show();
    //QApplication::setQuitOnLastWindowClosed(false)
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
