#include "disparo.h"
#include <GL/glut.h>
#include <math.h>

Disparo::Disparo(float _radio, float _x, float _y, float _yv, float _xv, array <float,3> color):
    Figure{0, 0, color},
    radio{_radio}
{
    y = _y;
    x = _x;
    xv = _xv;
    yv = _yv;
}

void Disparo::draw()
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

void Disparo::traslacion()
{
    y += yv;
    x += xv;
}

float Disparo::distance(float _x, float _y)
{

}
