#include <QApplication>
#include <QDir>
#include "QMessageBox"
#include "QtGui"

#include "mainwindow.h"
#include "configfile.h"
#include "tray.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(systray);

    QApplication app(argc, argv);

    if (!QSystemTrayIcon::isSystemTrayAvailable()) {
        QMessageBox::critical(0, QObject::tr("Systray"),
                              QObject::tr("I couldn't detect any system tray "
                                          "on this system."));
        return 1;
    }

    tray apptray();
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
