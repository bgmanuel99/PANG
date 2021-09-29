#include "comida.h"

Comida::Comida(float _x, float _y, float radio, float radio1, array<float,3> color, array<float,3> colorComida, array<float,3> colorComida1, double _yv):
    Figure{0,0,color},
    colorComida{colorComida},
    colorComida1{colorComida1},
    dibujado{true},
    radio{radio},
    radio1{radio1}
{
    x = _x;
    y = _y;
    yv = _yv;
}

void Comida::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.03f, 0.03f, 0.0f);
    glVertex3f(-0.03f, 0.03f, 0.0f);
    glVertex3f(-0.03f, -0.03f, 0.0f);
    glVertex3f(0.03f, -0.03f, 0.0f);
    glEnd();
}

void Comida::drawManzanaParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida.at(0),colorComida.at(1), colorComida.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.025f, 0.025f, 0.0f);
    glVertex3f(0.015f, 0.025f, 0.0f);
    glVertex3f(0.015f, 0.015f, 0.0f);
    glVertex3f(0.025f, 0.015f, 0.0f);
    glEnd();
}

void Comida::drawManzanaParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida1.at(0),colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.006f, 0.06f, 0.0f);
    glVertex3f(-0.006f, 0.06f, 0.0f);
    glVertex3f(-0.006f, 0.03f, 0.0f);
    glVertex3f(0.006f, 0.03f, 0.0f);
    glEnd();
}

void Comida::drawNaranjaParteI()
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

void Comida::drawNaranjaParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida.at(0),colorComida.at(1), colorComida.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.005f, 0.05f, 0.0f);
    glVertex3f(-0.005f, 0.05f, 0.0f);
    glVertex3f(-0.005f, 0.027f, 0.0f);
    glVertex3f(0.005f, 0.027f, 0.0f);
    glEnd();
}

void Comida::drawNaranjaParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida.at(0),colorComida.at(1), colorComida.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.015f, 0.045f, 0.0f);
    glVertex3f(-0.005f, 0.045f, 0.0f);
    glVertex3f(-0.005f, 0.035f, 0.0f);
    glVertex3f(0.015f, 0.035f, 0.0f);
    glEnd();
}

void Comida::drawNaranjaParteIV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x + 0.01, y + 0.01, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawFresaParteI()
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

void Comida::drawFresaParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x -0.029, y -0.018, 0);
    glColor3f(colorComida.at(0),colorComida.at(1), colorComida.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.06f, 0.07f, 0.0f);
    glVertex3f(0.04f, 0.06f, 0.0f);
    glVertex3f(0.03f, 0.07f, 0.0f);
    glVertex3f(0.02f, 0.06f, 0.0f);
    glVertex3f(-0.001f, 0.07f, 0.0f);
    glVertex3f(0.01f, 0.05f, 0.0f);
    glEnd();
}

void Comida::drawFresaParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x + 0.01, y + 0.02, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawFresaParteIV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x - 0.01, y + 0.015, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawFresaParteV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawHamburguesaParteI()
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

void Comida::drawHamburguesaParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida.at(0),colorComida.at(1), colorComida.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.029f, 0.012f, 0.0f);
    glVertex3f(-0.029f, 0.012f, 0.0f);
    glVertex3f(-0.029f, 0.008f, 0.0f);
    glVertex3f(0.029f, 0.008f, 0.0f);
    glEnd();
}

void Comida::drawHamburguesaParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida1.at(0),colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.03f, 0.008f, 0.0f);
    glVertex3f(-0.03f, 0.008f, 0.0f);
    glVertex3f(-0.03f, -0.012f, 0.0f);
    glVertex3f(0.03f, -0.012f, 0.0f);
    glEnd();
}

void Comida::drawHamburguesaParteIV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.029f, -0.012f, 0.0f);
    glVertex3f(-0.029f, -0.012f, 0.0f);
    glVertex3f(-0.029f, -0.016f, 0.0f);
    glVertex3f(0.029f, -0.016f, 0.0f);
    glEnd();
}

void Comida::drawHamburguesaParteV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.03f, -0.016f, 0.0f);
    glVertex3f(-0.03f, -0.016f, 0.0f);
    glVertex3f(-0.03f, -0.03f, 0.0f);
    glVertex3f(0.03f, -0.03f, 0.0f);
    glEnd();
}

void Comida::drawPizzaParteI()
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

void Comida::drawPizzaParteII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(colorComida.at(0), colorComida.at(1), colorComida.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = (radio-0.005)*cos(i);
        float y_ball = (radio-0.005)*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzaParteIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.001f, 0.03f, 0.0f);
    glVertex3f(-0.001f, 0.03f, 0.0f);
    glVertex3f(-0.001f, -0.03f, 0.0f);
    glVertex3f(0.001f, -0.03f, 0.0f);
    glEnd();
}

void Comida::drawPizzaParteIV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.03f, 0.001f, 0.0f);
    glVertex3f(-0.03f, 0.001f, 0.0f);
    glVertex3f(-0.03f, -0.001f, 0.0f);
    glVertex3f(0.03f, -0.001f, 0.0f);
    glEnd();
}

void Comida::drawPizzaParteV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(0.02f, 0.022f, 0.0f);
    glVertex3f(-0.02f, -0.018f, 0.0f);
    glVertex3f(-0.02f, -0.022f, 0.0f);
    glVertex3f(0.02f, 0.018f, 0.0f);
    glEnd();
}

void Comida::drawPizzaParteVI()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(-0.02f, 0.022f, 0.0f);
    glVertex3f(0.02f, -0.018f, 0.0f);
    glVertex3f(0.02f, -0.022f, 0.0f);
    glVertex3f(-0.02f, 0.018f, 0.0f);
    glEnd();
}

void Comida::drawPizzaParteVII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x+0.006, y+0.015, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzaParteVIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x+0.015, y+0.006, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzaParteIX()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x+0.015, y-0.006, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzaParteX()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x+0.006, y-0.015, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzaParteXI()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x-0.006, y-0.015, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzParteXII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x-0.015, y-0.006, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzaParteXIII()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x-0.015, y+0.006, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Comida::drawPizzaParteXIV()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x-0.006, y+0.015, 0);
    glColor3f(colorComida1.at(0), colorComida1.at(1), colorComida1.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=0.3){
        float x_ball = radio1*cos(i);
        float y_ball = radio1*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

float Comida::distance(float _x, float _y)
{
    return sqrt (((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}

void Comida::traslacion()
{
    y -= yv;

    if(y < -0.91){
        yv = 0;
    }
}

bool Comida::getDibujado() const
{
    return dibujado;
}

void Comida::setDibujado(bool value)
{
    dibujado = value;
}

array<float,3> Comida::getColorComida() const
{
    return colorComida;
}

void Comida::setColorComida(const array<float,3> &value)
{
    colorComida = value;
}

array<float,3> Comida::getColorComida1() const
{
    return colorComida1;
}

void Comida::setColorComida1(const array<float,3> &value)
{
    colorComida1 = value;
}
