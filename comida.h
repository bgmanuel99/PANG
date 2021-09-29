#ifndef COMIDA_H
#define COMIDA_H
#include <math.h>
#include <array>
#include <figure.h>
#include <GL/glut.h>

class Comida : public Figure
{
private:
    bool dibujado;
    float radio,radio1;
    array<float,3> colorComida, colorComida1;
public:
    Comida(float _x, float _y, float radio, float radio1, array<float,3> color, array<float,3> colorComida, array<float,3> colorComida1, double _yv);
    void draw();//dibuja el cuadrado rojo de la manzana
    void drawManzanaParteII();//dibuja el cuadrado blanco de la manzana
    void drawManzanaParteIII();//dibuja el rectangulo verde de la manzana
    void drawNaranjaParteI();//dibuja el circulo de la naranja
    void drawNaranjaParteII();//dibuja el rectangulo vertical de la naranja
    void drawNaranjaParteIII();//dibuja el rectangulo horizontal de la naranja
    void drawNaranjaParteIV();//dibuja el circulo blanco de la naranja
    void drawFresaParteI();//dibuja el triangulo de la fresa
    void drawFresaParteII();//dibuja el helecho de la fresa
    void drawFresaParteIII();//dibuja el primer circulo negro de la fresa
    void drawFresaParteIV();//dibuja el segundo circulo de negro de la fresa
    void drawFresaParteV();//dibuja el tercer circulo negro de la fresa
    void drawHamburguesaParteI();//dibuja la rebanada de pan de arriba de la hamburguesa
    void drawHamburguesaParteII();//dibuja el tomate de la hamburguesa
    void drawHamburguesaParteIII();//dibuja la carne de la hamburguesa
    void drawHamburguesaParteIV();//dibuja la lechuga de la hamburguesa
    void drawHamburguesaParteV();//dibuja la rebana de pan inferior de la hamburguesa
    void drawPizzaParteI();//dibuja el pan de la pizza
    void drawPizzaParteII();//dibuja el queso de la pizza
    void drawPizzaParteIII();//---------------------
    void drawPizzaParteIV();//dibujan las lineas de la pizza
    void drawPizzaParteV();
    void drawPizzaParteVI();//----------------------
    void drawPizzaParteVII();//---------------------
    void drawPizzaParteVIII();
    void drawPizzaParteIX();
    void drawPizzaParteX();//dibujan el peperoni de la pizza
    void drawPizzaParteXI();
    void drawPizzParteXII();
    void drawPizzaParteXIII();
    void drawPizzaParteXIV();//---------------------
    float distance(float _x, float _y);
    void traslacion();

    bool getDibujado() const;
    void setDibujado(bool value);

    //colores para parte del dibujado de las comidas
    array<float,3> getColorComida() const;
    void setColorComida(const array<float,3> &value);
    array<float,3> getColorComida1() const;
    void setColorComida1(const array<float,3> &value);
};

#endif // COMIDA_H
