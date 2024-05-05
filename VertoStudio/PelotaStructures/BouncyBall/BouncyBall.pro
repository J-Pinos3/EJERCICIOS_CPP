TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += console

SOURCES += \
        BouncyBall.cpp \
        gameobject.cpp \
        main.cpp \
        plane.cpp \
        texturemanager.cpp


LIBS += -L C:/SDL2/lib/x64 -lSDL2 -lSDL2main
LIBS += -L C:/SDL2/lib/x64/SDL2.dll
INCLUDEPATH += C:/SDL2/lib/x64

LIBS += -L C:/SDL2Image/lib/x64/SDL2_image.lib
LIBS += -L C:/SDL2Image/lib/x64/SDL2_image.dll
INCLUDEPATH += C:/SDL2Image/lib/x64

INCLUDEPATH += C:/SDL2/include
INCLUDEPATH += C:/SDL2Image/include

HEADERS += \
    BouncyBall.h \
    gameobject.h \
    plane.h \
    texturemanager.h



