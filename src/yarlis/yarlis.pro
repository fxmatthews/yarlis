#-------------------------------------------------
#
# Project created by QtCreator 2013-11-01T16:39:34
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = yarlis
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    entities/impl/position.cpp \
    entities/impl/hitbox.cpp \
    entities/impl/entity.cpp \
    entities/impl/takeable.cpp \
    entities/impl/object.cpp \
    entities/impl/player.cpp

HEADERS += \
    entities/position.h \
    entities/hitbox.h \
    entities/entity.h \
    entities/takeable.h \
    entities/object.h \
    entities/player.h
