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
    thunderbolt.cpp

HEADERS += \
    figure.h \
    ball.h \
    jugador.h \
    frame.h \
    disparo.h \
    thunderbolt.h

LIBS += -lglut -lGLU -lGL
