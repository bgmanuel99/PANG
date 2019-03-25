#include <iostream>
#include <figure.h>
#include <ball.h>
#include <frame.h>
#include <jugador.h>
#include <disparo.h>
#include <thunderbolt.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;
//------------------------------------
// PRIMER NIVEL
//------------------------------------
Ball ball1{0.15, 0, 0.005, {0.0, 1.0, 0.0}, 0.8, -0.8, 0.5, -0.8};
Ball ball2{0.13, 0, 0.005, {0.0, 1.0, 0.0}, 0.82, -0.82, 0.5, -0.82};
Ball ball3{0.13, 0, -0.005, {0.0, 1.0, 0.0}, 0.82, -0.82, 0.5, -0.82};
Ball ball4{0.09, 0, -0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.5, -0.85};
Ball ball5{0.09, 0, 0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.5, -0.85};
Ball ball6{0.09, 0, -0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.5, -0.85};
Ball ball7{0.09, 0, 0.005, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.5, -0.85};
Ball ball8{0.06, 0, -0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball ball9{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball ball10{0.06, 0, -0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball ball11{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball ball12{0.06, 0, -0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball ball13{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};
Ball ball14{0.06, 0, -0.005, {0.0, 1.0, 0.0},0.89, -0.89, 0.5, -0.89};
Ball ball15{0.06, 0, 0.005, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.5, -0.89};

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
Jugador maquina{0.89, {1.0, 0.0, 0.0}};

//-------------------------------------------
// QUINTO NIVEL
//-------------------------------------------
ThunderBolt rayo1{0.0, -0.1, -0.8, 1.05, -0.75, 1.05, -0.75, -0.85, -0.8, -0.85, {0.5, 1.0, 1.0}, 1};
ThunderBolt rayo2{0.0, -0.1, 0.1, 1.05, 0.15, 1.05, 0.15, -0.85, 0.1, -0.85, {0.0, 0.0, 1.0}, 1};
ThunderBolt rayo3{0.0, -0.1, 0.8, 1.05, 0.75, 1.05, 0.75, -0.85, 0.8, -0.85, {0.0, 0.0, 1.0}, 2};
ThunderBolt rayo4{0.0, -0.1, -0.1, 1.05, -0.15, 1.05, -0.15, -0.85, -0.1, -0.85, {0.0 , 0.0 , 1.0}, 2};

Jugador jugador1{-0.89, {1.0, 0.0, 0.0}};
vector <Figure*> disparoJugador;
vector <Figure*> disparoMaquina;
vector <Figure*> frame;
vector <Figure*> thunderBolt;
array <float,3> color = {0.5, 1.0, 1.0}; // color cyan
array <float,3> color1 = {0.0, 0.0, 1.0}; // color azul

int i{0}, i1{0}, i2{0}, i3{0}, i4{0}, i5{0}, i6{0};
int in2b1{0}, in2{0}, i1n2{0}, i2n2{0}, i3n2{0}, i4n2{0}, i5n2{0}, i6n2{0};
int in3b1{0}, in3b2{0}, in3{0}, i1n3{0}, i2n3{0}, i3n3{0}, i4n3{0};
int in4{0};
int in5{0}, i1n5{0};
int vidas{0}, tiempoMuerto{0}, tiempoMuerto1{0};

int nivel;

bool init()
{
    glClearColor(0.5f, 1.0f, 1.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    return true;
}

void renderScene(){

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

    xdabr1 = rayo1.getXDAB(); ydabr1 = rayo1.getYDAB();
    xdabr2 = rayo2.getXDAB(); ydabr2 = rayo2.getYDAB();
    xdabr3 = rayo3.getXDAB(); ydabr3 = rayo3.getYDAB();
    xdabr4 = rayo4.getXDAB(); ydabr4 = rayo4.getYDAB();
    //-----------------------------------------------------------------------------------------------------

    glClear(GL_COLOR_BUFFER_BIT);

    for(auto frames : frame){
        frames->draw();
    }

    jugador1.draw();

    //-----------------------------------------------------------------------------------------------------
    //                                    PRIMER NIVEL
    //-----------------------------------------------------------------------------------------------------

    if(nivel == 1 || nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){
        ball1.draw();
        ball1.traslacion();
    }

    if(nivel == 1 || nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){
        // CONTADORES PRIMER NIVEL
        if(ball1.getColor() == color){
            i += 1;
            ball2.draw();
            ball2.traslacion();
            ball3.draw();
            ball3.traslacion();
        }
        if(ball2.getColor() == color){
            i1 += 1;
            ball4.draw();
            ball4.traslacion();
            ball5.draw();
            ball5.traslacion();
        }
        if(ball3.getColor() == color){
            i2 += 1;
            ball6.draw();
            ball6.traslacion();
            ball7.draw();
            ball7.traslacion();
        }
        if(ball4.getColor() == color){
            i3 += 1;
            ball8.draw();
            ball8.traslacion();
            ball9.draw();
            ball9.traslacion();
        }
        if(ball5.getColor() == color){
            i4 += 1;
            ball10.draw();
            ball10.traslacion();
            ball11.draw();
            ball11.traslacion();
        }
        if(ball6.getColor() == color){
            i5 += 1;
            ball12.draw();
            ball12.traslacion();
            ball13.draw();
            ball13.traslacion();
        }
        if(ball7.getColor() == color){
            i6 += 1;
            ball14.draw();
            ball14.traslacion();
            ball15.draw();
            ball15.traslacion();
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                    SEGUNDO NIVEL
    //-----------------------------------------------------------------------------------------------------

    if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){
        if(in2b1 >= 80){
            nivel2Ball1.draw();
            nivel2Ball1.traslacion();
        }
    }

    //CONTADOR PARA LA PRIMERA BOLA DEL SEGUNDO NIVEL
    if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){
        if(ball1.getColor() == color && ball2.getColor() == color || ball3.getColor() == color){
            in2b1 += 1;
        }
    }
    // CONTADORES SEGUNDO NIVEL
    if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){
        if(nivel2Ball1.getColor() == color){
            in2 += 1;
            nivel2Ball2.draw();
            nivel2Ball2.traslacion();
            nivel2Ball3.draw();
            nivel2Ball3.traslacion();
        }
        if(nivel2Ball2.getColor() == color){
            i1n2 += 1;
            nivel2Ball4.draw();
            nivel2Ball4.traslacion();
            nivel2Ball5.draw();
            nivel2Ball5.traslacion();
        }
        if(nivel2Ball3.getColor() == color){
            i2n2 += 1;
            nivel2Ball6.draw();
            nivel2Ball6.traslacion();
            nivel2Ball7.draw();
            nivel2Ball7.traslacion();
        }
        if(nivel2Ball4.getColor() == color){
            i3n2 += 1;
            nivel2Ball8.draw();
            nivel2Ball8.traslacion();
            nivel2Ball9.draw();
            nivel2Ball9.traslacion();
        }
        if(nivel2Ball5.getColor() == color){
            i4n2 += 1;
            nivel2Ball10.draw();
            nivel2Ball10.traslacion();
            nivel2Ball11.draw();
            nivel2Ball11.traslacion();
        }
        if(nivel2Ball6.getColor() == color){
            i5n2 += 1;
            nivel2Ball12.draw();
            nivel2Ball12.traslacion();
            nivel2Ball13.draw();
            nivel2Ball13.traslacion();
        }
        if(nivel2Ball7.getColor() == color){
            i6n2 += 1;
            nivel2Ball14.draw();
            nivel2Ball14.traslacion();
            nivel2Ball15.draw();
            nivel2Ball15.traslacion();
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   TERCER NIVEL
    //-----------------------------------------------------------------------------------------------------

    if(nivel == 3 || nivel == 4){
        if(in3b1 >= 80){
            nivel3Ball1.draw();
            nivel3Ball1.traslacion();
        }
        if(in3b1 >= 80){
            nivel3Ball2.draw();
            nivel3Ball2.traslacion();
        }
        if(in3b2 >= 80){
            nivel3Ball3.draw();
            nivel3Ball3.traslacion();
        }
        if(in3b2 >= 80){
            nivel3Ball4.draw();
            nivel3Ball4.traslacion();
        }
        if(in3b2 >= 80){
            nivel3Ball5.draw();
            nivel3Ball5.traslacion();
        }
    }

    //CONTADORES TERCER NIVEL
    if(nivel == 3 || nivel == 4){
        if(ball1.getColor() == color && ball2.getColor() == color && ball3.getColor() == color && nivel2Ball1.getColor() == color
                && nivel2Ball2.getColor() == color || nivel2Ball3.getColor() == color){
            in3b1 += 1;
        }
        if(nivel3Ball1.getColor() == color && nivel3Ball2.getColor() == color){
            in3b2 += 1;
        }
        if(nivel3Ball1.getColor() == color){
            in3 += 1;
            nivel3Ball6.draw();
            nivel3Ball6.traslacion();
            nivel3Ball7.draw();
            nivel3Ball7.traslacion();
        }
        if(nivel3Ball2.getColor() == color){
            i1n3 += 1;
            nivel3Ball8.draw();
            nivel3Ball8.traslacion();
            nivel3Ball9.draw();
            nivel3Ball9.traslacion();
        }
        if(nivel3Ball3.getColor() == color){
            i2n3 += 1;
            nivel3Ball10.draw();
            nivel3Ball10.traslacion();
            nivel3Ball11.draw();
            nivel3Ball11.traslacion();
        }
        if(nivel3Ball4.getColor() == color){
            i3n3 += 1;
            nivel3Ball12.draw();
            nivel3Ball12.traslacion();
            nivel3Ball13.draw();
            nivel3Ball13.traslacion();
        }
        if(nivel3Ball5.getColor() == color){
            i4n3 += 1;
            nivel3Ball14.draw();
            nivel3Ball14.traslacion();
            nivel3Ball15.draw();
            nivel3Ball15.traslacion();
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   CUARTO NIVEL
    //-----------------------------------------------------------------------------------------------------

    //CONTADORES CUARTO NIVEL
    if(nivel == 4 || nivel == 5){
        in4 += 1;

        if(in4 > 150){
            in4 = 0;
        }
    }

    //MAQUINA CUARTO NIVEL
    if(nivel == 4 || nivel == 5){

        maquina.drawMaquina();
        maquina.traslacion();

        float xm = maquina.getX();
        float ym = maquina.getY();
        float xdm, ydm;

        if(in4 == 150){
            disparoMaquina.push_back(new Disparo{0.020, xm, ym, -0.08, {1.0, 0.0, 0.0}});
        }

        for(auto disparo : disparoMaquina){
            disparo->draw();
            disparo->traslacion();
            xdm = disparo->getX();
            ydm = disparo->getY();
        }

        if(jugador1.distance(xdm, ydm) <= 0.040 && jugador1.getColor() != color){
            jugador1.disappear();
            vidas++;
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

        if(jugador1.distance(xdabr1, ydabr1) <= 0.050 && rayo1.getColor() == color1 && jugador1.getColor() != color){
            jugador1.disappear();
            vidas++;
        }else if(jugador1.distance(xdabr2, ydabr2) <= 0.050 && rayo2.getColor() == color1 && jugador1.getColor() != color){
            jugador1.disappear();
            vidas++;
        }else if(jugador1.distance(xdabr3, ydabr3) <= 0.050 && rayo3.getColor() == color1 && jugador1.getColor() != color){
            jugador1.disappear();
            vidas++;
        }else if(jugador1.distance(xdabr4, ydabr4) <= 0.050 && rayo4.getColor() == color1 && jugador1.getColor() != color){
            jugador1.disappear();
            vidas++;
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
        if(ball1.distance(x,y) <= 0.15 && ball1.getColor() != color){
            ball1.disappear();
            ball2.setX(xb1);
            ball2.setY(yb1);
            ball3.setX(xb1);
            ball3.setY(yb1);
        }
        if(i >= 20){
            if(ball2.distance(x,y) <= 0.13 && ball2.getColor() != color){
                ball2.disappear();
                ball4.setX(xb2);
                ball4.setY(yb2);
                ball5.setX(xb2);
                ball5.setY(yb2);
            }
            if(ball3.distance(x,y) <= 0.13 && ball3.getColor() != color){
                ball3.disappear();
                ball6.setX(xb3);
                ball6.setY(yb3);
                ball7.setX(xb3);
                ball7.setY(yb3);
            }
        }
        if(i1 >= 20){
            if(ball4.distance(x,y) <= 0.09 && ball4.getColor() != color){
                ball4.disappear();
                ball8.setX(xb4);
                ball8.setY(yb4);
                ball9.setX(xb4);
                ball9.setY(yb4);
            }
            if(ball5.distance(x,y) <= 0.09 && ball5.getColor() != color){
                ball5.disappear();
                ball10.setX(xb5);
                ball10.setY(yb5);
                ball11.setX(xb5);
                ball11.setY(yb5);
            }
        }
        if(i2 >= 20){
            if(ball6.distance(x,y) <= 0.09 && ball6.getColor() != color){
                ball6.disappear();
                ball12.setX(xb6);
                ball12.setY(yb6);
                ball13.setX(xb6);
                ball13.setY(yb6);
            }

            if(ball7.distance(x,y) <= 0.09 && ball7.getColor() != color){
                ball7.disappear();
                ball14.setX(xb7);
                ball14.setY(yb7);
                ball15.setX(xb7);
                ball15.setY(yb7);
            }
        }
        if(i3 >= 20){
            if(ball8.distance(x,y) <= 0.06 && ball8.getColor() != color){
                ball8.disappear();
            }
            if(ball9.distance(x,y) <= 0.06 && ball9.getColor() != color){
                ball9.disappear();
            }
        }
        if(i4 >= 20){
            if(ball10.distance(x,y) <= 0.06 && ball10.getColor() != color){
                ball10.disappear();
            }
            if(ball11.distance(x,y) <= 0.06 && ball11.getColor() != color){
                ball11.disappear();
            }
        }
        if(i5 >= 20){
            if(ball12.distance(x,y) <= 0.06 && ball12.getColor() != color){
                ball12.disappear();
            }
            if(ball13.distance(x,y) <= 0.06 && ball13.getColor() != color){
                ball13.disappear();
            }
        }
        if(i6 >= 20){
            if(ball14.distance(x,y) <= 0.06 && ball14.getColor() != color){
                ball14.disappear();
            }
            if(ball15.distance(x,y) <= 0.06 && ball15.getColor() != color){
                ball15.disappear();
            }
        }

        // SEGUNDO NIVEL
        if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5){
            if(in2b1 >= 80){
                if(nivel2Ball1.distance(x,y) <= 0.15 && nivel2Ball1.getColor() != color){
                    nivel2Ball1.disappear();
                    nivel2Ball2.setX(xn2b1);
                    nivel2Ball2.setY(yn2b1);
                    nivel2Ball3.setX(xn2b1);
                    nivel2Ball3.setY(yn2b1);
                }
            }
            if(in2 >= 20){
                if(nivel2Ball2.distance(x,y) <= 0.13 && nivel2Ball2.getColor() != color){
                    nivel2Ball2.disappear();
                    nivel2Ball4.setX(xn2b2);
                    nivel2Ball4.setY(yn2b2);
                    nivel2Ball5.setX(xn2b2);
                    nivel2Ball5.setY(yn2b2);
                }
                if(nivel2Ball3.distance(x,y) <= 0.13 && nivel2Ball3.getColor() != color){
                    nivel2Ball3.disappear();
                    nivel2Ball6.setX(xn2b3);
                    nivel2Ball6.setY(yn2b3);
                    nivel2Ball7.setX(xn2b3);
                    nivel2Ball7.setY(yn2b3);
                }
            }
            if(i1n2 >= 20){
                if(nivel2Ball4.distance(x,y) <= 0.09 && nivel2Ball4.getColor() != color){
                    nivel2Ball4.disappear();
                    nivel2Ball8.setX(xn2b4);
                    nivel2Ball8.setY(yn2b4);
                    nivel2Ball9.setX(xn2b4);
                    nivel2Ball9.setY(yn2b4);
                }
                if(nivel2Ball5.distance(x,y) <= 0.09 && nivel2Ball5.getColor() != color){
                    nivel2Ball5.disappear();
                    nivel2Ball10.setX(xn2b5);
                    nivel2Ball10.setY(yn2b5);
                    nivel2Ball11.setX(xn2b5);
                    nivel2Ball11.setY(yn2b5);
                }
            }
            if(i2n2 >= 20){
                if(nivel2Ball6.distance(x,y) <= 0.09 && nivel2Ball6.getColor() != color){
                    nivel2Ball6.disappear();
                    nivel2Ball12.setX(xn2b6);
                    nivel2Ball12.setY(yn2b6);
                    nivel2Ball13.setX(xn2b6);
                    nivel2Ball13.setY(yn2b6);
                }
                if(nivel2Ball7.distance(x,y) <= 0.09 && nivel2Ball7.getColor() != color){
                    nivel2Ball7.disappear();
                    nivel2Ball14.setX(xn2b7);
                    nivel2Ball14.setY(yn2b7);
                    nivel2Ball15.setX(xn2b7);
                    nivel2Ball15.setY(yn2b7);
                }
            }
            if(i3n2 >= 20){
                if(nivel2Ball8.distance(x,y) <= 0.06 && nivel2Ball8.getColor() != color){
                    nivel2Ball8.disappear();
                }
                if(nivel2Ball9.distance(x,y) <= 0.06 && nivel2Ball9.getColor() != color){
                    nivel2Ball9.disappear();
                }
            }
            if(i4n2 >= 20){
                if(nivel2Ball10.distance(x,y) <= 0.06 && nivel2Ball10.getColor() != color){
                    nivel2Ball10.disappear();
                }
                if(nivel2Ball11.distance(x,y) <= 0.06 && nivel2Ball11.getColor() != color){
                    nivel2Ball11.disappear();
                }
            }
            if(i5n2 >= 20){
                if(nivel2Ball12.distance(x,y) <= 0.06 && nivel2Ball12.getColor() != color){
                    nivel2Ball12.disappear();
                }
                if(nivel2Ball13.distance(x,y) <= 0.06 && nivel2Ball13.getColor() != color){
                    nivel2Ball13.disappear();
                }
            }
            if(i6n2 >= 20){
                if(nivel2Ball14.distance(x,y) <= 0.06 && nivel2Ball14.getColor() != color){
                    nivel2Ball14.disappear();
                }
                if(nivel2Ball15.distance(x,y) <= 0.06 && nivel2Ball15.getColor() != color){
                    nivel2Ball15.disappear();
                }
            }
        }

        //TERCER NIVEL
        if(nivel == 3 || nivel == 4){
            if(in3b1 >= 80){
                if(nivel3Ball1.distance(x,y) <= 0.09 && nivel3Ball1.getColor() != color){
                    nivel3Ball1.disappear();
                    nivel3Ball6.setX(xn3b1);
                    nivel3Ball6.setY(yn3b1);
                    nivel3Ball7.setX(xn3b1);
                    nivel3Ball7.setY(yn3b1);
                }
            }
            if(in3b1 >= 80){
                if(nivel3Ball2.distance(x,y) <= 0.09 && nivel3Ball2.getColor() != color){
                    nivel3Ball2.disappear();
                    nivel3Ball8.setX(xn3b2);
                    nivel3Ball8.setY(yn3b2);
                    nivel3Ball9.setX(xn3b2);
                    nivel3Ball9.setY(yn3b2);
                }
            }
            if(in3b2 >= 80){
                if(nivel3Ball3.distance(x,y) <= 0.09 && nivel3Ball3.getColor() != color){
                    nivel3Ball3.disappear();
                    nivel3Ball10.setX(xn3b3);
                    nivel3Ball10.setY(yn3b3);
                    nivel3Ball11.setX(xn3b3);
                    nivel3Ball11.setY(yn3b3);
                }
            }
            if(in3b2 >= 80){
                if(nivel3Ball4.distance(x,y) <= 0.09 && nivel3Ball4.getColor() != color){
                    nivel3Ball4.disappear();
                    nivel3Ball12.setX(xn3b4);
                    nivel3Ball12.setY(yn3b4);
                    nivel3Ball13.setX(xn3b4);
                    nivel3Ball13.setY(yn3b4);
                }
            }
            if(in3b2 >= 80){
                if(nivel3Ball5.distance(x,y) <= 0.09 && nivel3Ball5.getColor() != color){
                    nivel3Ball5.disappear();
                    nivel3Ball14.setX(xn3b5);
                    nivel3Ball14.setY(yn3b5);
                    nivel3Ball15.setX(xn3b5);
                    nivel3Ball15.setY(yn3b5);
                }
            }
            if(in3 >= 20){
                if(nivel3Ball6.distance(x,y) <= 0.06 && nivel3Ball6.getColor() != color){
                    nivel3Ball6.disappear();
                }
                if(nivel3Ball7.distance(x,y) <= 0.06 && nivel3Ball7.getColor() != color){
                    nivel3Ball7.disappear();
                }
            }
            if(i1n3 >= 20){
                if(nivel3Ball8.distance(x,y) <= 0.06 && nivel3Ball8.getColor() != color){
                    nivel3Ball8.disappear();
                }
                if(nivel3Ball9.distance(x,y) <= 0.06 && nivel3Ball9.getColor() != color){
                    nivel3Ball9.disappear();
                }
            }
            if(i2n3 >= 20){
                if(nivel3Ball10.distance(x,y) <= 0.06 && nivel3Ball10.getColor() != color){
                    nivel3Ball10.disappear();
                }
                if(nivel3Ball11.distance(x,y) <= 0.06 && nivel3Ball11.getColor() != color){
                    nivel3Ball11.disappear();
                }
            }
            if(i3n3 >= 20){
                if(nivel3Ball12.distance(x,y) <= 0.06 && nivel3Ball12.getColor() != color){
                    nivel3Ball12.disappear();
                }
                if(nivel3Ball13.distance(x,y) <= 0.06 && nivel3Ball13.getColor() != color){
                    nivel3Ball13.disappear();
                }
            }
            if(i4n3 >= 20){
                if(nivel3Ball14.distance(x,y) <= 0.06 && nivel3Ball14.getColor() != color){
                    nivel3Ball14.disappear();
                }
                if(nivel3Ball15.distance(x,y) <= 0.06 && nivel3Ball15.getColor() != color){
                    nivel3Ball15.disappear();
                }
            }
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
        cout << "ERE UN MIERDA!!!" << endl;
        exit(0);
    }
    // MUERTES POR BOLAS DEL PRIMER NIVEL
    if(jugador1.distance(xb1, yb1) <= 0.15 && jugador1.getColor() != color && ball1.getColor() != color){
        jugador1.disappear();
        vidas++;
    }
    if(jugador1.distance(xb2,yb2) <= 0.13 && jugador1.getColor() != color && ball2.getColor() != color){
        jugador1.disappear();
        vidas++;
    }
    if(jugador1.distance(xb3,yb3) <= 0.13 && jugador1.getColor() != color && ball3.getColor() != color){
        jugador1.disappear();
        vidas++;
    }
    //MUERTES POR BOLAS DEL SEGUNDO NIVEL
    if(jugador1.distance(xn2b1, yn2b1) <= 0.15 && jugador1.getColor() != color && nivel2Ball1.getColor() != color){
        jugador1.disappear();
        vidas++;
    }
    if(jugador1.distance(xn2b2,yn2b2) <= 0.13 && jugador1.getColor() != color && nivel2Ball2.getColor() != color){
        jugador1.disappear();
        vidas++;
    }
    if(jugador1.distance(xn2b3,yn2b3) <= 0.13 && jugador1.getColor() != color && nivel2Ball3.getColor() != color){
        jugador1.disappear();
        vidas++;
    }
    //MUERTES POR BOLAS DEL TERCER NIVEL
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

    glutSwapBuffers();
}

// ----------------------------
//          KEYBOARD
// ----------------------------

void processSpecialKeys(int key, int xx, int yy){

    double xv;
    float x;
    float xd = jugador1.getX();
    float yd = jugador1.getY();

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
        if(jugador1.getColor() != color){
            disparoJugador.push_back(new Disparo{0.012, xd, yd, 0.08, {1.0, 0.0, 0.0}});
        }
    }
}

void ProcessNormalKeys(unsigned char key, int xx, int yy){
    if(key == 27){
        exit(0);
    }
}

int main(int argc, char **argv)
{

    int respuesta;

    frame.push_back(new Frame{0.0, 0.1, -1.0, 0.9, 1.0, 0.9, 1.0, 0.85, -1.0, 0.85, {0.0, 0.5, 1.0}});
    frame.push_back(new Frame{0.0, -0.1, -1.0, -0.85, 1.0, -0.85, 1.0, -0.9, -1.0, -0.9, {0.0, 0.5, 1.0}});
    frame.push_back(new Frame{0.0, 0.0, 0.95, 1.0, 1.0, 1.0, 1.0, -1.0, 0.95, -1.0, {0.0, 0.5, 1.0}});
    frame.push_back(new Frame{0.0, 0.0, -1.0, 1.0, -0.95, 1.0, -0.95, -1.0, -1.0, -1.0, {0.0, 0.5, 1.0}});

    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, -0.8, -0.85, -0.75, -0.85, -0.75, -0.9, -0.8, -0.9, {0.0, 0.0, 1.0}, 1});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, 0.1, -0.85, 0.15, -0.85, 0.15, -0.9, 0.1, -0.9, {0.0, 0.0, 1.0}, 1});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, 0.8, -0.85, 0.75, -0.85, 0.75, -0.9, 0.8, -0.9, {0.0, 0.0, 1.0}, 2});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, -0.1, -0.85, -0.15, -0.85, -0.15, -0.9, -0.1, -0.9, {0.0, 0.0, 1.0}, 2});

    cout << "                            ----------------------" << endl;
    cout << "                              BIENVENIDO AL PANG" << endl;
    cout << "                            ----------------------" << endl;
    cout << endl << endl << "------------------------------" << endl;
    cout << "       ELECCION DE NIVEL" << endl;
    cout << "------------------------------" << endl;
    cout << "1. Nivel 1." << endl;
    cout << "2. Nivel 2." << endl;
    cout << "3. Nivel 3." << endl;
    cout << "4. Nivel 4." << endl;
    cout << "5. Nivel 5." << endl;
    cout << "Que nivel quieres jugar?: ";
    cin >> nivel;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(800,800);
    glutCreateWindow("PANG");

    // register callbacks
    glutDisplayFunc(renderScene);
    glutIdleFunc(renderScene);
    glutKeyboardFunc(ProcessNormalKeys);
    glutSpecialFunc(processSpecialKeys);

    init();

    // enter GLUT event processing cycle
    glutMainLoop();

    return 0;
}
