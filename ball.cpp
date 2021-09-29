#include "ball.h"
#include <GL/glut.h>
#include <math.h>

Ball::Ball(float _radio, float _x, float _y, array <float,3> color, float _xmax, float _xmin, float _ymax, float _ymin,
           float _ballXmax, float _ballXmin, float _ballYmax, float _ballYmin, float _xv, float _yv,
           float _ax, float _ay):
    Figure{_x, _y, color},
    radio{_radio},
    xmax{_xmax},
    ymin{_ymin},
    xmin{_xmin},
    ymax{_ymax},
    ax{_ax},
    ay{_ay}
{
    xv = _xv;
    yv = _yv;
    dibujado = true;
    ballXmax = x + _ballXmax;
    ballXmin = x - _ballXmin;
    ballYmax = y + _ballYmax;
    ballYmin = y - _ballYmin;
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
    x = x + xv*0.05 + ax*0.05*0.05/2.0;
    y = y + yv*0.05 + ay*0.05*0.05/2.0;

    xv = xv + ax*0.05;
    yv = yv + ay*0.05;

    if(y < ymin){
        yv *= -1;
    }

    if(y > ymax){
        yv *= -1;
    }

    if(x < xmin){
        xv *= -1;
    }

    if(x > xmax){
        xv *= -1;
    }
}

float Ball::distance(float _x, float _y)
{
    return sqrt (((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}

float Ball::getBallXmax() const
{
    return ballXmax;
}

void Ball::setBallXmax(float value)
{
    ballXmax = value;
}

float Ball::getBallXmin() const
{
    return ballXmin;
}

void Ball::setBallXmin(float value)
{
    ballXmin = value;
}

float Ball::getBallYmax() const
{
    return ballYmax;
}

void Ball::setBallYmax(float value)
{
    ballYmax = value;
}

float Ball::getBallYmin() const
{
    return ballYmin;
}

void Ball::setBallYmin(float value)
{
    ballYmin = value;
}

bool Ball::getDibujado() const
{
    return dibujado;
}

void Ball::setDibujado(bool value)
{
    dibujado = value;
}

float Ball::getAx() const
{
    return ax;
}

void Ball::setAx(float value)
{
    ax = value;
}

float Ball::getAy() const
{
    return ay;
}

void Ball::setAy(float value)
{
    ay = value;
}

