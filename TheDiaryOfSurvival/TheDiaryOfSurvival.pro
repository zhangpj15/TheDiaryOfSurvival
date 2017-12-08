#-------------------------------------------------
#
# Project created by QtCreator 2017-11-28T20:36:10
#
#-------------------------------------------------
QT       += sql
QT       += gui
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
    death.cpp \
    player.cpp \
    bullet.cpp \
    enemy.cpp \
    emanager.cpp \
    pmanager.cpp \
    end.cpp\
    loadwin.cpp

HEADERS  += mainwindow.h \
    info.h \
    regis.h \
    game.h \
    start.h \
    death.h \
    player.h \
    bullet.h \
    enemy.h \
    emanager.h \
    pmanager.h \
    end.h\
    loadwin.h

FORMS    += mainwindow.ui \
    info.ui \
    regis.ui \
    game.ui \
    start.ui \
    death.ui \
    end.ui\
    loadwin.ui

RESOURCES += \
    res.qrc

