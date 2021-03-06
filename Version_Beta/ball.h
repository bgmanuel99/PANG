#ifndef BALL_H
#define BALL_H
#include <figure.h>
#include <array>
#include <iostream>

using namespace std;

class Ball : public Figure
{
private:
    float radio, xmax, xmin, ymax, ymin;
    bool dibujado;
public:
    Ball(float _radio, float _x, float _xv, array <float,3> color, float _xmax, float _xmin, float _ymax, float _ymin);
    void draw();
    void traslacion();
    void disappear();
    float distance(float _x, float _y);
    bool getDibujado() const;
    void setDibujado(bool value);
};

#endif // BALL_H
