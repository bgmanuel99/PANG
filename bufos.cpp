
#include "bufos.h"

Bufos::Bufos(float radio, array <float,3> color, array <float,3> colorBufo, float _x, float _y, float _ymin):
    Figure{_x, _y, color},
    radio{radio},
    colorBufo{colorBufo},
    ymin{_ymin}
{
    yv = 0.005;
    xb1 = 0.0;
    yb1 = 0.0;
    xb2 = 0.0;
    yb2 = 0.0;
    dibujado = true;
    posicionX_CirculoRojo1 = x + 0.015;
    posicionY_CirculoRojo1 = y + 0.035;
    posicionX_CirculoRojo2 = x - 0.015;
    posicionY_CirculoRojo2 = y + 0.035;
}

float Bufos::getPosicionX_CirculoRojo1() const
{
    return posicionX_CirculoRojo1;
}

void Bufos::setPosicionX_CirculoRojo1(float value)
{
    posicionX_CirculoRojo1 = value;
}

float Bufos::getPosicionY_CirculoRojo1() const
{
    return posicionY_CirculoRojo1;
}

void Bufos::setPosicionY_CirculoRojo1(float value)
{
    posicionY_CirculoRojo1 = value;
}

float Bufos::getPosicionX_CirculoRojo2() const
{
    return posicionX_CirculoRojo2;
}

void Bufos::setPosicionX_CirculoRojo2(float value)
{
    posicionX_CirculoRojo2 = value;
}

float Bufos::getPosicionY_CirculoRojo2() const
{
    return posicionY_CirculoRojo2;
}

void Bufos::setPosicionY_CirculoRojo2(float value)
{
    posicionY_CirculoRojo2 = value;
}

bool Bufos::getDibujado() const
{
    return dibujado;
}

void Bufos::setDibujado(bool value)
{
    dibujado = value;
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

void Bufos::drawCorazonParteI()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.03f, 0.03f, 0.0f);
    glVertex3f(-0.03f, 0.03f, 0.0f);
    glVertex3f(0.0f, -0.03f, 0.0f);
    glEnd();
}

void Bufos::drawCorazonParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslated(posicionX_CirculoRojo1, posicionY_CirculoRojo1, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Bufos::drawCorazonParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslated(posicionX_CirculoRojo2, posicionY_CirculoRojo2, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Bufos::drawRelojParteI()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.0f, 0.04f, 0.0f);
    glVertex3f(-0.03f, 0.04f, 0.0f);
    glVertex3f(-0.03f, 0.01f, 0.0f);
    glVertex3f(-0.01f, 0.01f, 0.0f);
    glVertex3f(-0.01f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();
}

void Bufos::drawRelojParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.0f, 0.04f, 0.0f);
    glVertex3f(0.03f, 0.04f, 0.0f);
    glVertex3f(0.03f, 0.01f, 0.0f);
    glVertex3f(0.01f, 0.01f, 0.0f);
    glVertex3f(0.01f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();
}

void Bufos::drawRelojParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.0f, -0.04f, 0.0f);
    glVertex3f(-0.03f, -0.04f, 0.0f);
    glVertex3f(-0.03f, -0.01f, 0.0f);
    glVertex3f(-0.01f, -0.01f, 0.0f);
    glVertex3f(-0.01f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();
}

void Bufos::drawRelojParteIV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.0f, -0.04f, 0.0f);
    glVertex3f(0.03f, -0.04f, 0.0f);
    glVertex3f(0.03f, -0.01f, 0.0f);
    glVertex3f(0.01f, -0.01f, 0.0f);
    glVertex3f(0.01f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();
}

void Bufos::drawRelojParteV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorBufo.at(0),colorBufo.at(1), colorBufo.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.025f, 0.035f, 0.0f);
    glVertex3f(-0.025f, 0.035f, 0.0f);
    glVertex3f(-0.025f, 0.015f, 0.0f);
    glVertex3f(0.025f, 0.015f, 0.0f);
    glEnd();
}

void Bufos::drawRelojParteVI()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorBufo.at(0),colorBufo.at(1), colorBufo.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.025f, -0.035f, 0.0f);
    glVertex3f(-0.025f, -0.035f, 0.0f);
    glVertex3f(-0.025f, -0.015f, 0.0f);
    glVertex3f(0.025f, -0.015f, 0.0f);
    glEnd();
}

void Bufos::drawRelojParteVII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.025f, 0.025f, 0.0f);
    glVertex3f(-0.025f, 0.025f, 0.0f);
    glVertex3f(-0.025f, 0.015f, 0.0f);
    glVertex3f(0.025f, 0.015f, 0.0f);
    glEnd();
}

void Bufos::drawRelojParteVIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.025f, -0.025f, 0.0f);
    glVertex3f(-0.025f, -0.025f, 0.0f);
    glVertex3f(-0.025f, -0.035f, 0.0f);
    glVertex3f(0.025f, -0.035f, 0.0f);
    glEnd();
}

void Bufos::traslacion()
{
    y -= yv;
    yb1 -= yv;
    yb2 -= yv;
    posicionY_CirculoRojo1 -= yv;
    posicionY_CirculoRojo2 -= yv;

    if(y < ymin){
        yv = 0;
    }
}

float Bufos::distance(float _x, float _y)
{
    return sqrt(((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}
