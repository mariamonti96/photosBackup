TEMPLATE = app
TARGET = photosBackup

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    window.cpp

HEADERS += \
    window.h

macx{
    QMAKE_CFLAGS += -std=c++11

    _BOOST_PATH = /usr/local/Cellar/boost/1.68.0
    INCLUDEPATH += "$${_BOOST_PATH}/include/"
    LIBS += -L$${_BOOST_PATH}/lib

    ## Use only one of these:
    LIBS += -lboost_filesystem -lboost_system
}
