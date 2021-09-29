TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    figure.cpp \
    ball.cpp \
    jugador.cpp \
    frame.cpp \
    disparo.cpp \
    thunderbolt.cpp \
    bufos.cpp \
    hexagon.cpp \
    comida.cpp \
    plataformas.cpp

HEADERS += \
    figure.h \
    ball.h \
    jugador.h \
    frame.h \
    disparo.h \
    thunderbolt.h \
    bufos.h \
    hexagon.h \
    comida.h \
    plataformas.h

LIBS += -lglut -lGLU -lGL
