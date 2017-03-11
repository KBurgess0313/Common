#-------------------------------------------------
#
# Project created by QtCreator 2017-03-11T23:43:30
#
#-------------------------------------------------

QT       += widgets

TARGET = Common
TEMPLATE = lib
CONFIG += staticlib

SOURCES += common.cpp

HEADERS += common.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
