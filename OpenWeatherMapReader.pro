#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T19:26:29
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = OpenWeatherMapReader
CONFIG   += console
CONFIG   -= app_bundle


TEMPLATE = app


SOURCES += main.cpp \
    src/httpRequest.cpp

HEADERS += \
    include/httpRequest.h
