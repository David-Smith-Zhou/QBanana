#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T15:12:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QBanana
TEMPLATE = app


SOURCES += .\src\main.cpp\
       .\src\ui\mainwindow.cpp \
    src/utils/log.cpp \
    src/ui/PageList.cpp \
    src/ui/PageMain.cpp \
    src/data_structure/list.cpp

HEADERS  += .\src\ui\mainwindow.h \
    src/utils/log.h \
    src/ui/PageList.h \
    src/ui/PageMain.h \
    src/data_structure/list.h

FORMS    += .\res\mainwindow.ui
