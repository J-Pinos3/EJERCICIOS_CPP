TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        vector.cpp
QMAKE_CXXFLAGS += -std=c++17
HEADERS += \
    vector.h
