#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T14:59:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib

DEFINES += IMAGECROPPER_LIBRARY

unix:TARGET = imagecropper
win32:TARGET = ../../dist/bin/imagecropper

HEADERS += \
    imagecropper.h \
    imagecropper_e.h \
    imagecropper_p.h \
    imagecropper_global.h

SOURCES += \
    imagecropper.cpp
