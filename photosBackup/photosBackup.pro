TEMPLATE = app
TARGET = photosBackup

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    window.cpp \
    helpers.cpp

HEADERS += \
    window.h \
    helpers.h



macx{
    QMAKE_CFLAGS += -std=c++11

    _BOOST_PATH = /usr/local/Cellar/boost
    INCLUDEPATH += "$${_BOOST_PATH}/include/"
    #LIBS += -L$${_BOOST_PATH}/lib

    ## Use only one of these:
    #LIBS += -lboost_filesystem -lboost_system # using dynamic lib
    LIBS += $${_BOOST_PATH}/lib/libboost_filesystem.a $${_BOOST_PATH}/lib/libboost_system.a # using static lib

    CONFIG += static
}
