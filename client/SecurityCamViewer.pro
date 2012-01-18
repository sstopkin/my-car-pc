
TEMPLATE = app
TARGET = securitycamviewer

INCLUDEPATH += . ../common
DEPENDPATH  += . ../common

MOC_DIR     = .build
OBJECTS_DIR = .build
RCC_DIR     = .build
UI_DIR      = .build

FORMS	      =

HEADERS       = \
                ../common/getopt/getopt.h \
                CameraViewerWidget.h \
		MainWindow.h \
    MjpegClient.h


SOURCES       = MjpegClient.cpp \
                ../common/getopt/getopt.cpp \
                CameraViewerWidget.cpp \
		MainWindow.cpp \
                main.cpp
QT           += network

CONFIG += debug


opencv: {
        HEADERS += ../common/EyeCounter.h
        SOURCES += ../common/EyeCounter.cpp

        DEFINES += OPENCV_ENABLED
        LIBS += -L/usr/local/lib -lcv -lcxcore
}
