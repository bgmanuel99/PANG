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
