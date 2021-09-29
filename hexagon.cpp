#include "hexagon.h"

Hexagon::Hexagon(float _x, float _y, array<float,3> color, float radio, double _xv, double _yv, float _xmax, float _xmin, float _ymax, float _ymin):
    Figure{_x, _y, color},
    radio{radio},
    xmax{_xmax},
    xmin{_xmin},
    ymax{_ymax},
    ymin{_ymin}
{
    dibujado = true;
    xv = _xv;
    yv = _yv;
    angle = 0;
}

void Hexagon::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, 0);
    glRotatef(angle -= 6, 0, 0, 1);//hace girar el hexagono, para ello hay que darle valor al eje z
    glColor3f(color.at(0), color.at(1), color.at(2));
    glBegin(GL_POLYGON);
    for(float i{0}; i< 2*3.14; i+=1.05){
        float x_ball = radio*cos(i);
        float y_ball = radio*sin(i);
        glVertex2f(x_ball,y_ball);
    }
    glEnd();
}

void Hexagon::traslacion()
{
    x += xv;
    if(x > xmax || x < xmin){
        xv *= -1;
    }

    y += yv;
    if(y > ymax || y < ymin){
        yv *= -1;
    }
}

float Hexagon::distance(float _x, float _y)
{
    return sqrt (((_x - x) * (_x - x)) + ((_y - y) * (_y - y)));
}

bool Hexagon::getDibujado() const
{
    return dibujado;
}

void Hexagon::setDibujado(bool value)
{
    dibujado = value;
}
