#ifndef BALL_H
#define BALL_H
#include <figure.h>
#include <array>
#include <iostream>

using namespace std;

class Ball : public Figure
{
private:
    float radio, xmax, xmin, ymax, ymin;//variables para saber cuando la pelota tiene que cambiar de direccion si choca con los frames
    float ballXmax, ballXmin, ballYmax, ballYmin;//variables para la hitbox de la pelota
    bool dibujado;
    float ax, ay;
public:
    Ball(float _radio, float _x, float _y, array <float,3> color, float _xmax, float _xmin, float _ymax, float _ymin,
         float _ballXmax, float _ballXmin, float _ballYmax, float _ballYmin,
         float _xv,
         float _yv = 0,
         float _ax = 0,
         float _ay = -0.2f//La aceleracion ha de ser mucho menor que la de la gravedad normal(-9.8) ya que en el dibujado de la ventana la vision es mucho menor, la vision esta comprendida entre 1 y -1.2; si se quisiera que la gravedad fuese la normal (-9.8), la vision de la ventana habria de estar comprendida entre al menos 100 y -100.
         );
    void draw();
    void traslacion();
    float distance(float _x, float _y);

    bool getDibujado() const;
    void setDibujado(bool value);

    float getBallXmax() const;
    void setBallXmax(float value);
    float getBallXmin() const;
    void setBallXmin(float value);
    float getBallYmax() const;
    void setBallYmax(float value);
    float getBallYmin() const;
    void setBallYmin(float value);

    float getAx() const;
    void setAx(float value);

    float getAy() const;
    void setAy(float value);
};

#endif // BALL_H
