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
    float posicionX_CirculoRojo1, posicionY_CirculoRojo1, posicionX_CirculoRojo2, posicionY_CirculoRojo2;//variables que son las coordenadas para los circulos del corazon
    bool dibujado;
    float ymin;
public:
    Bufos(float radio, array<float,3> color, array <float,3> colorBufo, float _x, float _y, float _ymin);
    void draw();//dibuja el bufo de invulnaribilidad
    void drawBufoDobleDisparoParteI();//dibuja el cuadrado para el bufo del doble disparo
    void drawBufoDobleDisparoParteII();//dibuja uno de los circulos del bufo del doble disparo
    void drawBufoDobleDisparoParteIII();//dibuja el otro circulo del bufo del doble disparo
    void drawCorazonParteI();//dibuja el triangulo del corazon
    void drawCorazonParteII();//dibuja un circulo del corazon
    void drawCorazonParteIII();//dibuja el otro circulo del corazon
    void drawRelojParteI();//dibuja la parte superior izquierda del reloj
    void drawRelojParteII();//dibuja la parte superior derecha del reloj
    void drawRelojParteIII();//dibuja la parte inferior izquierda del reloj
    void drawRelojParteIV();//dibuja la parte inferior derecha del reloj
    void drawRelojParteV();//dibuja el cristal superior del reloj
    void drawRelojParteVI();//dibuja el cristal inferior del reloj
    void drawRelojParteVII();//dibuja la arena superior del reloj
    void drawRelojParteVIII();//dibuja la arena inferior del reloj
    void traslacion();
    float distance(float _x, float _y);
    bool getDibujado() const;
    void setDibujado(bool value);

    //Funciones para el dibujado de bufo de doble disparo
    float getXb1() const;
    void setXb1(float value);
    float getYb1() const;
    void setYb1(float value);
    float getXb2() const;
    void setXb2(float value);
    float getYb2() const;
    void setYb2(float value);

    //Funciones para el dibujado del corazon
    float getPosicionX_CirculoRojo1() const;
    void setPosicionX_CirculoRojo1(float value);
    float getPosicionY_CirculoRojo1() const;
    void setPosicionY_CirculoRojo1(float value);
    float getPosicionX_CirculoRojo2() const;
    void setPosicionX_CirculoRojo2(float value);
    float getPosicionY_CirculoRojo2() const;
    void setPosicionY_CirculoRojo2(float value);
};

#endif // BUFOS_H
