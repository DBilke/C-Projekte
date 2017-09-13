#-------------------------------------------------
#
# Project created by QtCreator 2016-02-02T22:15:17
#
#-------------------------------------------------

QT       += core gui axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        client.cpp

HEADERS  += client.h

FORMS    += client.ui

win32: LIBS += -L$$PWD/../lib/ -lmysqlcppconn

INCLUDEPATH += $$PWD/../include
DEPENDPATH += $$PWD/../include
