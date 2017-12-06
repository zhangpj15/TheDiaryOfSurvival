#-------------------------------------------------
#
# Project created by QtCreator 2017-11-28T20:36:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TheDiaryOfSurvival
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    info.cpp \
    regis.cpp \
    game.cpp \
    start.cpp \
    death.cpp

HEADERS  += mainwindow.h \
    info.h \
    regis.h \
    game.h \
    start.h \
    death.h

FORMS    += mainwindow.ui \
    info.ui \
    regis.ui \
    game.ui \
    start.ui \
    death.ui

RESOURCES += \
    res.qrc
