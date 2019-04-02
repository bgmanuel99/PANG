#include "bufos.h"

Bufos::Bufos(float radio, array <float,3> color, array <float,3> colorBufo):
    Figure{0, 0, color},
    radio{radio},
    colorBufo{colorBufo}
{
    yv = 0.005;
    xb1 = 0.29;
    yb1 = -0.01;
    xb2 = 0.31;
    yb2 = 0.01;
}

float Bufos::getXb1() const
{
    return xb1;
}

void Bufos::setXb1(float value)
{
    xb1 = value;
}

float Bufos::getYb1() const
{
    return yb1;
}

void Bufos::setYb1(float value)
{
    yb1 = value;
}

float Bufos::getXb2() const
{
    return xb2;
}

void Bufos::setXb2(float value)
{
    xb2 = value;
}

float Bufos::getYb2() const
{
    return yb2;
}

void Bufos::setYb2(float value)
{
    yb2 = value;
}

void Bufos::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslated(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.02f, 0.02f, 0.0f);
    glVertex3f(-0.02f, 0.02f, 0.0f);
    glVertex3f(-0.02f, -0.02f, 0.0f);
    glVertex3f(0.02f, -0.02f, 0.0f);
    glEnd();
    glColor3f(colorBufo.at(0), colorBufo.at(1), colorBufo.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Bufos::drawBufoDobleDisparoParteI()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslated(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.02f, 0.02f, 0.0f);
    glVertex3f(-0.02f, 0.02f, 0.0f);
    glVertex3f(-0.02f, -0.02f, 0.0f);
    glVertex3f(0.02f, -0.02f, 0.0f);
    glEnd();
}

void Bufos::drawBufoDobleDisparoParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslated(xb1, yb1, 0);
    glColor3f(colorBufo.at(0), colorBufo.at(1), colorBufo.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Bufos::drawBufoDobleDisparoParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslated(xb2, yb2, 0);
    glColor3f(colorBufo.at(0), colorBufo.at(1), colorBufo.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Bufos::traslacion()
{
    y -= yv;
    yb1 -= yv;
    yb2 -= yv;

    if(y < -0.925){
        yv = 0;
    }
}

void Bufos::disappear()
{
    color = {0.5, 1.0, 1.0};
    colorBufo = {0.5, 1.0, 1.0};
    x = 0.8;
    y = 0.8;
    xb1 = 0.8;
    yb1 = 0.8;
    xb2 = 0.8;
    yb2 = 0.8;
    xv = 0.0;
    yv = 0.0;
}

float Bufos::distance(float _x, float _y)
{
    return sqrt(((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}
