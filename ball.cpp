#include "ball.h"
#include <GL/glut.h>
#include <math.h>

Ball::Ball(float _radio, float _x, float _xv, array <float,3> color, float _xmax, float _xmin, float _ymax, float _ymin):
    Figure{0, 0, color},
    radio{_radio},
    xmax{_xmax},
    ymin{_ymin},
    xmin{_xmin},
    ymax{_ymax}
{
    x = _x;
    xv = _xv;
    yv = -0.02;
}

void Ball::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Ball::traslacion()
{
    x += xv;
    if(x > xmax || x < xmin){
        xv *= -1;
    }

    y += yv;
    if(y > ymax || y < ymin) yv *= -1;
    if(y > 0.0 && y < 0.3) yv -= 0.001;
    if(y > 0.3 && y < 0.5) yv -= 0.001;
}

void Ball::disappear()
{
    color = {0.5, 1.0, 1.0};
    xv = 0.0;
    yv = 0.0;
    x = 0.8;
    y = 0.8;
}

float Ball::distance(float _x, float _y)
{
    return sqrt (((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}

array<float, 3> Ball::getColor()
{
    return color;
}

void Ball::setX(float _x)
{
    x = _x;
}

void Ball::setY(float _y)
{
    y = _y;
}
