#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T14:59:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

unix:TARGET = Cropper
win32:TARGET = ../../dist/bin/Cropper

SOURCES += main.cpp \
        demowidget.cpp

HEADERS  += \
        demowidget.h

win32:LIBS += -L$$OUT_PWD/../dist/bin/ -limagecropper
unix:LIBS += -L$$OUT_PWD/../src/ -limagecropper

INCLUDEPATH += $$PWD/../src
DEPENDPATH += $$PWD/../src

RESOURCES += \
        resources.qrc
