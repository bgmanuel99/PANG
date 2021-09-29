#ifndef JUGADOR_H
#define JUGADOR_H
#include <array>
#include <figure.h>
#include <iostream>
#include <math.h>
#include <GL/glut.h>

using namespace std;

class Jugador : public Figure
{
private:
    double xvm;
    bool bufoDobleDisparo;
    float xa, ya, xiab, yiab, xdab, ydab;
    bool dibujado;
public:
    Jugador(float _y, float _xa, float _ya, float _xiab, float _yiab, float _xdab, float _ydab, array <float,3> color);
    void draw();
    void traslacion();
    float distance(float _x, float _y);
    void setX(float value);
    double getXV()const;
    void setXV(double value);

    void dobleDisparoUpgrade();
    void invulnerabilidadUpgrade();

    void setBufoDobleDisparo(bool value);
    bool getBufoDobleDisparo() const;

    bool getDibujado() const;
    void setDibujado(bool value);
};

#endif // JUGADOR_H
