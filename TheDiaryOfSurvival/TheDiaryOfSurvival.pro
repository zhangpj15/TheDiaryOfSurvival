<<<<<<< HEAD
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
    loadwin.cpp

HEADERS  += mainwindow.h \
    info.h \
    regis.h \
    game.h \
    start.h \
    death.h \
    loadwin.h

FORMS    += mainwindow.ui \
    info.ui \
    regis.ui \
    game.ui \
    start.ui \
    death.ui \
    loadwin.ui

RESOURCES += \
    res.qrc
=======
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
    death.cpp \
    player.cpp \
    bullet.cpp \
    enemy.cpp \
    emanager.cpp \
    pmanager.cpp \
    end.cpp

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
    end.h

FORMS    += mainwindow.ui \
    info.ui \
    regis.ui \
    game.ui \
    start.ui \
    death.ui \
    end.ui

RESOURCES += \
    res.qrc
>>>>>>> dd55227652adac31587b730d96f728213a15b4e9
