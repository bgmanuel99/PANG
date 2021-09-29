#include "thunderbolt.h"
#include <GL/glut.h>
#include <math.h>

ThunderBolt::ThunderBolt(float _x, float _y, float _xia, float _yia, float _xda, float _yda, float _xdab,
                         float _ydab, float _xiab, float _yiab, array <float,3> color, int _parImpar):
    Figure{0, 0, color},
    xia{_xia}, yia{_yia}, xda{_xda}, yda{_yda}, xdab{_xdab}, ydab{_ydab}, xiab{_xiab}, yiab{_yiab},
    parImpar{_parImpar}
{
    x = _x;
    y = _y;
    xmin = x - 0.05;
    xmax = x + 0.05;
    ymin = y - 0.75;
}

float ThunderBolt::getYmin() const
{
    return ymin;
}

void ThunderBolt::setYmin(float value)
{
    ymin = value;
}

float ThunderBolt::getXmin() const
{
    return xmin;
}

void ThunderBolt::setXmin(float value)
{
    xmin = value;
}

float ThunderBolt::getXmax() const
{
    return xmax;
}

void ThunderBolt::setXmax(float value)
{
    xmax = value;
}

float ThunderBolt::getXDAB() const
{
    return xdab;
}

float ThunderBolt::getYDAB() const
{
    return ydab;
}

float ThunderBolt::getXIAB() const
{
    return xiab;
}

float ThunderBolt::getYIAB() const
{
    return yiab;
}

void ThunderBolt::draw()
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

void ThunderBolt::traslacion()
{

}

float ThunderBolt::distance(float _x, float _y)
{

}

int ThunderBolt::getParImpar() const
{
    return parImpar;
}

void ThunderBolt::setParImpar(int value)
{
    parImpar = value;
}
