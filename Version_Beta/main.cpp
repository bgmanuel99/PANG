#include <iostream>
#include <figure.h>
#include <ball.h>
#include <frame.h>
#include <jugador.h>
#include <disparo.h>
#include <thunderbolt.h>
#include <bufos.h>
#include <hexagon.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

//------------------------------------
// PRIMER NIVEL
//------------------------------------
Ball ball1{0.15, 0, 0.005, {0.0, 1.0, 0.0}, 0.8, -0.8, 0.8, -0.8};
Ball ball2{0.13, 0, 0.005, {0.0, 1.0, 0.0}, 0.82, -0.82, 0.8, -0.82};
Ball ball3{0.13, 0, -0.005, {0.0, 1.0, 0.0}, 0.82, -0.82, 0.8, -0.82};
Ball ball4{0.09, 0, -0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.8, -0.85};
Ball ball5{0.09, 0, 0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.8, -0.85};
Ball ball6{0.09, 0, -0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.8, -0.85};
Ball ball7{0.09, 0, 0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.8, -0.85};
Ball ball8{0.06, 0, -0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.8, -0.89};
Ball ball9{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.8, -0.89};
Ball ball10{0.06, 0, -0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.8, -0.89};
Ball ball11{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.8, -0.89};
Ball ball12{0.06, 0, -0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.8, -0.89};
Ball ball13{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.8, -0.89};
Ball ball14{0.06, 0, -0.005, {0.0, 1.0, 0.0},0.89, -0.89, 0.8, -0.89};
Ball ball15{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.8, -0.89};

