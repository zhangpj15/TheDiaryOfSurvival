#-------------------------------------------------
#
# Project created by QtCreator 2017-11-28T20:36:10
#
#-------------------------------------------------
QT       += sql
QT       += core gui
QT       += multimedia

CONFIG   +=resources_big
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
    end.cpp \
    goods.cpp \
    gmanager.cpp \
    barriers.cpp \
    bmanager.cpp \
    loadwin.cpp \
    boss.cpp \
    bomanager.cpp\
    rank.cpp

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
    end.h \
    goods.h \
    gmanager.h \
    barriers.h \
    bmanager.h \
    loadwin.h \
    boss.h \
    bomanager.h\
    rank.h

FORMS    += mainwindow.ui \
    info.ui \
    regis.ui \
    game.ui \
    start.ui \
    death.ui \
    end.ui \
    loadwin.ui\
    rank.ui

RESOURCES += \
    res.qrc
