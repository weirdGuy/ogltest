#-------------------------------------------------
#
# Project created by QtCreator 2016-01-17T21:28:13
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = openGL
TEMPLATE = app


SOURCES += main.cpp\
        window.cpp \
    myglwidget.cpp

HEADERS  += window.h \
    myglwidget.h

FORMS    += window.ui
