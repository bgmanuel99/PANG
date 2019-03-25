#ifndef DISPARO_H
#define DISPARO_H
#include <figure.h>
#include <array>

class Disparo : public Figure
{
private:
    float radio;
public:
    Disparo(float _radio, float _x, float _y, float _yv, array <float,3> color);
    void draw();
    void traslacion();
    void disappear();
    float distance(float _x, float _y);
};

#endif // DISPARO_H
