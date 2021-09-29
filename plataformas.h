#ifndef PLATAFORMAS_H
#define PLATAFORMAS_H
#include <iostream>
#include <figure.h>
#include <array>
#include <math.h>
#include <GL/glut.h>

using namespace std;

class Plataformas : public Figure
{
private:
    float posicionX_VerticeIzquierdaArriba, posicionY_VerticeIzquierdaArriba;
    float posicionX_VerticeDerechaArriba, posicionY_VerticeDerechaArriba;
    float posicionX_VerticeDerechaAbajo, posicionY_VerticeDerechaAbajo;
    float posicionX_VerticeIzquierdaAbajo, posicionY_VerticeIzquierdaAbajo;
    float xmax, xmin, ymax, ymin;
    bool dibujado;
public:
    Plataformas(float _posicionX_VerticeIzquierdaArriba, float _posicionY_VerticeIzquierdaArriba,
                float _posicionX_VerticeDerechaArriba, float _posicionY_VerticeDerechaArriba,
                float _posicionX_VerticeDerechaAbajo, float _posicionY_VerticeDerechaAbajo,
                float _posicionX_VerticeIzquierdaAbajo, float _posicionY_VerticeIzquierdaAbajo,
                float _x, float _y, array<float,3> color, float _xmax, float _xmin, float _ymax, float _ymin);
    void draw();
    void traslacion();
    float distance(float _x, float _y);

    bool getDibujado() const;
    void setDibujado(bool value);

    float getXmax() const;
    void setXmax(float value);
    float getXmin() const;
    void setXmin(float value);
    float getYmax() const;
    void setYmax(float value);
    float getYmin() const;
    void setYmin(float value);
};

#endif // PLATAFORMAS_H
