#include "plataformas.h"

Plataformas::Plataformas(float _posicionX_VerticeIzquierdaArriba, float _posicionY_VerticeIzquierdaArriba,
                         float _posicionX_VerticeDerechaArriba, float _posicionY_VerticeDerechaArriba,
                         float _posicionX_VerticeDerechaAbajo, float _posicionY_VerticeDerechaAbajo,
                         float _posicionX_VerticeIzquierdaAbajo, float _posicionY_VerticeIzquierdaAbajo,
                         float _x, float _y, array<float,3> color, float _xmax, float _xmin, float _ymax, float _ymin):
    Figure{_x, _y, color},
    posicionX_VerticeIzquierdaArriba{_posicionX_VerticeIzquierdaArriba},
    posicionY_VerticeIzquierdaArriba{_posicionY_VerticeIzquierdaArriba},
    posicionX_VerticeDerechaArriba{_posicionX_VerticeDerechaArriba},
    posicionY_VerticeDerechaArriba{_posicionY_VerticeDerechaArriba},
    posicionX_VerticeDerechaAbajo{_posicionX_VerticeDerechaAbajo},
    posicionY_VerticeDerechaAbajo{_posicionY_VerticeDerechaAbajo},
    posicionX_VerticeIzquierdaAbajo{_posicionX_VerticeIzquierdaAbajo},
    posicionY_VerticeIzquierdaAbajo{_posicionY_VerticeIzquierdaAbajo},
    dibujado{true}
{
    xmax = x + _xmax;
    xmin = x - _xmin;
    ymax = y + _ymax;
    ymin = y - _ymin;
}

void Plataformas::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(posicionX_VerticeIzquierdaArriba, posicionY_VerticeIzquierdaArriba, 0.0f);
    glVertex3f(posicionX_VerticeDerechaArriba, posicionY_VerticeDerechaArriba, 0.0f);
    glVertex3f(posicionX_VerticeDerechaAbajo, posicionY_VerticeDerechaAbajo, 0.0f);
    glVertex3f(posicionX_VerticeIzquierdaAbajo, posicionY_VerticeIzquierdaAbajo, 0.0f);
    glEnd();
}

void Plataformas::traslacion()
{

}

float Plataformas::distance(float _x, float _y)
{
    return sqrt (((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}

bool Plataformas::getDibujado() const
{
    return dibujado;
}

void Plataformas::setDibujado(bool value)
{
    dibujado = value;
}


float Plataformas::getXmax() const
{
    return xmax;
}

void Plataformas::setXmax(float value)
{
    xmax = value;
}

float Plataformas::getXmin() const
{
    return xmin;
}

void Plataformas::setXmin(float value)
{
    xmin = value;
}

float Plataformas::getYmax() const
{
    return ymax;
}

void Plataformas::setYmax(float value)
{
    ymax = value;
}

float Plataformas::getYmin() const
{
    return ymin;
}

void Plataformas::setYmin(float value)
{
    ymin = value;
}
