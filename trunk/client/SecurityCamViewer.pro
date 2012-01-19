
TEMPLATE = app
TARGET = securitycamviewer

INCLUDEPATH += . ../common
DEPENDPATH  += . ../common

MOC_DIR     = .build
OBJECTS_DIR = .build
RCC_DIR     = .build
UI_DIR      = .build

FORMS	      = \
    mainwindow.ui

HEADERS       = \
                #../common/getopt/getopt.h \
                CameraViewerWidget.h \
    MjpegClient.h \
    mainwindow.h


SOURCES       = MjpegClient.cpp \
                #../common/getopt/getopt.cpp \
                CameraViewerWidget.cpp \
                main.cpp \
    mainwindow.cpp
QT           += network

CONFIG += debug


opencv: {
        HEADERS += ../common/EyeCounter.h
        SOURCES += ../common/EyeCounter.cpp

        DEFINES += OPENCV_ENABLED
        LIBS += -L/usr/local/lib -lcv -lcxcore
}
