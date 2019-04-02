#ifndef BUFOS_H
#define BUFOS_H
#include <iostream>
#include <figure.h>
#include <array>
#include <math.h>
#include <GL/glut.h>

class Bufos : public Figure
{
private:
    float radio;
    array <float,3> colorBufo;
    float xb1, yb1, xb2, yb2;//variables que son las coordenadas de los circulos que se dibujan para el bufo del doble disparo
public:
    Bufos(float radio, array<float,3> color, array <float,3> colorBufo);
    void draw();//dibuja el bufo de invulnaribilidad
    void drawBufoDobleDisparoParteI();//dibuja el cuadrado para el bufo del doble disparo
    void drawBufoDobleDisparoParteII();//dibuja uno de los circulos del bufo del doble disparo
    void drawBufoDobleDisparoParteIII();//dibuja el otro circulo del bufo del doble disparo
    void traslacion();
    void disappear();
    float distance(float _x, float _y);
    float getXb1() const;
    void setXb1(float value);
    float getYb1() const;
    void setYb1(float value);
    float getXb2() const;
    void setXb2(float value);
    float getYb2() const;
    void setYb2(float value);
};

#endif // BUFOS_H
