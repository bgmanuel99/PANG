#include "jugador.h"

Jugador::Jugador(float _y, float _xa, float _ya, float _xiab, float _yiab, float _xdab, float _ydab, array <float,3> color):
    Figure{0, 0, color},
    xa{_xa}, ya{_ya}, xiab{_xiab}, yiab{_yiab}, xdab{_xdab}, ydab{_ydab}
{
    y = _y;
    xv = 0.04;
    xvm = 0.02;
    bufoDobleDisparo = false;
    dibujado = true;
}

void Jugador::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(xa, ya, 0.0);
    glVertex3f(xiab, yiab, 0.0f);
    glVertex3f(xdab, ydab, 0.0f);
    glEnd();
}

void Jugador::traslacion()
{
    x += xvm;

    if(x > 0.88 || x < -0.88){
        xvm *= -1;
    }
}

bool Jugador::getDibujado() const
{
    return dibujado;
}

void Jugador::setDibujado(bool value)
{
    dibujado = value;
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

void Jugador::dobleDisparoUpgrade()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslated(x, y, 0);
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    glVertex3f(-0.03f, 0.06f, 0.0f);
    glVertex3f(-0.05f, 0.06f, 0.0f);
    glVertex3f(-0.05f, -0.06f, 0.0f);
    glVertex3f(-0.03f, -0.06f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(0.03f, 0.06f, 0.0f);
    glVertex3f(0.05f, 0.06f, 0.0f);
    glVertex3f(0.05f, -0.06f, 0.0f);
    glVertex3f(0.03f, -0.06f, 0.0f);
    glEnd();
}

void Jugador::invulnerabilidadUpgrade()
{
    color = {1.0, 1.0, 1.0};
}

void Jugador::setBufoDobleDisparo(bool value)
{
    bufoDobleDisparo = value;
}

bool Jugador::getBufoDobleDisparo() const
{
    return bufoDobleDisparo;
}
