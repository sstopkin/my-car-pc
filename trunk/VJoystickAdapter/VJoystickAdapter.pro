#-------------------------------------------------
#
# Project created by QtCreator 2011-03-19T13:15:06
#
#-------------------------------------------------

QT       += core gui

TARGET = VJoystickAdapter
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    v_joystick_adapter.cpp

INCLUDEPATH += C:/Users/best/QtCreatorProjects/v_joy_qt/SDL-1.2.14/lib
LIBS        += C:/Users/best/QtCreatorProjects/v_joy_qt/SDL-1.2.14/lib/libSDL.dll.a
LIBS        += C:/Users/best/QtCreatorProjects/v_joy_qt/SDL-1.2.14/lib/libSDLmain.a

HEADERS  += mainwindow.h \
    v_joystick_adapter.h

FORMS    += mainwindow.ui
