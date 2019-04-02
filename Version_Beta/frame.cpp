#include "frame.h"
#include <GL/glut.h>

Frame::Frame(float _x, float _y, float _xia, float _yia, float _xda, float _yda, float _xdab,
             float _ydab, float _xiab, float _yiab, array <float,3> color):
    Figure{0, 0, color},
    xia{_xia}, yia{_yia}, xda{_xda}, yda{_yda}, xdab{_xdab}, ydab{_ydab}, xiab{_xiab}, yiab{_yiab}
{
    x = _x;
    y = _y;
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

void Frame::traslacion()
{

}

void Frame::disappear()
{

}

float Frame::distance(float _x, float _y)
{

}
