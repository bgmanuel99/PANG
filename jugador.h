#ifndef JUGADOR_H
#define JUGADOR_H
#include <array>
#include <figure.h>
#include <iostream>

using namespace std;

class Jugador : public Figure
{
private:
    double xvm;
public:
    Jugador(float _y, array <float,3> color);
    void draw();
    void drawMaquina();
    void traslacion();
    void disappear();
    float distance(float _x, float _y);
    void setX(float value);
    double getXV()const;
    void setXV(double value);
    array<float,3> getColor();
    void appear();
};

#endif // JUGADOR_H
