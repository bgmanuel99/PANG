#include "jugador.h"
#include <GL/glut.h>
#include <math.h>

Jugador::Jugador(float _y, array <float,3> color):
    Figure{0, 0, color}
{
    y = _y;
    xv = 0.04;
    xvm = 0.02;
}

void Jugador::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.06f, 0.06f, 0.0f);
    glVertex3f(-0.06f, 0.06f, 0.0);
    glVertex3f(-0.06f, -0.06f, 0.0f);
    glVertex3f(0.06f, -0.06f, 0.0f);
    glEnd();
}

void Jugador::drawMaquina()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0f, -0.06f, 0.0f);
    glVertex3f(-0.06f, 0.06f, 0.0);
    glVertex3f(0.06f, 0.06f, 0.0f);
    glEnd();
}

void Jugador::traslacion()
{
    x += xvm;

    if(x > 0.88 || x < -0.88){
        xvm *= -1;
    }
}

void Jugador::disappear()
{
    color = {0.5, 1.0, 1.0};
}

float Jugador::distance(float _x, float _y)
{
    return sqrt (((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}

void Jugador::setX(float value)
{
    x = value;
}

double Jugador::getXV()const
{
    return xv;
}

void Jugador::setXV(double value)
{
    xv = value;
}

array<float,3> Jugador::getColor()
{
    return color;
}

void Jugador::appear()
{
    color = {1.0, 0.0, 0.0};
}