//-----------------------------------------
// SEGUNDO NIVEL
//-----------------------------------------
Ball nivel2Ball1{0.15, 0, 0.005, {0.0, 0.0, 1.0}, 0.8, -0.8, 0.5, -0.8};
Ball nivel2Ball2{0.13, 0, 0.005, {0.0, 0.0, 1.0}, 0.82, -0.82, 0.5, -0.82};
Ball nivel2Ball3{0.13, 0, -0.005, {0.0, 0.0, 1.0}, 0.82, -0.82, 0.5, -0.82};
Ball nivel2Ball4{0.09, 0, -0.005, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.5, -0.85};
Ball nivel2Ball5{0.09, 0, 0.005, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.5, -0.85};
Ball nivel2Ball6{0.09, 0, -0.005, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.5, -0.85};
Ball nivel2Ball7{0.09, 0, 0.005, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.5, -0.85};
Ball nivel2Ball8{0.06, 0, -0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel2Ball9{0.06, 0, 0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel2Ball10{0.06, 0, -0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel2Ball11{0.06, 0, 0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel2Ball12{0.06, 0, -0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel2Ball13{0.06, 0, 0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel2Ball14{0.06, 0, -0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel2Ball15{0.06, 0, 0.005, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};

//------------------------------------------
// TERCER NIVEL
//------------------------------------------
Ball nivel3Ball1{0.09, 0.8, -0.005, {1.0, 0.0, 1.0}, 0.85, -0.85, 0.5, -0.85};//Morado
Ball nivel3Ball2{0.09, -0.8, 0.005, {1.0, 0.0, 1.0}, 0.85, -0.85, 0.5, -0.85};//Morado
Ball nivel3Ball3{0.09, 0.0, 0.005, {1.0, 1.0, 0.0}, 0.85, -0.85, 0.5, -0.85};//Amarillo
Ball nivel3Ball4{0.09, 0.8, -0.005, {1.0, 1.0, 0.0}, 0.85, -0.85, 0.5, -0.85};//Amarillo
Ball nivel3Ball5{0.09, -0.8, 0.005, {1.0, 1.0, 0.0}, 0.85, -0.85, 0.5, -0.85};//Amarillo
Ball nivel3Ball6{0.06, 0, 0.005, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball7{0.06, 0, -0.005, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball8{0.06, 0, 0.005, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball9{0.06, 0, -0.005, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball10{0.06, 0, 0.005, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball11{0.06, 0, -0.005, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball12{0.06, 0, 0.005, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball13{0.06, 0, -0.005, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball14{0.06, 0, 0.005, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball nivel3Ball15{0.06, 0, -0.005, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};

//-------------------------------------------
// CUARTO NIVEL
//-------------------------------------------
Jugador maquina{0.89, 0.0, -0.06, -0.06, 0.06, 0.06, 0.06, {1.0, 0.0, 0.0}};

//-------------------------------------------
// QUINTO NIVEL
//-------------------------------------------
ThunderBolt rayo1{0.0, -0.1, -0.8, 1.05, -0.75, 1.05, -0.75, -0.85, -0.8, -0.85, {0.5, 1.0, 1.0}, 1};
ThunderBolt rayo2{0.0, -0.1, 0.1, 1.05, 0.15, 1.05, 0.15, -0.85, 0.1, -0.85, {0.0, 0.0, 1.0}, 1};
ThunderBolt rayo3{0.0, -0.1, 0.8, 1.05, 0.75, 1.05, 0.75, -0.85, 0.8, -0.85, {0.0, 0.0, 1.0}, 2};
ThunderBolt rayo4{0.0, -0.1, -0.1, 1.05, -0.15, 1.05, -0.15, -0.85, -0.1, -0.85, {0.0 , 0.0 , 1.0}, 2};

//-------------------------------------------
// SEXTO NIVEL
//-------------------------------------------
Hexagon hexagono1{0, 0.3, {0.0, 1.0, 0.0}, 0.06, -0.009, -0.01};
Hexagon hexagono2{0.3, 0, {0.0, 1.0, 0.0}, 0.06, -0.009, 0.01};
Hexagon hexagono3{0, -0.3, {0.0, 1.0, 0.0}, 0.06, 0.009, 0.01};
Hexagon hexagono4{-0.3, 0, {0.0, 1.0, 0.0}, 0.06, 0.009, -0.01};
Hexagon hexagono5{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01};
Hexagon hexagono6{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01};
Hexagon hexagono7{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01};
Hexagon hexagono8{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01};
Hexagon hexagono9{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01};
Hexagon hexagono10{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01};
Hexagon hexagono11{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01};
Hexagon hexagono12{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01};
//-------------------------------------------
// BUFOS PARA EL JUGADOR
//-------------------------------------------
//BUFOS DE LAS PELOTAS DEL PRIMER NIVEL
Bufos bufoInvulnerabilidad1{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo1{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};//las variables xy que paso como parametro son las coordenadas para el cuadrado
Bufos bufoInvulnerabilidad2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};
Bufos bufoInvulnerabilidad3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};
//BUFOS DE LAS PELOTAS DEL SEGUNDO NIVEL
Bufos bufoInvulnerabilidad1n2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo1n2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};//las variables xy que paso como parametro son las coordenadas para el cuadrado
Bufos bufoInvulnerabilidad2n2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo2n2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};
Bufos bufoInvulnerabilidad3n2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo3n2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};
//BUFOS DE LAS PELOTAS DEL TERCER NIVEL
Bufos bufoInvulnerabilidad1n3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo1n3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};//las variables xy que paso como parametro son las coordenadas para el cuadrado
Bufos bufoInvulnerabilidad2n3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo2n3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};
Bufos bufoInvulnerabilidad3n3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo3n3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};
Bufos bufoInvulnerabilidad4n3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo4n3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};
Bufos bufoInvulnerabilidad5n3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}};
Bufos bufoDobleDisparo5n3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}};

Jugador jugador1{-0.89, 0.0, 0.06, -0.06, -0.06, 0.06, -0.06, {1.0, 0.0, 0.0}};
vector <Figure*> disparoJugador;
vector <Figure*> disparoMaquina;
vector <Figure*> frames;
vector <Figure*> thunderBolt;
array <float,3> color = {0.5, 1.0, 1.0};// color cyan
array <float,3> color1 = {0.0, 0.0, 1.0};// color azul
array <float,3> color2 = {1.0, 1.0, 1.0};//color blanco

//VARIABLES PARA LOS CONTADORES
int i{0}, i1{0}, i2{0}, i3{0}, i4{0}, i5{0}, i6{0}, ig{0};//variables para los contadores de las pelotas del primer nivel
int in2b1{0}, in2{0}, i1n2{0}, i2n2{0}, i3n2{0}, i4n2{0}, i5n2{0}, i6n2{0}, in2g{0};//variables para los contadores de las pelotas del segundo nivel
int in3b1{0}, in3b2{0}, in3{0}, i1n3{0}, i2n3{0}, i3n3{0}, i4n3{0}, in3g{0};//variables para los contadores de las pelotas del tercer nivel
int in4{0}, in4g{0};
int in5{0}, i1n5{0}, in5g{0};
int contador_nivel_6{0}, contador_hexagono1{0}, contador_hexagono2{0}, contador_hexagono3{0}, contador_hexagono4{0};
int contador_nivel_6_Win{0};
int vidas{0}, tiempoMuerto{0}, tiempoMuerto1{0};
int ib1dd{0}, ib2dd{0}, ib3dd{0}, ib1ddn2{0}, ib2ddn2{0}, ib3ddn2{0}, ib1ddn3{0}, ib2ddn3{0}, ib3ddn3{0}, ib4ddn3{0}, ib5ddn3{0};//variables para los contadores de los bufos del doble disparo
int ib1in{0}, ib2in{0}, ib3in{0}, ib1inn2{0}, ib2inn2{0}, ib3inn2{0}, ib1inn3{0}, ib2inn3{0}, ib3inn3{0}, ib4inn3{0}, ib5inn3{0}; //variables para los contadores de los bufos de invulnerabilidad

int nivel;//variable para el nivel elegido por el usuario
int dificultad;//variable para la dificultad elegida por el usuario
int pelotasDestruidas;//variable para cuando se destruye una pelota
int hexagonosDestruidos;//variable para cuando se destruye un hexagono

int nr1{0}, nr2{0}, nr3{0}, nr1n2{0}, nr2n2{0}, nr3n2{0}, nr1n3{0}, nr2n3{0}, nr3n3{0}, nr4n3{0}, nr5n3{0};//variable del numero random
int bb1{0}, bb2{0}, bb3{0}, bb1n2{0}, bb2n2{0}, bb3n2{0}, bb1n3{0}, bb2n3{0}, bb3n3{0}, bb4n3{0}, bb5n3{0};//variable para saber cuando hacer el numero random

//FUENTE POR DEFECTO
void *font = GLUT_STROKE_ROMAN;

//ALTO Y ANCHO DE LA VENTANA
int h,w;

//VARIABLES PARA EL CALCULO DE LOS FRAMES POR SEGUNDO
int frame;
long timeFrame, timebase;
char s[50];

bool init()
{
    glClearColor(0.5f, 1.0f, 1.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    return true;
}

void renderBitmapString(float x, float y, float z, void *font, char *string){
    char *c;
    glRasterPos3f(x, y, z);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

void restorePerspectiveProjection() {

    glMatrixMode(GL_PROJECTION);

    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
}

void setOrthographicProjection() {

    glMatrixMode(GL_PROJECTION);

    glPushMatrix();

    glLoadIdentity();

    gluOrtho2D(0, w, h, 0);

    glMatrixMode(GL_MODELVIEW);
}

void renderScene()
{
    srand(time(NULL));

    float x, y;

    //-----------------------------------------------------------------------------------------------------
    //VARIABLES DEL PRIMER Y SEGUNDO NIVEL
    //-----------------------------------------------------------------------------------------------------
    float xb1, yb1, xb2, yb2, xb3, yb3, xb4, yb4, xb5, yb5, xb6, yb6, xb7, yb7;
    float xn2b1, yn2b1, xn2b2, yn2b2, xn2b3, yn2b3, xn2b4, yn2b4, xn2b5, yn2b5, xn2b6, yn2b6, xn2b7, yn2b7;

    xb1 = ball1.getX(); yb1 = ball1.getY();   xn2b1 = nivel2Ball1.getX(); yn2b1 = nivel2Ball1.getY();
    xb2 = ball2.getX(); yb2 = ball2.getY();   xn2b2 = nivel2Ball2.getX(); yn2b2 = nivel2Ball2.getY();
    xb3 = ball3.getX(); yb3 = ball3.getY();   xn2b3 = nivel2Ball3.getX(); yn2b3 = nivel2Ball3.getY();
    xb4 = ball4.getX(); yb4 = ball4.getY();   xn2b4 = nivel2Ball4.getX(); yn2b4 = nivel2Ball4.getY();
    xb5 = ball5.getX(); yb5 = ball5.getY();   xn2b5 = nivel2Ball5.getX(); yn2b5 = nivel2Ball5.getY();
    xb6 = ball6.getX(); yb6 = ball6.getY();   xn2b6 = nivel2Ball6.getX(); yn2b6 = nivel2Ball6.getY();
    xb7 = ball7.getX(); yb7 = ball7.getY();   xn2b7 = nivel2Ball7.getX(); yn2b7 = nivel2Ball7.getY();
    //-----------------------------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------------------------
    //VARIABLES DEL TERCER NIVEL
    //-----------------------------------------------------------------------------------------------------
    float xn3b1, yn3b1, xn3b2, yn3b2, xn3b3, yn3b3, xn3b4, yn3b4, xn3b5, yn3b5;

    xn3b1 = nivel3Ball1.getX(); yn3b1 = nivel3Ball1.getY();
    xn3b2 = nivel3Ball2.getX(); yn3b2 = nivel3Ball2.getY();
    xn3b3 = nivel3Ball3.getX(); yn3b3 = nivel3Ball3.getY();
    xn3b4 = nivel3Ball4.getX(); yn3b4 = nivel3Ball4.getY();
    xn3b5 = nivel3Ball5.getX(); yn3b5 = nivel3Ball5.getY();
    //-----------------------------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------------------------
    //VARIABLES DEL QUINTO NIVEL
    //-----------------------------------------------------------------------------------------------------
    float xdabr1, ydabr1, xdabr2, ydabr2, xdabr3, ydabr3, xdabr4, ydabr4;
    float xiabr1, yiabr1, xiabr2, yiabr2, xiabr3, yiabr3, xiabr4, yiabr4;

    xdabr1 = rayo1.getXDAB(); ydabr1 = rayo1.getYDAB();
    xdabr2 = rayo2.getXDAB(); ydabr2 = rayo2.getYDAB();
    xdabr3 = rayo3.getXDAB(); ydabr3 = rayo3.getYDAB();
    xdabr4 = rayo4.getXDAB(); ydabr4 = rayo4.getYDAB();

    xiabr1 = rayo1.getXIAB(); yiabr1 = rayo1.getYIAB();
    xiabr2 = rayo2.getXIAB(); yiabr2 = rayo2.getYIAB();
    xiabr3 = rayo3.getXIAB(); yiabr3 = rayo3.getYIAB();
    xiabr4 = rayo4.getXIAB(); yiabr4 = rayo4.getYIAB();
    //-----------------------------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------------------------
    //VARIABLES XY DE LAS PELOTAS PARA EL DIBUJADO DE PARTE DEL BUFO DEL DISPARO DOBLE
    //-----------------------------------------------------------------------------------------------------
    float xb1b1, yb1b1, xb2b1, yb2b1, xb3b1, yb3b1;
    float xb1b1n2, yb1b1n2, xb2b1n2, yb2b1n2, xb3b1n2, yb3b1n2;
    float xb1b1n3, yb1b1n3, xb2b1n3, yb2b1n3, xb3b1n3, yb3b1n3, xb4b1n3, yb4b1n3, xb5b1n3, yb5b1n3;

    xb1b1 = ball1.getX() - 0.01; yb1b1 = ball1.getY() - 0.01;
    xb2b1 = ball2.getX() - 0.01; yb2b1 = ball2.getY() - 0.01;
    xb3b1 = ball3.getX() - 0.01; yb3b1 = ball3.getY() - 0.01;

    xb1b1n2 = nivel2Ball1.getX() - 0.01; yb1b1n2 = nivel2Ball1.getY() - 0.01;
    xb2b1n2 = nivel2Ball2.getX() - 0.01; yb2b1n2 = nivel2Ball2.getY() - 0.01;
    xb3b1n2 = nivel2Ball3.getX() - 0.01; yb3b1n2 = nivel2Ball3.getY() - 0.01;

    xb1b1n3 = nivel3Ball1.getX() - 0.01; yb1b1n3 = nivel3Ball1.getY() - 0.01;
    xb2b1n3 = nivel3Ball2.getX() - 0.01; yb2b1n3 = nivel3Ball2.getY() - 0.01;
    xb3b1n3 = nivel3Ball3.getX() - 0.01; yb3b1n3 = nivel3Ball3.getY() - 0.01;
    xb4b1n3 = nivel3Ball4.getX() - 0.01; yb4b1n3 = nivel3Ball4.getY() - 0.01;
    xb5b1n3 = nivel3Ball5.getX() - 0.01; yb5b1n3 = nivel3Ball5.getY() - 0.01;

    float xb1b2, yb1b2, xb2b2, yb2b2, xb3b2, yb3b2;
    float xb1b2n2, yb1b2n2, xb2b2n2, yb2b2n2, xb3b2n2, yb3b2n2;
    float xb1b2n3, yb1b2n3, xb2b2n3, yb2b2n3, xb3b2n3, yb3b2n3, xb4b2n3, yb4b2n3, xb5b2n3, yb5b2n3;

    xb1b2 = ball1.getX() + 0.01; yb1b2 = ball1.getY() + 0.01;
    xb2b2 = ball2.getX() + 0.01; yb2b2 = ball2.getY() + 0.01;
    xb3b2 = ball3.getX() + 0.01; yb3b2 = ball3.getY() + 0.01;

    xb1b2n2 = nivel2Ball1.getX() + 0.01; yb1b2n2 = nivel2Ball1.getY() + 0.01;
    xb2b2n2 = nivel2Ball2.getX() + 0.01; yb2b2n2 = nivel2Ball2.getY() + 0.01;
    xb3b2n2 = nivel2Ball3.getX() + 0.01; yb3b2n2 = nivel2Ball3.getY() + 0.01;

    xb1b2n3 = nivel3Ball1.getX() + 0.01; yb1b2n3 = nivel3Ball1.getY() + 0.01;
    xb2b2n3 = nivel3Ball2.getX() + 0.01; yb2b2n3 = nivel3Ball2.getY() + 0.01;
    xb3b2n3 = nivel3Ball3.getX() + 0.01; yb3b2n3 = nivel3Ball3.getY() + 0.01;
    xb4b2n3 = nivel3Ball4.getX() + 0.01; yb4b2n3 = nivel3Ball4.getY() + 0.01;
    xb5b2n3 = nivel3Ball5.getX() + 0.01; yb5b2n3 = nivel3Ball5.getY() + 0.01;
    //-----------------------------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------------------------
    //VARIABLES DEL SEXTO NIVEL
    //-----------------------------------------------------------------------------------------------------

    float coordenada_x_hexagono1, coordenada_y_hexagono1, coordenada_x_hexagono2, coordenada_y_hexagono2;
    float coordenada_x_hexagono3, coordenada_y_hexagono3, coordenada_x_hexagono4, coordenada_y_hexagono4;

    coordenada_x_hexagono1 = hexagono1.getX(); coordenada_y_hexagono1 = hexagono1.getY();
    coordenada_x_hexagono2 = hexagono2.getX(); coordenada_y_hexagono2 = hexagono2.getY();
    coordenada_x_hexagono3 = hexagono3.getX(); coordenada_y_hexagono3 = hexagono3.getY();
    coordenada_x_hexagono4 = hexagono4.getX(); coordenada_y_hexagono4 = hexagono4.getY();

    //-----------------------------------------------------------------------------------------------------

    glClear(GL_COLOR_BUFFER_BIT);

    for(auto cuadros : frames){
        cuadros->draw();
    }

    jugador1.draw();

    //-----------------------------------------------------------------------------------------------------
    //                                    PRIMER NIVEL
    //-----------------------------------------------------------------------------------------------------

    if(nivel == 1 || nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){

        // CONTADORES PRIMER NIVEL, DIBUJADO DE LAS PELOTAS Y DIBUJADO DE LOS BUFOS DEL PRIMER NIVEL
        if(ball1.getDibujado() == true){
            ball1.draw();
            ball1.traslacion();
        }

        if(ball1.getDibujado() == false){
            i += 1;
            if(ball2.getDibujado() != false){
                ball2.draw();
                ball2.traslacion();
            }
            if(ball3.getDibujado() != false){
                ball3.draw();
                ball3.traslacion();
            }
            if(bb1 == 1){
                if(dificultad == 1){
                    nr1 = rand() % 10;
                }else if(dificultad == 2){
                    nr1 = rand() % 20;
                }else if(dificultad == 3){
                    nr1 = rand() % 25;
                }
                bb1++;
            }
            if(nr1 == 1){
                bufoDobleDisparo1.drawBufoDobleDisparoParteI();
                bufoDobleDisparo1.drawBufoDobleDisparoParteII();
                bufoDobleDisparo1.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo1.traslacion();
            }else if(nr1 == 2){
                bufoInvulnerabilidad1.draw();
                bufoInvulnerabilidad1.traslacion();
            }
        }
        if(ball2.getDibujado() == false){
            i1 += 1;
            if(ball4.getDibujado() != false){
                ball4.draw();
                ball4.traslacion();
            }
            if(ball5.getDibujado() != false){
                ball5.draw();
                ball5.traslacion();
            }
            if(bb2 == 1){
                if(dificultad == 1){
                    nr2 = rand() % 10;
                }else if(dificultad == 2){
                    nr2 = rand() % 20;
                }else if(dificultad == 3){
                    nr2 = rand() % 25;
                }
                bb2++;
            }
            if(nr2 == 1){
                bufoDobleDisparo2.drawBufoDobleDisparoParteI();
                bufoDobleDisparo2.drawBufoDobleDisparoParteII();
                bufoDobleDisparo2.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo2.traslacion();
            }else if(nr2 == 2){
                bufoInvulnerabilidad2.draw();
                bufoInvulnerabilidad2.traslacion();
            }
        }
        if(ball3.getDibujado() == false){
            i2 += 1;
            if(ball6.getDibujado() != false){
                ball6.draw();
                ball6.traslacion();
            }
            if(ball7.getDibujado() != false){
                ball7.draw();
                ball7.traslacion();
            }
            if(bb3 == 1){
                if(dificultad == 1){
                    nr3 = rand() % 10;
                }else if(dificultad == 2){
                    nr3 = rand() % 20;
                }else if(dificultad == 3){
                    nr3 = rand() % 25;
                }
                bb3++;
            }
            if(nr3 == 1){
                bufoDobleDisparo3.drawBufoDobleDisparoParteI();
                bufoDobleDisparo3.drawBufoDobleDisparoParteII();
                bufoDobleDisparo3.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo3.traslacion();
            }else if(nr3 == 2){
                bufoInvulnerabilidad3.draw();
                bufoInvulnerabilidad3.traslacion();
            }
        }
        if(ball4.getDibujado() == false){
            i3 += 1;
            if(ball8.getDibujado() != false){
                ball8.draw();
                ball8.traslacion();
            }
            if(ball9.getDibujado() != false){
                ball9.draw();
                ball9.traslacion();
            }
        }
        if(ball5.getDibujado() == false){
            i4 += 1;
            if(ball10.getDibujado() != false){
                ball10.draw();
                ball10.traslacion();
            }
            if(ball11.getDibujado() != false){
                ball11.draw();
                ball11.traslacion();
            }
        }
        if(ball6.getDibujado() == false){
            i5 += 1;
            if(ball12.getDibujado() != false){
                ball12.draw();
                ball12.traslacion();
            }
            if(ball13.getDibujado() != false){
                ball13.draw();
                ball13.traslacion();
            }
        }
        if(ball7.getDibujado() == false){
            i6 += 1;
            if(ball14.getDibujado() != false){
                ball14.draw();
                ball14.traslacion();
            }
            if(ball15.getDibujado() != false){
                ball15.draw();
                ball15.traslacion();
            }
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                    SEGUNDO NIVEL
    //-----------------------------------------------------------------------------------------------------

    // CONTADORES SEGUNDO NIVEL, DIBUJADO DE LAS PELOTAS Y DE LOS BUFOS DEL SEGUNDO NIVEL

    if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){

        //CONTADOR PARA LA PRIMERA BOLA DEL SEGUNDO NIVEL
        if(ball1.getDibujado() == false && (ball2.getDibujado() == false || ball3.getDibujado() == false)){
            if(nivel2Ball1.getDibujado() == true){
                in2b1 += 1;
            }
        }

        if(in2b1 >= 80 && nivel2Ball1.getDibujado() == true){
            nivel2Ball1.draw();
            nivel2Ball1.traslacion();
        }

        if(nivel2Ball1.getDibujado() == false){
            in2 += 1;
            if(nivel2Ball2.getDibujado() != false){
                nivel2Ball2.draw();
                nivel2Ball2.traslacion();
            }
            if(nivel2Ball3.getDibujado() != false){
                nivel2Ball3.draw();
                nivel2Ball3.traslacion();
            }
            if(bb1n2 == 1){
                if(dificultad == 1){
                    nr1n2 = rand() % 10;
                }else if(dificultad == 2){
                    nr1n2 = rand() % 20;
                }else if(dificultad == 3){
                    nr1n2 = rand() % 25;
                }
                bb1n2++;
            }
            if(nr1n2 == 1){
                bufoDobleDisparo1n2.drawBufoDobleDisparoParteI();
                bufoDobleDisparo1n2.drawBufoDobleDisparoParteII();
                bufoDobleDisparo1n2.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo1n2.traslacion();
            }else if(nr1n2 == 2){
                bufoInvulnerabilidad1n2.draw();
                bufoInvulnerabilidad1n2.traslacion();
            }
        }
        if(nivel2Ball2.getDibujado() == false){
            i1n2 += 1;
            if(nivel2Ball4.getDibujado() != false){
                nivel2Ball4.draw();
                nivel2Ball4.traslacion();
            }
            if(nivel2Ball5.getDibujado() != false){
                nivel2Ball5.draw();
                nivel2Ball5.traslacion();
            }
            if(bb2n2 == 1){
                if(dificultad == 1){
                    nr2n2 = rand() % 10;
                }else if(dificultad == 2){
                    nr2n2 = rand() % 20;
                }else if(dificultad == 3){
                    nr2n2 = rand() % 25;
                }
                bb2n2++;
            }
            if(nr2n2 == 1){
                bufoDobleDisparo2n2.drawBufoDobleDisparoParteI();
                bufoDobleDisparo2n2.drawBufoDobleDisparoParteII();
                bufoDobleDisparo2n2.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo2n2.traslacion();
            }else if(nr2n2 == 2){
                bufoInvulnerabilidad2n2.draw();
                bufoInvulnerabilidad2n2.traslacion();
            }
        }
        if(nivel2Ball3.getDibujado() == false){
            i2n2 += 1;
            if(nivel2Ball6.getDibujado() != false){
                nivel2Ball6.draw();
                nivel2Ball6.traslacion();
            }
            if(nivel2Ball7.getDibujado() != false){
                nivel2Ball7.draw();
                nivel2Ball7.traslacion();
            }
            if(bb3n2 == 1){
                if(dificultad == 1){
                    nr3n2 = rand() % 10;
                }else if(dificultad == 2){
                    nr3n2 = rand() % 20;
                }else if(dificultad == 3){
                    nr3n2 = rand() % 25;
                }
                bb3n2++;
            }
            if(nr3n2 == 1){
                bufoDobleDisparo3n2.drawBufoDobleDisparoParteI();
                bufoDobleDisparo3n2.drawBufoDobleDisparoParteII();
                bufoDobleDisparo3n2.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo3n2.traslacion();
            }else if(nr3n2 == 2){
                bufoInvulnerabilidad3n2.draw();
                bufoInvulnerabilidad3n2.traslacion();
            }
        }
        if(nivel2Ball4.getDibujado() == false){
            i3n2 += 1;
            if(nivel2Ball8.getDibujado() != false){
                nivel2Ball8.draw();
                nivel2Ball8.traslacion();
            }
            if(nivel2Ball9.getDibujado() != false){
                nivel2Ball9.draw();
                nivel2Ball9.traslacion();
            }
        }
        if(nivel2Ball5.getDibujado() == false){
            i4n2 += 1;
            if(nivel2Ball10.getDibujado() != false){
                nivel2Ball10.draw();
                nivel2Ball10.traslacion();
            }
            if(nivel2Ball11.getDibujado() != false){
                nivel2Ball11.draw();
                nivel2Ball11.traslacion();
            }
        }
        if(nivel2Ball6.getDibujado() == false){
            i5n2 += 1;
            if(nivel2Ball12.getDibujado() != false){
                nivel2Ball12.draw();
                nivel2Ball12.traslacion();
            }
            if(nivel2Ball13.getDibujado() != false){
                nivel2Ball13.draw();
                nivel2Ball13.traslacion();
            }
        }
        if(nivel2Ball7.getDibujado() == false){
            i6n2 += 1;
            if(nivel2Ball14.getDibujado() != false){
                nivel2Ball14.draw();
                nivel2Ball14.traslacion();
            }
            if(nivel2Ball15.getDibujado() != false){
                nivel2Ball15.draw();
                nivel2Ball15.traslacion();
            }
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   TERCER NIVEL
    //-----------------------------------------------------------------------------------------------------

    //CONTADORES TERCER NIVEL, DIBUJADO DE LAS PELOTAS Y DE LOS BUFOS DEL TERCER NIVEL
    if(nivel == 3 || nivel == 4){
        if((ball1.getDibujado() == false && ball2.getDibujado() == false && ball3.getDibujado() == false && nivel2Ball1.getDibujado() == false)
                && (nivel2Ball2.getDibujado() == false || nivel2Ball3.getDibujado() == false)){
            in3b1 += 1;
        }
        if(nivel3Ball1.getDibujado() == false && nivel3Ball2.getDibujado() == false){
            in3b2 += 1;
        }
        if(in3b1 >= 80 && nivel3Ball1.getDibujado() == true){
            nivel3Ball1.draw();
            nivel3Ball1.traslacion();
        }
        if(in3b1 >= 80 && nivel3Ball2.getDibujado() == true){
            nivel3Ball2.draw();
            nivel3Ball2.traslacion();
        }
        if(in3b2 >= 80 && nivel3Ball3.getDibujado() == true){
            nivel3Ball3.draw();
            nivel3Ball3.traslacion();
        }
        if(in3b2 >= 80 && nivel3Ball4.getDibujado() == true){
            nivel3Ball4.draw();
            nivel3Ball4.traslacion();
        }
        if(in3b2 >= 80 && nivel3Ball5.getDibujado() == true){
            nivel3Ball5.draw();
            nivel3Ball5.traslacion();
        }
        if(nivel3Ball1.getDibujado() == false){
            in3 += 1;
            if(nivel3Ball6.getDibujado() != false){
                nivel3Ball6.draw();
                nivel3Ball6.traslacion();
            }
            if(nivel3Ball7.getDibujado() != false){
                nivel3Ball7.draw();
                nivel3Ball7.traslacion();
            }
            if(bb1n3 == 1){
                if(dificultad == 1){
                    nr1n3 = rand() % 10;
                }else if(dificultad == 2){
                    nr1n3 = rand() % 20;
                }else if(dificultad == 3){
                    nr1n3 = rand() % 25;
                }
                bb1n3++;
            }
            if(nr1n3 == 1){
                bufoDobleDisparo1n3.drawBufoDobleDisparoParteI();
                bufoDobleDisparo1n3.drawBufoDobleDisparoParteII();
                bufoDobleDisparo1n3.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo1n3.traslacion();
            }else if(nr1n3 == 2){
                bufoInvulnerabilidad1n3.draw();
                bufoInvulnerabilidad1n3.traslacion();
            }
        }
        if(nivel3Ball2.getDibujado() == false){
            i1n3 += 1;
            if(nivel3Ball8.getDibujado() != false){
                nivel3Ball8.draw();
                nivel3Ball8.traslacion();
            }
            if(nivel3Ball9.getDibujado() != false){
                nivel3Ball9.draw();
                nivel3Ball9.traslacion();
            }
            if(bb2n3 == 1){
                if(dificultad == 1){
                    nr2n3 = rand() % 10;
                }else if(dificultad == 2){
                    nr2n3 = rand() % 20;
                }else if(dificultad == 3){
                    nr2n3 = rand() % 25;
                }
                bb2n3++;
            }
            if(nr2n3 == 1){
                bufoDobleDisparo2n3.drawBufoDobleDisparoParteI();
                bufoDobleDisparo2n3.drawBufoDobleDisparoParteII();
                bufoDobleDisparo2n3.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo2n3.traslacion();
            }else if(nr2n3 == 2){
                bufoInvulnerabilidad2n3.draw();
                bufoInvulnerabilidad2n3.traslacion();
            }
        }
        if(nivel3Ball3.getDibujado() == false){
            i2n3 += 1;
            if(nivel3Ball10.getDibujado() != false){
                nivel3Ball10.draw();
                nivel3Ball10.traslacion();
            }
            if(nivel3Ball11.getDibujado() != false){
                nivel3Ball11.draw();
                nivel3Ball11.traslacion();
            }
            if(bb3n3 == 1){
                if(dificultad == 1){
                    nr3n3 = rand() % 10;
                }else if(dificultad == 2){
                    nr3n3 = rand() % 20;
                }else if(dificultad == 3){
                    nr3n3 = rand() % 25;
                }
                bb3n3++;
            }
            if(nr3n3 == 1){
                bufoDobleDisparo3n3.drawBufoDobleDisparoParteI();
                bufoDobleDisparo3n3.drawBufoDobleDisparoParteII();
                bufoDobleDisparo3n3.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo3n3.traslacion();
            }else if(nr3n3 == 2){
                bufoInvulnerabilidad3n3.draw();
                bufoInvulnerabilidad3n3.traslacion();
            }
        }
        if(nivel3Ball4.getDibujado() == false){
            i3n3 += 1;
            if(nivel3Ball12.getDibujado() != false){
                nivel3Ball12.draw();
                nivel3Ball12.traslacion();
            }
            if(nivel3Ball13.getDibujado() != false){
                nivel3Ball13.draw();
                nivel3Ball13.traslacion();
            }
            if(bb4n3 == 1){
                if(dificultad == 1){
                    nr4n3 = rand() % 10;
                }else if(dificultad == 2){
                    nr4n3 = rand() % 20;
                }else if(dificultad == 3){
                    nr4n3 = rand() % 25;
                }
                bb4n3++;
            }
            if(nr4n3 == 1){
                bufoDobleDisparo4n3.drawBufoDobleDisparoParteI();
                bufoDobleDisparo4n3.drawBufoDobleDisparoParteII();
                bufoDobleDisparo4n3.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo4n3.traslacion();
            }else if(nr4n3 == 2){
                bufoInvulnerabilidad4n3.draw();
                bufoInvulnerabilidad4n3.traslacion();
            }
        }
        if(nivel3Ball5.getDibujado() == false){
            i4n3 += 1;
            if(nivel3Ball14.getDibujado() != false){
                nivel3Ball14.draw();
                nivel3Ball14.traslacion();
            }
            if(nivel3Ball15.getDibujado() != false){
                nivel3Ball15.draw();
                nivel3Ball15.traslacion();
            }
            if(bb5n3 == 1){
                if(dificultad == 1){
                    nr5n3 = rand() % 10;
                }else if(dificultad == 2){
                    nr5n3 = rand() % 20;
                }else if(dificultad == 3){
                    nr5n3 = rand() % 25;
                }
                bb5n3++;
            }
            if(nr5n3 == 1){
                bufoDobleDisparo5n3.drawBufoDobleDisparoParteI();
                bufoDobleDisparo5n3.drawBufoDobleDisparoParteII();
                bufoDobleDisparo5n3.drawBufoDobleDisparoParteIII();
                bufoDobleDisparo5n3.traslacion();
            }else if(nr5n3 == 2){
                bufoInvulnerabilidad5n3.draw();
                bufoInvulnerabilidad5n3.traslacion();
            }
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   CUARTO NIVEL
    //-----------------------------------------------------------------------------------------------------

    //CONTADORES CUARTO NIVEL
    if(nivel == 4 || nivel == 5){
        in4 += 1;

        if(in4 > 200){
            in4 = 0;
        }
    }

    //MAQUINA CUARTO NIVEL
    if(nivel == 4 || nivel == 5){

        maquina.draw();
        maquina.traslacion();

        float xm = maquina.getX();
        float ym = maquina.getY();
        float xdm, ydm;

        if(in4 == 200){
            disparoMaquina.push_back(new Disparo{0.020, xm, ym, -0.07, 0, {1.0, 0.0, 0.0}});
        }

        for(auto disparo : disparoMaquina){
            disparo->draw();
            disparo->traslacion();
            xdm = disparo->getX();
            ydm = disparo->getY();
        }

        if(jugador1.getColor() != color2){
            if(jugador1.distance(xdm, ydm) <= 0.040 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   QUINTO NIVEL
    //-----------------------------------------------------------------------------------------------------

    //CONTADOR QUINTO NIVEL
    if(nivel == 5){
        in5 += 1;

        if(in5 >= 1000){
            in5 = 0;
        }
    }

    //MAQUINA QUINTO NIVEL
    if(nivel == 5){

        for(auto elem : thunderBolt){
            ThunderBolt *aux = dynamic_cast<ThunderBolt*>(elem);

            if(aux->getParImpar() % 2 != 0){
                if(in5 >= 200 && in5 <= 350 && in5 % 2 == 0){
                    aux->draw();
                }else if(in5 >= 350 && in5 <= 360){
                    aux->draw();
                    rayo1.draw();
                    rayo2.draw();
                    rayo1.setColor({0.0 , 0.0, 1.0});
                    rayo2.setColor({0.0 , 0.0, 1.0});
                }else{
                    rayo1.setColor({0.5, 1.0, 1.0});
                    rayo2.setColor({0.5, 1.0, 1.0});
                }
            }else if(aux->getParImpar() % 2 == 0){
                if(in5 >= 650 && in5 <= 800 && in5 % 2 == 0){
                    aux->draw();
                }else if(in5 >= 800 && in5 <= 810){
                    aux->draw();
                    rayo3.draw();
                    rayo4.draw();
                    rayo3.setColor({0.0, 0.0, 1.0});
                    rayo4.setColor({0.0, 0.0, 1.0});
                }else{
                    rayo3.setColor({0.5, 1.0, 1.0});
                    rayo4.setColor({0.5, 1.0, 1.0});
                }
            }
        }

        if(jugador1.getColor() != color2){
            if(jugador1.distance(xdabr1, ydabr1) <= 0.06 && rayo1.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }else if(jugador1.distance(xdabr2, ydabr2) <= 0.06 && rayo2.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }else if(jugador1.distance(xdabr3, ydabr3) <= 0.06 && rayo3.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }else if(jugador1.distance(xdabr4, ydabr4) <= 0.06 && rayo4.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }else if(jugador1.distance(xiabr1, yiabr1) <= 0.06 && rayo1.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }else if(jugador1.distance(xiabr2, yiabr2) <= 0.06 && rayo2.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }else if(jugador1.distance(xiabr3, yiabr3) <= 0.06 && rayo3.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }else if(jugador1.distance(xiabr4, yiabr4) <= 0.06 && rayo4.getColor() == color1 && jugador1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   SEXTO NIVEL
    //-----------------------------------------------------------------------------------------------------

    if(nivel == 6){
        if(contador_nivel_6 <= 80){
            contador_nivel_6 += 1;
        }

        if(hexagono1.getDibujado() == true){
            hexagono1.draw();
        }else{
            if(contador_hexagono1 <= 20){
                contador_hexagono1 += 1;
            }
            if(hexagono5.getDibujado() != false){
                hexagono5.draw();
                hexagono5.traslacion();
            }
            if(hexagono6.getDibujado() != false){
                hexagono6.draw();
                hexagono6.traslacion();
            }
        }

        if(hexagono2.getDibujado() == true){
            hexagono2.draw();
        }else{
            if(contador_hexagono2 <= 20){
                contador_hexagono2 += 1;
            }
            if(hexagono7.getDibujado() != false){
                hexagono7.draw();
                hexagono7.traslacion();
            }
            if(hexagono8.getDibujado() != false){
                hexagono8.draw();
                hexagono8.traslacion();
            }
        }

        if(hexagono3.getDibujado() == true){
            hexagono3.draw();
        }else{
            if(contador_hexagono3 <= 20){
                contador_hexagono3 += 1;
            }
            if(hexagono9.getDibujado() != false){
                hexagono9.draw();
                hexagono9.traslacion();
            }
            if(hexagono10.getDibujado() != false){
                hexagono10.draw();
                hexagono10.traslacion();
            }
        }

        if(hexagono4.getDibujado() == true){
            hexagono4.draw();
        }else{
            if(contador_hexagono4 <= 20){
                contador_hexagono4 += 1;
            }
            if(hexagono11.getDibujado() != false){
                hexagono11.draw();
                hexagono11.traslacion();
            }
            if(hexagono12.getDibujado() != false){
                hexagono12.draw();
                hexagono12.traslacion();
            }
        }

        if(contador_nivel_6 >= 80){
            hexagono1.traslacion();
            hexagono2.traslacion();
            hexagono3.traslacion();
            hexagono4.traslacion();
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   CALCULOS Y MOVIMIENTOS DE LOS ELEMENTOS
    //-----------------------------------------------------------------------------------------------------

    for(auto elem : disparoJugador){
        x = elem->getX();
        y = elem->getY();
        elem->draw();
        elem->traslacion();

        // Primer nivel
        if(ball1.distance(x,y) <= 0.15 && ball1.getDibujado() != false){
            ball1.setDibujado(false);
            ball2.setX(xb1);
            ball2.setY(yb1);
            ball3.setX(xb1);
            ball3.setY(yb1);
            pelotasDestruidas++;
            bb1++;
            bufoDobleDisparo1.setX(xb1);
            bufoDobleDisparo1.setY(yb1);
            bufoDobleDisparo1.setXb1(xb1b1);
            bufoDobleDisparo1.setYb1(yb1b1);
            bufoDobleDisparo1.setXb2(xb1b2);
            bufoDobleDisparo1.setYb2(yb1b2);
            bufoInvulnerabilidad1.setX(xb1);
            bufoInvulnerabilidad1.setY(yb1);
        }
        if(i >= 20){
            if(ball2.distance(x,y) <= 0.13 && ball2.getDibujado() != false){
                ball2.setDibujado(false);
                ball4.setX(xb2);
                ball4.setY(yb2);
                ball5.setX(xb2);
                ball5.setY(yb2);
                pelotasDestruidas++;
                bb2++;
                bufoDobleDisparo2.setX(xb2);
                bufoDobleDisparo2.setY(yb2);
                bufoDobleDisparo2.setXb1(xb2b1);
                bufoDobleDisparo2.setYb1(yb2b1);
                bufoDobleDisparo2.setXb2(xb2b2);
                bufoDobleDisparo2.setYb2(yb2b2);
                bufoInvulnerabilidad2.setX(xb2);
                bufoInvulnerabilidad2.setY(yb2);
            }
            if(ball3.distance(x,y) <= 0.13 && ball3.getDibujado() != false){
                ball3.setDibujado(false);
                ball6.setX(xb3);
                ball6.setY(yb3);
                ball7.setX(xb3);
                ball7.setY(yb3);
                pelotasDestruidas++;
                bb3++;
                bufoDobleDisparo3.setX(xb3);
                bufoDobleDisparo3.setY(yb3);
                bufoDobleDisparo3.setXb1(xb3b1);
                bufoDobleDisparo3.setYb1(yb3b1);
                bufoDobleDisparo3.setXb2(xb3b2);
                bufoDobleDisparo3.setYb2(yb3b2);
                bufoInvulnerabilidad3.setX(xb3);
                bufoInvulnerabilidad3.setY(yb3);
            }
        }
        if(i1 >= 20){
            if(ball4.distance(x,y) <= 0.09 && ball4.getDibujado() != false){
                ball4.setDibujado(false);
                ball8.setX(xb4);
                ball8.setY(yb4);
                ball9.setX(xb4);
                ball9.setY(yb4);
                pelotasDestruidas++;
            }
            if(ball5.distance(x,y) <= 0.09 && ball5.getDibujado() != false){
                ball5.setDibujado(false);
                ball10.setX(xb5);
                ball10.setY(yb5);
                ball11.setX(xb5);
                ball11.setY(yb5);
                pelotasDestruidas++;
            }
        }
        if(i2 >= 20){
            if(ball6.distance(x,y) <= 0.09 && ball6.getDibujado() != false){
                ball6.setDibujado(false);
                ball12.setX(xb6);
                ball12.setY(yb6);
                ball13.setX(xb6);
                ball13.setY(yb6);
                pelotasDestruidas++;
            }

            if(ball7.distance(x,y) <= 0.09 && ball7.getDibujado() != false){
                ball7.setDibujado(false);
                ball14.setX(xb7);
                ball14.setY(yb7);
                ball15.setX(xb7);
                ball15.setY(yb7);
                pelotasDestruidas++;
            }
        }
        if(i3 >= 20){
            if(ball8.distance(x,y) <= 0.06 && ball8.getDibujado() != false){
                ball8.setDibujado(false);
                pelotasDestruidas++;
            }
            if(ball9.distance(x,y) <= 0.06 && ball9.getDibujado() != false){
                ball9.setDibujado(false);
                pelotasDestruidas++;
            }
        }
        if(i4 >= 20){
            if(ball10.distance(x,y) <= 0.06 && ball10.getDibujado() != false){
                ball10.setDibujado(false);
                pelotasDestruidas++;
            }
            if(ball11.distance(x,y) <= 0.06 && ball11.getDibujado() != false){
                ball11.setDibujado(false);
                pelotasDestruidas++;
            }
        }
        if(i5 >= 20){
            if(ball12.distance(x,y) <= 0.06 && ball12.getDibujado() != false){
                ball12.setDibujado(false);
                pelotasDestruidas++;
            }
            if(ball13.distance(x,y) <= 0.06 && ball13.getDibujado() != false){
                ball13.setDibujado(false);
                pelotasDestruidas++;
            }
        }
        if(i6 >= 20){
            if(ball14.distance(x,y) <= 0.06 && ball14.getDibujado() != false){
                ball14.setDibujado(false);
                pelotasDestruidas++;
            }
            if(ball15.distance(x,y) <= 0.06 && ball15.getDibujado() != false){
                ball15.setDibujado(false);
                pelotasDestruidas++;
            }
        }

        // SEGUNDO NIVEL
        if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){
            if(in2b1 >= 80){
                if(nivel2Ball1.distance(x,y) <= 0.15 && nivel2Ball1.getDibujado() != false){
                    nivel2Ball1.setDibujado(false);
                    nivel2Ball2.setX(xn2b1);
                    nivel2Ball2.setY(yn2b1);
                    nivel2Ball3.setX(xn2b1);
                    nivel2Ball3.setY(yn2b1);
                    pelotasDestruidas++;
                    bb1n2++;
                    bufoDobleDisparo1n2.setX(xn2b1);
                    bufoDobleDisparo1n2.setY(yn2b1);
                    bufoDobleDisparo1n2.setXb1(xb1b1n2);
                    bufoDobleDisparo1n2.setYb1(yb1b1n2);
                    bufoDobleDisparo1n2.setXb2(xb1b2n2);
                    bufoDobleDisparo1n2.setYb2(yb1b2n2);
                    bufoInvulnerabilidad1n2.setX(xn2b1);
                    bufoInvulnerabilidad1n2.setY(yn2b1);
                }
            }
            if(in2 >= 20){
                if(nivel2Ball2.distance(x,y) <= 0.13 && nivel2Ball2.getDibujado() != false){
                    nivel2Ball2.setDibujado(false);
                    nivel2Ball4.setX(xn2b2);
                    nivel2Ball4.setY(yn2b2);
                    nivel2Ball5.setX(xn2b2);
                    nivel2Ball5.setY(yn2b2);
                    pelotasDestruidas++;
                    bb2n2++;
                    bufoDobleDisparo2n2.setX(xn2b2);
                    bufoDobleDisparo2n2.setY(yn2b2);
                    bufoDobleDisparo2n2.setXb1(xb2b1n2);
                    bufoDobleDisparo2n2.setYb1(yb2b1n2);
                    bufoDobleDisparo2n2.setXb2(xb2b2n2);
                    bufoDobleDisparo2n2.setYb2(yb2b2n2);
                    bufoInvulnerabilidad2n2.setX(xn2b2);
                    bufoInvulnerabilidad2n2.setY(yn2b2);
                }
                if(nivel2Ball3.distance(x,y) <= 0.13 && nivel2Ball3.getDibujado() != false){
                    nivel2Ball3.setDibujado(false);
                    nivel2Ball6.setX(xn2b3);
                    nivel2Ball6.setY(yn2b3);
                    nivel2Ball7.setX(xn2b3);
                    nivel2Ball7.setY(yn2b3);
                    pelotasDestruidas++;
                    bb3n2++;
                    bufoDobleDisparo3n2.setX(xn2b3);
                    bufoDobleDisparo3n2.setY(yn2b3);
                    bufoDobleDisparo3n2.setXb1(xb3b1n2);
                    bufoDobleDisparo3n2.setYb1(yb3b1n2);
                    bufoDobleDisparo3n2.setXb2(xb3b2n2);
                    bufoDobleDisparo3n2.setYb2(yb3b2n2);
                    bufoInvulnerabilidad3n2.setX(xn2b3);
                    bufoInvulnerabilidad3n2.setY(yn2b3);
                }
            }
            if(i1n2 >= 20){
                if(nivel2Ball4.distance(x,y) <= 0.09 && nivel2Ball4.getDibujado() != false){
                    nivel2Ball4.setDibujado(false);
                    nivel2Ball8.setX(xn2b4);
                    nivel2Ball8.setY(yn2b4);
                    nivel2Ball9.setX(xn2b4);
                    nivel2Ball9.setY(yn2b4);
                    pelotasDestruidas++;
                }
                if(nivel2Ball5.distance(x,y) <= 0.09 && nivel2Ball5.getDibujado() != false){
                    nivel2Ball5.setDibujado(false);
                    nivel2Ball10.setX(xn2b5);
                    nivel2Ball10.setY(yn2b5);
                    nivel2Ball11.setX(xn2b5);
                    nivel2Ball11.setY(yn2b5);
                    pelotasDestruidas++;
                }
            }
            if(i2n2 >= 20){
                if(nivel2Ball6.distance(x,y) <= 0.09 && nivel2Ball6.getDibujado() != false){
                    nivel2Ball6.setDibujado(false);
                    nivel2Ball12.setX(xn2b6);
                    nivel2Ball12.setY(yn2b6);
                    nivel2Ball13.setX(xn2b6);
                    nivel2Ball13.setY(yn2b6);
                    pelotasDestruidas++;
                }
                if(nivel2Ball7.distance(x,y) <= 0.09 && nivel2Ball7.getDibujado() != false){
                    nivel2Ball7.setDibujado(false);
                    nivel2Ball14.setX(xn2b7);
                    nivel2Ball14.setY(yn2b7);
                    nivel2Ball15.setX(xn2b7);
                    nivel2Ball15.setY(yn2b7);
                    pelotasDestruidas++;
                }
            }
            if(i3n2 >= 20){
                if(nivel2Ball8.distance(x,y) <= 0.06 && nivel2Ball8.getDibujado() != false){
                    nivel2Ball8.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel2Ball9.distance(x,y) <= 0.06 && nivel2Ball9.getDibujado() != false){
                    nivel2Ball9.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
            if(i4n2 >= 20){
                if(nivel2Ball10.distance(x,y) <= 0.06 && nivel2Ball10.getDibujado() != false){
                    nivel2Ball10.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel2Ball11.distance(x,y) <= 0.06 && nivel2Ball11.getDibujado() != false){
                    nivel2Ball11.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
            if(i5n2 >= 20){
                if(nivel2Ball12.distance(x,y) <= 0.06 && nivel2Ball12.getDibujado() != false){
                    nivel2Ball12.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel2Ball13.distance(x,y) <= 0.06 && nivel2Ball13.getDibujado() != false){
                    nivel2Ball13.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
            if(i6n2 >= 20){
                if(nivel2Ball14.distance(x,y) <= 0.06 && nivel2Ball14.getDibujado() != false){
                    nivel2Ball14.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel2Ball15.distance(x,y) <= 0.06 && nivel2Ball15.getDibujado() != false){
                    nivel2Ball15.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
        }

        //TERCER NIVEL
        if(nivel == 3 || nivel == 4){
            if(in3b1 >= 80){
                if(nivel3Ball1.distance(x,y) <= 0.09 && nivel3Ball1.getDibujado() != false){
                    nivel3Ball1.setDibujado(false);
                    nivel3Ball6.setX(xn3b1);
                    nivel3Ball6.setY(yn3b1);
                    nivel3Ball7.setX(xn3b1);
                    nivel3Ball7.setY(yn3b1);
                    pelotasDestruidas++;
                    bb1n3++;
                    bufoDobleDisparo1n3.setX(xn3b1);
                    bufoDobleDisparo1n3.setY(yn3b1);
                    bufoDobleDisparo1n3.setXb1(xb1b1n3);
                    bufoDobleDisparo1n3.setYb1(yb1b1n3);
                    bufoDobleDisparo1n3.setXb2(xb1b2n3);
                    bufoDobleDisparo1n3.setYb2(yb1b2n3);
                    bufoInvulnerabilidad1n3.setX(xn3b1);
                    bufoInvulnerabilidad1n3.setY(yn3b1);
                }
            }
            if(in3b1 >= 80){
                if(nivel3Ball2.distance(x,y) <= 0.09 && nivel3Ball2.getDibujado() != false){
                    nivel3Ball2.setDibujado(false);
                    nivel3Ball8.setX(xn3b2);
                    nivel3Ball8.setY(yn3b2);
                    nivel3Ball9.setX(xn3b2);
                    nivel3Ball9.setY(yn3b2);
                    pelotasDestruidas++;
                    bb2n3++;
                    bufoDobleDisparo2n3.setX(xn3b2);
                    bufoDobleDisparo2n3.setY(yn3b2);
                    bufoDobleDisparo2n3.setXb1(xb2b1n3);
                    bufoDobleDisparo2n3.setYb1(yb2b1n3);
                    bufoDobleDisparo2n3.setXb2(xb2b2n3);
                    bufoDobleDisparo2n3.setYb2(yb2b2n3);
                    bufoInvulnerabilidad2n3.setX(xn3b2);
                    bufoInvulnerabilidad2n3.setY(yn3b2);
                }
            }
            if(in3b2 >= 80){
                if(nivel3Ball3.distance(x,y) <= 0.09 && nivel3Ball3.getDibujado() != false){
                    nivel3Ball3.setDibujado(false);
                    nivel3Ball10.setX(xn3b3);
                    nivel3Ball10.setY(yn3b3);
                    nivel3Ball11.setX(xn3b3);
                    nivel3Ball11.setY(yn3b3);
                    pelotasDestruidas++;
                    bb3n3++;
                    bufoDobleDisparo3n3.setX(xn3b3);
                    bufoDobleDisparo3n3.setY(yn3b3);
                    bufoDobleDisparo3n3.setXb1(xb3b1n3);
                    bufoDobleDisparo3n3.setYb1(yb3b1n3);
                    bufoDobleDisparo3n3.setXb2(xb3b2n3);
                    bufoDobleDisparo3n3.setYb2(yb3b2n3);
                    bufoInvulnerabilidad3n3.setX(xn3b3);
                    bufoInvulnerabilidad3n3.setY(yn3b3);
                }
            }
            if(in3b2 >= 80){
                if(nivel3Ball4.distance(x,y) <= 0.09 && nivel3Ball4.getDibujado() != false){
                    nivel3Ball4.setDibujado(false);
                    nivel3Ball12.setX(xn3b4);
                    nivel3Ball12.setY(yn3b4);
                    nivel3Ball13.setX(xn3b4);
                    nivel3Ball13.setY(yn3b4);
                    pelotasDestruidas++;
                    bb4n3++;
                    bufoDobleDisparo4n3.setX(xn3b4);
                    bufoDobleDisparo4n3.setY(yn3b4);
                    bufoDobleDisparo4n3.setXb1(xb4b1n3);
                    bufoDobleDisparo4n3.setYb1(yb4b1n3);
                    bufoDobleDisparo4n3.setXb2(xb4b2n3);
                    bufoDobleDisparo4n3.setYb2(yb4b2n3);
                    bufoInvulnerabilidad4n3.setX(xn3b4);
                    bufoInvulnerabilidad4n3.setY(yn3b4);
                }
            }
            if(in3b2 >= 80){
                if(nivel3Ball5.distance(x,y) <= 0.09 && nivel3Ball5.getDibujado() != false){
                    nivel3Ball5.setDibujado(false);
                    nivel3Ball14.setX(xn3b5);
                    nivel3Ball14.setY(yn3b5);
                    nivel3Ball15.setX(xn3b5);
                    nivel3Ball15.setY(yn3b5);
                    pelotasDestruidas++;
                    bb5n3++;
                    bufoDobleDisparo5n3.setX(xn3b5);
                    bufoDobleDisparo5n3.setY(yn3b5);
                    bufoDobleDisparo5n3.setXb1(xb5b1n3);
                    bufoDobleDisparo5n3.setYb1(yb5b1n3);
                    bufoDobleDisparo5n3.setXb2(xb5b2n3);
                    bufoDobleDisparo5n3.setYb2(yb5b2n3);
                    bufoInvulnerabilidad5n3.setX(xn3b5);
                    bufoInvulnerabilidad5n3.setY(yn3b5);
                }
            }
            if(in3 >= 20){
                if(nivel3Ball6.distance(x,y) <= 0.06 && nivel3Ball6.getDibujado() != false){
                    nivel3Ball6.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel3Ball7.distance(x,y) <= 0.06 && nivel3Ball7.getDibujado() != false){
                    nivel3Ball7.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
            if(i1n3 >= 20){
                if(nivel3Ball8.distance(x,y) <= 0.06 && nivel3Ball8.getDibujado() != false){
                    nivel3Ball8.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel3Ball9.distance(x,y) <= 0.06 && nivel3Ball9.getDibujado() != false){
                    nivel3Ball9.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
            if(i2n3 >= 20){
                if(nivel3Ball10.distance(x,y) <= 0.06 && nivel3Ball10.getDibujado() != false){
                    nivel3Ball10.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel3Ball11.distance(x,y) <= 0.06 && nivel3Ball11.getDibujado() != false){
                    nivel3Ball11.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
            if(i3n3 >= 20){
                if(nivel3Ball12.distance(x,y) <= 0.06 && nivel3Ball12.getDibujado() != false){
                    nivel3Ball12.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel3Ball13.distance(x,y) <= 0.06 && nivel3Ball13.getDibujado() != false){
                    nivel3Ball13.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
            if(i4n3 >= 20){
                if(nivel3Ball14.distance(x,y) <= 0.06 && nivel3Ball14.getDibujado() != false){
                    nivel3Ball14.setDibujado(false);
                    pelotasDestruidas++;
                }
                if(nivel3Ball15.distance(x,y) <= 0.06 && nivel3Ball15.getDibujado() != false){
                    nivel3Ball15.setDibujado(false);
                    pelotasDestruidas++;
                }
            }
        }

        //SEXTO NIVEL
        if(nivel == 6){
            if(contador_nivel_6 >= 80){
                if(hexagono1.distance(x,y) <= 0.06 && hexagono1.getDibujado() != false){
                    hexagono1.setDibujado(false);
                    hexagono5.setX(coordenada_x_hexagono1);
                    hexagono5.setY(coordenada_y_hexagono1);
                    hexagono6.setX(coordenada_x_hexagono1);
                    hexagono6.setY(coordenada_y_hexagono1);
                    hexagonosDestruidos++;
                }

                if(hexagono2.distance(x,y) <= 0.06 && hexagono2.getDibujado() != false){
                    hexagono2.setDibujado(false);
                    hexagono7.setX(coordenada_x_hexagono2);
                    hexagono7.setY(coordenada_y_hexagono2);
                    hexagono8.setX(coordenada_x_hexagono2);
                    hexagono8.setY(coordenada_y_hexagono2);
                    hexagonosDestruidos++;
                }

                if(hexagono3.distance(x,y) <= 0.06 && hexagono3.getDibujado() != false){
                    hexagono3.setDibujado(false);
                    hexagono9.setX(coordenada_x_hexagono3);
                    hexagono9.setY(coordenada_y_hexagono3);
                    hexagono10.setX(coordenada_x_hexagono3);
                    hexagono10.setY(coordenada_y_hexagono3);
                    hexagonosDestruidos++;
                }

                if(hexagono4.distance(x,y) <= 0.06 && hexagono4.getDibujado() != false){
                    hexagono4.setDibujado(false);
                    hexagono11.setX(coordenada_x_hexagono4);
                    hexagono11.setY(coordenada_y_hexagono4);
                    hexagono12.setX(coordenada_x_hexagono4);
                    hexagono12.setY(coordenada_y_hexagono4);
                    hexagonosDestruidos++;
                }
            }

            if(contador_hexagono1 >= 20){
                if(hexagono5.distance(x,y) <= 0.04 && hexagono5.getDibujado() != false){
                    hexagono5.setDibujado(false);
                    hexagonosDestruidos++;
                }

                if(hexagono6.distance(x,y) <= 0.04 && hexagono6.getDibujado() != false){
                    hexagono6.setDibujado(false);
                    hexagonosDestruidos++;
                }
            }

            if(contador_hexagono2 >= 20){
                if(hexagono7.distance(x,y) <= 0.04 && hexagono7.getDibujado() != false){
                    hexagono7.setDibujado(false);
                    hexagonosDestruidos++;
                }

                if(hexagono8.distance(x,y) <= 0.04 && hexagono8.getDibujado() != false){
                    hexagono8.setDibujado(false);
                    hexagonosDestruidos++;
                }
            }

            if(contador_hexagono3 >= 20){
                if(hexagono9.distance(x,y) <= 0.04 && hexagono9.getDibujado() != false){
                    hexagono9.setDibujado(false);
                    hexagonosDestruidos++;
                }

                if(hexagono10.distance(x,y) <= 0.04 && hexagono10.getDibujado() != false){
                    hexagono10.setDibujado(false);
                    hexagonosDestruidos++;
                }
            }

            if(contador_hexagono4 >= 20){
                if(hexagono11.distance(x,y) <= 0.04 && hexagono11.getDibujado() != false){
                    hexagono11.setDibujado(false);
                    hexagonosDestruidos++;
                }

                if(hexagono12.distance(x,y) <= 0.04 && hexagono12.getDibujado() != false){
                    hexagono12.setDibujado(false);
                    hexagonosDestruidos++;
                }
            }
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   PELOTAS DESTRUIDAS Y SALIDA DEL JUEGO
    //-----------------------------------------------------------------------------------------------------

    if(nivel == 1){
        if(pelotasDestruidas == 15){
            ig += 1;
            if(ig >= 20){
                cout << endl << endl << "--------------------------------------" << endl;
                cout <<                 "|         NIVEL 1 COMPLETADO!!       |" << endl;
                cout <<                 "--------------------------------------" << endl << endl;
                exit(0);
            }
        }
    }else if(nivel == 2){
        if(pelotasDestruidas == 30){
            in2g += 1;
            if(in2g >= 20){
                cout << endl << endl << "--------------------------------------" << endl;
                cout <<                 "|         NIVEL 2 COMPLETADO!!       |" << endl;
                cout <<                 "--------------------------------------" << endl << endl;
                exit(0);
            }
        }
    }else if(nivel == 3){
        if(pelotasDestruidas == 45){
            in3g += 1;
            if(in3g >= 20){
                cout << endl << endl << "--------------------------------------" << endl;
                cout <<                 "|         NIVEL 3 COMPLETADO!!       |" << endl;
                cout <<                 "--------------------------------------" << endl << endl;
                exit(0);
            }
        }
    }else if(nivel == 4){
        if(pelotasDestruidas == 45){
            in4g += 1;
            if(in4g >= 20){
                cout << endl << endl << "--------------------------------------" << endl;
                cout <<                 "|         NIVEL 4 COMPLETADO!!       |" << endl;
                cout <<                 "--------------------------------------" << endl << endl;
                exit(0);
            }
        }
    }else if(nivel == 5){
        if(pelotasDestruidas == 30){
            in5g += 1;
            if(in5g >= 20){
                cout << endl << endl << "--------------------------------------" << endl;
                cout <<                 "|         NIVEL 5 COMPLETADO!!       |" << endl;
                cout <<                 "--------------------------------------" << endl << endl;
                exit(0);
            }
        }
    }else if(nivel == 6){
        if(hexagonosDestruidos == 12){
            contador_nivel_6_Win += 1;
            if(contador_nivel_6_Win >= 20){
                cout << endl << endl << "--------------------------------------" << endl;
                cout <<                 "|         NIVEL 6 COMPLETADO!!       |" << endl;
                cout <<                 "--------------------------------------" << endl << endl;
                exit(0);
            }
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   TIEMPOS, DIBUJADOS Y USO DE LOS BUFOS
    //-----------------------------------------------------------------------------------------------------

    if(jugador1.distance(bufoDobleDisparo1.getX(), bufoDobleDisparo1.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo1.getColor() != color){
        bufoDobleDisparo1.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo2.getX(), bufoDobleDisparo2.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo2.getColor() != color){
        bufoDobleDisparo2.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo3.getX(), bufoDobleDisparo3.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo3.getColor() != color){
        bufoDobleDisparo3.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo1n2.getX(), bufoDobleDisparo1n2.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo1n2.getColor() != color){
        bufoDobleDisparo1n2.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo2n2.getX(), bufoDobleDisparo2n2.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo2n2.getColor() != color){
        bufoDobleDisparo2n2.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo3n2.getX(), bufoDobleDisparo3n2.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo3n2.getColor() != color){
        bufoDobleDisparo3n2.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo1n3.getX(), bufoDobleDisparo1n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo1n3.getColor() != color){
        bufoDobleDisparo1n3.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo2n3.getX(), bufoDobleDisparo2n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo2n3.getColor() != color){
        bufoDobleDisparo2n3.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo3n3.getX(), bufoDobleDisparo3n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo3n3.getColor() != color){
        bufoDobleDisparo3n3.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo4n3.getX(), bufoDobleDisparo4n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo4n3.getColor() != color){
        bufoDobleDisparo4n3.disappear();
    }
    if(jugador1.distance(bufoDobleDisparo5n3.getX(), bufoDobleDisparo5n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoDobleDisparo5n3.getColor() != color){
        bufoDobleDisparo5n3.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad1.getX(), bufoInvulnerabilidad1.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad1.getColor() != color){
        bufoInvulnerabilidad1.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad2.getX(), bufoInvulnerabilidad2.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad2.getColor() != color){
        bufoInvulnerabilidad2.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad3.getX(), bufoInvulnerabilidad3.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad3.getColor() != color){
        bufoInvulnerabilidad3.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad1n2.getX(), bufoInvulnerabilidad1n2.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad1n2.getColor() != color){
        bufoInvulnerabilidad1n2.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad2n2.getX(), bufoInvulnerabilidad2n2.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad2n2.getColor() != color){
        bufoInvulnerabilidad2n2.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad3n2.getX(), bufoInvulnerabilidad3n2.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad3n2.getColor() != color){
        bufoInvulnerabilidad3n2.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad1n3.getX(), bufoInvulnerabilidad1n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad1n3.getColor() != color){
        bufoInvulnerabilidad1n3.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad2n3.getX(), bufoInvulnerabilidad2n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad2n3.getColor() != color){
        bufoInvulnerabilidad2n3.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad3n3.getX(), bufoInvulnerabilidad3n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad3n3.getColor() != color){
        bufoInvulnerabilidad3n3.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad4n3.getX(), bufoInvulnerabilidad4n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad4n3.getColor() != color){
        bufoInvulnerabilidad4n3.disappear();
    }
    if(jugador1.distance(bufoInvulnerabilidad5n3.getX(), bufoInvulnerabilidad5n3.getY()) <= 0.08 && jugador1.getColor() != color && bufoInvulnerabilidad5n3.getColor() != color){
        bufoInvulnerabilidad5n3.disappear();
    }

    if(bufoDobleDisparo1.getColor() == color && ib1dd <= 300){
        ib1dd += 1;
        if(ib1dd <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo2.getColor() == color && ib2dd <= 300){
        ib2dd += 1;
        if(ib2dd <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo3.getColor() == color && ib3dd <= 300){
        ib3dd += 1;
        if(ib3dd <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo1n2.getColor() == color && ib1ddn2 <= 300){
        ib1ddn2 += 1;
        if(ib1ddn2 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo2n2.getColor() == color && ib2ddn2 <= 300){
        ib2ddn2 += 1;
        if(ib2ddn2 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo3n2.getColor() == color && ib3ddn2 <= 300){
        ib3ddn2 += 1;
        if(ib3ddn2 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo1n3.getColor() == color && ib1ddn3 <= 300){
        ib1ddn3 += 1;
        if(ib1ddn3 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo2n3.getColor() == color && ib2ddn3 <= 300){
        ib2ddn3 += 1;
        if(ib2ddn3 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo3n3.getColor() == color && ib3ddn3 <= 300){
        ib3ddn3 += 1;
        if(ib3ddn3 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo4n3.getColor() == color && ib4ddn3 <= 300){
        ib4ddn3 += 1;
        if(ib4ddn3 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoDobleDisparo5n3.getColor() == color && ib5ddn3 <= 300){
        ib5ddn3 += 1;
        if(ib5ddn3 <= 300){
            jugador1.dobleDisparoUpgrade();
            jugador1.setBufoDobleDisparo(true);
        }else{
            jugador1.setBufoDobleDisparo(false);
        }
    }
    if(bufoInvulnerabilidad1.getColor() == color && ib1in <= 300){
        ib1in += 1;
        if(ib1in <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad2.getColor() == color && ib2in <= 300){
        ib2in += 1;
        if(ib2in <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad3.getColor() == color && ib3in <= 300){
        ib3in += 1;
        if(ib3in <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad1n2.getColor() == color && ib1inn2 <= 300){
        ib1inn2 += 1;
        if(ib1inn2 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad2n2.getColor() == color && ib2inn2 <= 300){
        ib2inn2 += 1;
        if(ib2inn2 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad3n2.getColor() == color && ib3inn2 <= 300){
        ib3inn2 += 1;
        if(ib3inn2 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad1n3.getColor() == color && ib1inn3 <= 300){
        ib1inn3 += 1;
        if(ib1inn3 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad2n3.getColor() == color && ib2inn3 <= 300){
        ib2inn3 += 1;
        if(ib2inn3 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad3n3.getColor() == color && ib3inn3 <= 300){
        ib3inn3 += 1;
        if(ib3inn3 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad4n3.getColor() == color && ib4inn3 <= 300){
        ib4inn3 += 1;
        if(ib4inn3 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }
    if(bufoInvulnerabilidad5n3.getColor() == color && ib5inn3 <= 300){
        ib5inn3 += 1;
        if(ib5inn3 <= 300){
            jugador1.invulnerabilidadUpgrade();
        }else{
            jugador1.setColor({1.0, 0.0, 0.0});
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   CALCULOS Y CONTADORES DE LAS VIDAS
    //-----------------------------------------------------------------------------------------------------

    if(vidas == 1){
        tiempoMuerto += 1;
    }
    if(tiempoMuerto == 150){
        jugador1.appear();
    }
    if(vidas == 2){
        tiempoMuerto1 += 1;
    }
    if(tiempoMuerto1 == 150){
        jugador1.appear();
    }
    if(vidas == 3){
        cout << endl << endl << "           ------------------------------------------------" << endl;
        cout << "           |          PUES NO ERES MALO NI NA!!!          |" << endl;
        cout << "           ------------------------------------------------" << endl << endl << endl;
        exit(0);
    }
    if(jugador1.getColor() != color2){
        // MUERTES POR BOLAS DEL PRIMER NIVEL
        if(dificultad == 1 || dificultad == 2 || dificultad == 3){
            if(jugador1.distance(xb1, yb1) <= 0.15 && jugador1.getColor() != color && ball1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
        if(dificultad == 2 || dificultad == 3){
            if(jugador1.distance(xb2,yb2) <= 0.13 && jugador1.getColor() != color && ball2.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xb3,yb3) <= 0.13 && jugador1.getColor() != color && ball3.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
        if(dificultad == 3){
            if(jugador1.distance(xb4,yb4) <= 0.09 && jugador1.getColor() != color && ball4.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xb5,yb5) <= 0.09 && jugador1.getColor() != color && ball5.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xb6,yb6) <= 0.09 && jugador1.getColor() != color && ball6.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xb7,yb7) <= 0.09 && jugador1.getColor() != color && ball7.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
        //MUERTES POR BOLAS DEL SEGUNDO NIVEL
        if(dificultad == 1 || dificultad == 2 || dificultad == 3){
            if(jugador1.distance(xn2b1, yn2b1) <= 0.15 && jugador1.getColor() != color && nivel2Ball1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
        if(dificultad == 2 || dificultad == 3){
            if(jugador1.distance(xn2b2,yn2b2) <= 0.13 && jugador1.getColor() != color && nivel2Ball2.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn2b3,yn2b3) <= 0.13 && jugador1.getColor() != color && nivel2Ball3.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
        if(dificultad == 3){
            if(jugador1.distance(xn2b4,yn2b4) <= 0.09 && jugador1.getColor() != color && nivel2Ball4.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn2b5,yn2b5) <= 0.09 && jugador1.getColor() != color && nivel2Ball5.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn2b6,yn2b6) <= 0.09 && jugador1.getColor() != color && nivel2Ball6.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn2b7,yn2b7) <= 0.09 && jugador1.getColor() != color && nivel2Ball7.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
        //MUERTES POR BOLAS DEL TERCER NIVEL
        if(dificultad == 1 || dificultad == 2){
            if(jugador1.distance(xn3b1,yn3b1) <= 0.10 && jugador1.getColor() != color && nivel3Ball1.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn3b2,yn3b2) <= 0.10 && jugador1.getColor() != color && nivel3Ball2.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn3b3,yn3b3) <= 0.10 && jugador1.getColor() != color && nivel3Ball3.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn3b4,yn3b4) <= 0.10 && jugador1.getColor() != color && nivel3Ball4.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
            if(jugador1.distance(xn3b5,yn3b5) <= 0.10 && jugador1.getColor() != color && nivel3Ball5.getColor() != color){
                jugador1.disappear();
                vidas++;
            }
        }
    }

    //CODIGO PARA MOSTRAR LOS FRAMES POR SEGUNDO
    frame++;

    timeFrame = glutGet(GLUT_ELAPSED_TIME);
    if (timeFrame - timebase > 1000) {
        sprintf(s, "FPS:%4.2f", frame*1000.0/(timeFrame-timebase));
        timebase = timeFrame;
        frame = 0;
    }

    // Code to display a string (fps) with bitmap fonts
    setOrthographicProjection();

    glPushMatrix();
    glLoadIdentity();
    renderBitmapString(690,35,0,GLUT_BITMAP_HELVETICA_18,s);
    glPopMatrix();

    restorePerspectiveProjection();

    glutSwapBuffers();
}

// ----------------------------
//          KEYBOARD
// ----------------------------

void processSpecialKeys(int key, int xx, int yy){

    double xv;
    float x;
    float xd = jugador1.getX();
    float yd = jugador1.getY() + 0.06;
    float xd1 = jugador1.getX() - 0.04;
    float yd1 = jugador1.getY() + 0.06;
    float xd2 = jugador1.getX() + 0.04;
    float yd2 = jugador1.getY() + 0.06;

    switch(key){
    case GLUT_KEY_RIGHT :
        if(jugador1.getX() < -0.88 || jugador1.getX() > 0.88){
            xv = jugador1.getXV() * -1;
            jugador1.setXV(xv);
        }
        if(jugador1.getColor() != color){
            if(jugador1.getXV() >= 0.0){
                x = jugador1.getX() + jugador1.getXV();
                jugador1.setX(x);
            }else{
                xv = jugador1.getXV() * -1;
                jugador1.setXV(xv);
            }
        }
        break;
    case GLUT_KEY_LEFT :
        if(jugador1.getX() < -0.88 || jugador1.getX() > 0.88){
            xv = jugador1.getXV() * -1;
            jugador1.setXV(xv);
        }
        if(jugador1.getColor() != color){
            if(jugador1.getXV() <= 0.0){
                x = jugador1.getX() + jugador1.getXV();
                jugador1.setX(x);
            }else{
                xv = jugador1.getXV() * -1;
                jugador1.setXV(xv);
            }
        }
        break;
    case GLUT_KEY_UP :
        if(jugador1.getBufoDobleDisparo() == true && jugador1.getColor() != color){
            disparoJugador.push_back(new Disparo{0.012, xd1, yd1, 0.08, -0.005, {1.0, 0.0, 0.0}});
            disparoJugador.push_back(new Disparo{0.012, xd2, yd2, 0.08, 0.005, {1.0, 0.0, 0.0}});
        }else if(jugador1.getColor() != color){
            disparoJugador.push_back(new Disparo{0.012, xd, yd, 0.08, 0, {1.0, 0.0, 0.0}});
        }
        break;
    default:
        break;
    }
}

void ProcessNormalKeys(unsigned char key, int xx, int yy){
    switch(key){
    case 27:
        exit(0);
        break;
    case 'f' :
        glutFullScreen();
        break;
    case 'r' :
        glutReshapeWindow(800,800);
    }
}

void showMenu(){
    cout << endl << endl << "------------------------------" << endl;
    cout << "       MENU PRINCIPAL" << endl;
    cout << "------------------------------" << endl;
    cout << "1.Nueva Partida." << endl;
    cout << "2.Definicion de las diferentes dificultades." << endl;
    cout << "3.Versiones del juego" << endl;
    cout << "4.Salir" << endl;
    cout << "Que quieres hacer?: ";
}

void showVersiones(){
    cout << "-------------------" << endl;
    cout << "   VERSION ALFA" << endl;
    cout << "-------------------" << endl;
    cout << "- Funciones basicas del juego." << endl;
    cout << "- Menu basico." << endl;
    cout << "- Creacion de varios niveles para testear." << endl;
    cout << "                                                                      Fecha de salida: 25/03/2019" << endl << endl;
    cout << "-------------------" << endl;
    cout << "   VERSION BETA" << endl;
    cout << "-------------------" << endl;
    cout << "- Dos nuevos bufos para el jugador: Invulnerabilidad y Doble disparo." << endl;
    cout << "- Menu mas completo." << endl;
    cout << "- Sistema de eleccion de dificultad." << endl;
    cout << "- Ahora se pueden ver los FPS." << endl;
    cout << "- Ahora el juego finaliza cuando se termina el nivel elegido." << endl;
    cout << "- Mejoras varias en el codigo para un mejor rendimiento del juego." << endl;
    cout << "                                                                      Fecha de salida: " << endl << endl;
    cout << "(1)Volver al menu principal, (2)Salir del juego." << endl;
    cout << "Que quieres hacer?: ";
}

void showDificultadDescripcion(){
    cout << "--------------------" << endl;
    cout << "  DIFICULTAD FACIL" << endl;
    cout << "--------------------" << endl;
    cout << "- Solo las pelotas grandes te pueden matar." << endl;
    cout << "- Mayor probabilidad de que salgan bufos para el jugador." << endl;
    cout << "--------------------" << endl;
    cout << "  DIFICULTAD MEDIA" << endl;
    cout << "--------------------" << endl;
    cout << "- Te matan las pelotas grandes y las medianas." << endl;
    cout << "- Menor probabilidad de que salgan bufos para el jugador." << endl;
    cout << "----------------------" << endl;
    cout << "  DIFICULTAD DIFICIL" << endl;
    cout << "----------------------" << endl;
    cout << "- Te matan las pelotas grandes, las medianas y las medianas-pequeñas." << endl;
    cout << "- Poca probabilidad de que salgan bufos para el jugador." << endl << endl;
    cout << "(1)Volver al menu principal, (2)Salir del juego." << endl;
    cout << "Que quieres hacer?: ";
}

void showNivel(){
    cout << "----------------------" << endl;
    cout << "  ELECCION DE NIVEL" << endl;
    cout << "----------------------" << endl;
    cout << "1.Mundo 1-1 " << endl;
    cout << "2.Mundo 1-2 " << endl;
    cout << "3.Mundo 1-3" << endl;
    cout << "4.Mundo 1-4" << endl;
    cout << "5.Mundo 1-5" << endl;
    cout << "6.Mundo 2-1" << endl;
    cout << "Que nivel quieres jugar?: ";
}

void showDificultad(){
    cout << endl << "--------------------------" << endl;
    cout << "  ELECCION DE DIFICULTAD" << endl;
    cout << "--------------------------" << endl;
    cout << "1.Dificultad Facil. " << endl;
    cout << "2.Dificultad Media. " << endl;
    cout << "3.Dificultad Dificil. " << endl;
    cout << "Que dificultad eliges?: ";
}

void changeSize(int ww, int hh){
    h = hh;
    w = ww;

    if(h == 0) h = 1;

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glViewport(0, 0, w, h);

    //gluOrtho2D(1.0, -1.0, 1.0, -1.0); asi es para poner la pantalla al reves.

    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    int respuesta{0}, respuesta1{0}, respuesta2{0};

    frames.push_back(new Frame{0.0, 0.1, -1.0, 0.9, 1.0, 0.9, 1.0, 0.85, -1.0, 0.85, {0.0, 0.5, 1.0}});
    frames.push_back(new Frame{0.0, -0.1, -1.0, -0.85, 1.0, -0.85, 1.0, -0.9, -1.0, -0.9, {0.0, 0.5, 1.0}});
    frames.push_back(new Frame{0.0, 0.0, 0.95, 1.0, 1.0, 1.0, 1.0, -1.0, 0.95, -1.0, {0.0, 0.5, 1.0}});
    frames.push_back(new Frame{0.0, 0.0, -1.0, 1.0, -0.95, 1.0, -0.95, -1.0, -1.0, -1.0, {0.0, 0.5, 1.0}});

    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, -0.8, -0.85, -0.75, -0.85, -0.75, -0.9, -0.8, -0.9, {0.0, 0.0, 1.0}, 1});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, 0.1, -0.85, 0.15, -0.85, 0.15, -0.9, 0.1, -0.9, {0.0, 0.0, 1.0}, 1});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, 0.8, -0.85, 0.75, -0.85, 0.75, -0.9, 0.8, -0.9, {0.0, 0.0, 1.0}, 2});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, -0.1, -0.85, -0.15, -0.85, -0.15, -0.9, -0.1, -0.9, {0.0, 0.0, 1.0}, 2});

    cout << "                            ----------------------" << endl;
    cout << "                              BIENVENIDO AL PANG" << endl;
    cout << "                            ----------------------" << endl;

    while(respuesta != 1){

        showMenu();
        cin >> respuesta;

        switch(respuesta){
        case 2 :
            showDificultadDescripcion();
            cin >> respuesta1;

            if(respuesta1 == 1){

            }else{
                exit(0);
            }
            break;
        case 3 :
            showVersiones();
            cin >> respuesta2;

            if(respuesta2 == 1){

            }else{
                exit(0);
            }
            break;
        case 4 :
            exit(0);
        }
    }

    if(respuesta == 1){
        showNivel();
        cin >> nivel;
        showDificultad();
        cin >> dificultad;
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(800,800);
    glutCreateWindow("PANG");

    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutKeyboardFunc(ProcessNormalKeys);
    glutSpecialFunc(processSpecialKeys);
    glutIdleFunc(renderScene);

    init();

    glutMainLoop();

    return 0;
}
