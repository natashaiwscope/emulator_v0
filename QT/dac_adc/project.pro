#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T00:48:35
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dac_adc_demo
TEMPLATE = app

CONFIG += c++11
QMAKE_CXXFLAGS += -std=gnu++11

SOURCES += main.cpp
SOURCES += mainwindow.cpp 
SOURCES += QCustomPlot/qcustomplot.cpp 
SOURCES += plotarea.cpp 
SOURCES += pointstream.cpp

HEADERS  += mainwindow.h 
HEADERS  += QCustomPlot/qcustomplot.h 
HEADERS  += plotarea.h 
HEADERS  += pointstream.h

FORMS    += mainwindow.ui 
FORMS    += plotarea.ui

INCLUDEPATH += ../../lib/include

DESTDIR      = bin

unix {
MOC_DIR      = /tmp/$${TARGET}
RCC_DIR      = /tmp/$${TARGET}
OBJECTS_DIR  = /tmp/$${TARGET}
}

win {
MOC_DIR      = c:/tmp/$${TARGET}
RCC_DIR      = c:/tmp/$${TARGET}
OBJECTS_DIR  = c:/tmp/$${TARGET}
}

win32 {
DEFINES += WINDOWS_WAY
QWT_LOCATION = C:/Qt/4.8.7/extra/qwt-6.0.2
INCLUDEPATH += $${QWT_LOCATION}/src
LIBS += -L$${QWT_LOCATION}/lib -lqwt
}


QT       += core gui widgets network


message ("Host = " $${QMAKE_HOST.arch})

unix {
contains(QMAKE_HOST.arch, x86_64):{
    LIBS        += -L../../lib/linux64 -ludp
}

contains(QMAKE_HOST.arch, i686):{
    LIBS        += -L../../lib/linux32 -ludp
}
}

win32 {
    LIBS        += -L../../lib/win32 -ludp
#   QMAKE_POST_LINK += "copy ..\..\lib\win32\*.* bin  /y /q"
}
###################################################################
