TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp


INCLUDEPATH += "C:/AsioBoost/asio1240/include"
LIBS += -lws2_32
