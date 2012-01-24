
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
    configfile.h \
    joystick.h

SOURCES       = MjpegClient.cpp \
                CameraViewerWidget.cpp \
                main.cpp \
    mainwindow.cpp \
    netw.cpp \
    configfile.cpp \
    joystick.cpp
QT           += network
CONFIG += debug

#RESOURCES += \
#    systray.qrc
#INCLUDEPATH += . ../common
#DEPENDPATH  += . ../common

INCLUDEPATH += . ../SDL-1.2.15/lib
DEPENDPATH += . ../SDL-1.2.15/lib
LIBS        += . ../SDL-1.2.15/lib/libSDL.dll.a
LIBS        += . ../SDL-1.2.15/lib/libSDLmain.a
#LIBS        += C:/Users/best/QtCreatorProjects/v_joy_qt/SDL-1.2.14/lib/libSDL.dll.a
#LIBS        += C:/Users/best/QtCreatorProjects/v_joy_qt/SDL-1.2.14/lib/libSDLmain.a

#LIBS += C:/Users/BEST/Desktop/my-car-pc/libssh-0.5.0/lib/ssh.lib
#INCLUDEPATH += C:/Users/BEST/Desktop/my-car-pc/libssh-0.5.0/lib
