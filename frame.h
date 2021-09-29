#ifndef FRAME_H
#define FRAME_H
#include <figure.h>
#include <array>

class Frame : public Figure
{
private:
    float xia, yia, xda, yda, xdab, ydab, xiab, yiab;
    bool dibujado;
public:
    Frame(float _x, float _y, float _xia, float _yia, float _xda, float _yda, float _xdab,
          float _ydab, float _xiab, float _yiab, array <float,3> color);
    void draw();
    void drawBarraDeNivel(array<float,3>colorVertice_IzquierdaArriba, array<float,3> colorVertice_DerechaArriba,//dibuja la barra de nivel para el panic mode
                          array<float,3> colorVertice_DerechaAbajo, array<float,3> colorVertice_IzquierdaAbajo);
    void traslacion();
    float distance(float _x, float _y);

    bool getDibujado() const;
    void setDibujado(bool value);
};

#endif // FRAME_H
