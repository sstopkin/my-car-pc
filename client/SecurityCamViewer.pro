
TEMPLATE = app
TARGET = securitycamviewer

MOC_DIR     = .build
OBJECTS_DIR = .build
RCC_DIR     = .build
UI_DIR      = .build

FORMS	      = \
    mainwindow.ui

HEADERS       = \
                CameraViewerWidget.h \
    MjpegClient.h \
    mainwindow.h \
    netw.h \
    configfile.h

SOURCES       = MjpegClient.cpp \
                CameraViewerWidget.cpp \
                main.cpp \
    mainwindow.cpp \
    netw.cpp \
    configfile.cpp
QT           += network xml svg
CONFIG += debug

RESOURCES += \
    systray.qrc
