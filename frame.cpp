#include "frame.h"
#include <GL/glut.h>

Frame::Frame(float _x, float _y, float _xia, float _yia, float _xda, float _yda, float _xdab,
             float _ydab, float _xiab, float _yiab, array <float,3> color):
    Figure{0, 0, color},
    xia{_xia}, yia{_yia}, xda{_xda}, yda{_yda}, xdab{_xdab}, ydab{_ydab}, xiab{_xiab}, yiab{_yiab}
{
    x = _x;
    y = _y;
    dibujado = false;
}

void Frame::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0),color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(xia, yia, 0.0f);
    glVertex3f(xda, yda, 0.0f);
    glVertex3f(xdab, ydab, 0.0f);
    glVertex3f(xiab, yiab, 0.0f);
    glEnd();
}

void Frame::drawBarraDeNivel(array<float,3> colorVertice_IzquierdaArriba, array<float,3> colorVertice_DerechaArriba, array<float,3> colorVertice_DerechaAbajo, array<float,3> colorVertice_IzquierdaAbajo)
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glBegin(GL_POLYGON);
    glColor3f(colorVertice_IzquierdaArriba.at(0), colorVertice_IzquierdaArriba.at(1), colorVertice_IzquierdaArriba.at(2));
    glVertex3f(xia, yia, 0.0f);
    glColor3f(colorVertice_DerechaArriba.at(0), colorVertice_DerechaArriba.at(1), colorVertice_DerechaArriba.at(2));
    glVertex3f(xda, yda, 0.0f);
    glColor3f(colorVertice_DerechaAbajo.at(0), colorVertice_DerechaAbajo.at(1), colorVertice_DerechaAbajo.at(2));
    glVertex3f(xdab, ydab, 0.0f);
    glColor3f(colorVertice_IzquierdaAbajo.at(0), colorVertice_IzquierdaAbajo.at(1), colorVertice_IzquierdaAbajo.at(2));
    glVertex3f(xiab, yiab, 0.0f);
    glEnd();
}

bool Frame::getDibujado() const
{
    return dibujado;
}

void Frame::setDibujado(bool value)
{
    dibujado = value;
}

void Frame::traslacion()
{

}

float Frame::distance(float _x, float _y)
{

}
