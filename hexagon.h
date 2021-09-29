#ifndef HEXAGON_H
#define HEXAGON_H
#include <GL/glut.h>
#include <iostream>
#include <math.h>
#include <figure.h>
#include <array>

class Hexagon : public Figure
{
private:
    float radio;
    bool dibujado;
    float angle;
    float xmax, xmin, ymax, ymin;
public:
    Hexagon(float _x, float _y, array<float,3> color, float radio, double _xv, double _yv, float _xmax, float _xmin, float _ymax, float _ymin);
    void draw();
    void traslacion();
    float distance(float _x, float _y);
    bool getDibujado() const;
    void setDibujado(bool value);
};

#endif // HEXAGON_H
