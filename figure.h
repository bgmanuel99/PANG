#ifndef FIGURE_H
#define FIGURE_H
#include <array>
#include <vector>
#include <chrono>

using namespace std;

class Figure
{
protected:
    float x, y;
    double xv, yv;
    array <float,3> color;
public:
    Figure(float _x, float _y, array <float,3> _color);
    virtual void draw() = 0;
    virtual void traslacion() = 0;
    float getX()const;
    float getY()const;
    virtual void disappear() = 0;
    virtual float distance(float _x, float _y) = 0;
};

#endif // FIGURE_H
