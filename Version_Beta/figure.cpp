#include "figure.h"

Figure::Figure(float _x, float _y, array <float,3> _color):
    x{_x},
    y{_y},
    color{_color}
{
    xv = 0;
    yv = 0;
}

float Figure::getX() const
{
    return x;
}

float Figure::getY() const
{
    return y;
}

void Figure::setX(float value)
{
    x = value;
}

void Figure::setY(float value)
{
    y = value;
}

array<float,3> Figure::getColor() const
{
    return color;
}

void Figure::setColor(const array<float,3> &value)
{
    color = value;
}
