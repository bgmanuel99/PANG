#include <iostream>
#include <figure.h>
#include <ball.h>
#include <frame.h>
#include <jugador.h>
#include <disparo.h>
#include <thunderbolt.h>
#include <bufos.h>
#include <hexagon.h>
#include <comida.h>
#include <plataformas.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <fstream>

using namespace std;

//------------------------------------
// PRIMER NIVEL
//------------------------------------
Ball ball1{0.15, 0, 1.2, {0.0, 1.0, 0.0}, 0.8, -0.8, 0.8, -0.8, 0.15, 0.15, 0.15, 0.15, 0.1};
Ball ball2{0.13, 0, 0, {0.0, 1.0, 0.0}, 0.82, -0.82, 0.82, -0.82, 0.13, 0.13, 0.13, 0.13, 0.1};
Ball ball3{0.13, 0, 0, {0.0, 1.0, 0.0}, 0.82, -0.82, 0.82, -0.82, 0.13, 0.13, 0.13, 0.13, -0.1};
Ball ball4{0.09, 0, 0, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, -0.1};
Ball ball5{0.09, 0, 0, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, 0.1};
Ball ball6{0.09, 0, 0, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, -0.1};
Ball ball7{0.09, 0, 0, {0.0, 1.0, 0.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, 0.1};
Ball ball8{0.06, 0, 0, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball ball9{0.06, 0, 0, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball ball10{0.06, 0, 0, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball ball11{0.06, 0, 0, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball ball12{0.06, 0, 0, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball ball13{0.06, 0, 0, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball ball14{0.06, 0, 0, {0.0, 1.0, 0.0},0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball ball15{0.06, 0, 0, {0.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};

//-----------------------------------------
// SEGUNDO NIVEL
//-----------------------------------------
Ball nivel2Ball1{0.15, 0, 1.2, {0.0, 0.0, 1.0}, 0.8, -0.8, 0.8, -0.8, 0.15, 0.15, 0.15, 0.15, 0.1};
Ball nivel2Ball2{0.13, 0, 0, {0.0, 0.0, 1.0}, 0.82, -0.82, 0.82, -0.82, 0.13, 0.13, 0.13, 0.13, 0.1};
Ball nivel2Ball3{0.13, 0, 0, {0.0, 0.0, 1.0}, 0.82, -0.82, 0.82, -0.82, 0.13, 0.13, 0.13, 0.13, -0.1};
Ball nivel2Ball4{0.09, 0, 0, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, -0.1};
Ball nivel2Ball5{0.09, 0, 0, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, 0.1};
Ball nivel2Ball6{0.09, 0, 0, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, -0.1};
Ball nivel2Ball7{0.09, 0, 0, {0.0, 0.0, 1.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, 0.1};
Ball nivel2Ball8{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel2Ball9{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel2Ball10{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel2Ball11{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel2Ball12{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel2Ball13{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel2Ball14{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel2Ball15{0.06, 0, 0, {0.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};

//------------------------------------------
// TERCER NIVEL
//------------------------------------------
Ball nivel3Ball1{0.09, 0.8, 0, {1.0, 0.0, 1.0}, 0.85, -0.85, 0.8, -0.85, 0.09, 0.09, 0.09, 0.09, -0.1};//Morado
Ball nivel3Ball2{0.09, -0.8, 0, {1.0, 0.0, 1.0}, 0.85, -0.85, 0.82, -0.85, 0.09, 0.09, 0.09, 0.09, 0.1};//Morado
Ball nivel3Ball3{0.09, 0.0, 0, {1.0, 1.0, 0.0}, 0.85, -0.85, 0.82, -0.85, 0.09, 0.09, 0.09, 0.09, 0.1};//Amarillo
Ball nivel3Ball4{0.09, 0.8, 0, {1.0, 1.0, 0.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, -0.1};//Amarillo
Ball nivel3Ball5{0.09, -0.8, 0, {1.0, 1.0, 0.0}, 0.85, -0.85, 0.85, -0.85, 0.09, 0.09, 0.09, 0.09, 0.1};//Amarillo
Ball nivel3Ball6{0.06, 0, 0, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel3Ball7{0.06, 0, 0, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel3Ball8{0.06, 0, 0, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel3Ball9{0.06, 0, 0, {1.0, 0.0, 1.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel3Ball10{0.06, 0, 0, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel3Ball11{0.06, 0, 0, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel3Ball12{0.06, 0, 0, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel3Ball13{0.06, 0, 0, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};
Ball nivel3Ball14{0.06, 0, 0, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, 0.1};
Ball nivel3Ball15{0.06, 0, 0, {1.0, 1.0, 0.0}, 0.89, -0.89, 0.89, -0.89, 0.06, 0.06, 0.06, 0.06, -0.1};

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
Hexagon hexagonoGrande1{0, 1.2, {0.0, 1.0, 0.0}, 0.09, -0.01, -0.011, 0.84, -0.84, 0.84, -0.84};
Hexagon hexagonoGrande2{0, 1.2, {0.0, 1.0, 0.0}, 0.09, 0.01, -0.011, 0.84, -0.84, 0.84, -0.84};
Hexagon hexagono1{0, 0, {0.0, 1.0, 0.0}, 0.06, -0.009, 0.01, 0.88, -0.88, 0.88, -0.88};
Hexagon hexagono2{0, 0, {0.0, 1.0, 0.0}, 0.06, 0.009, 0.01, 0.88, -0.88, 0.88, -0.88};
Hexagon hexagono3{0, 0, {0.0, 1.0, 0.0}, 0.06, -0.009, 0.01, 0.88, -0.88, 0.88, -0.88};
Hexagon hexagono4{0, 0, {0.0, 1.0, 0.0}, 0.06, 0.009, 0.01, 0.88, -0.88, 0.88, -0.88};
Hexagon hexagono5{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01, 0.91, -0.91, 0.91, -0.91};
Hexagon hexagono6{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01, 0.91, -0.91, 0.91, -0.91};
Hexagon hexagono7{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01, 0.91, -0.91, 0.91, -0.91};
Hexagon hexagono8{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01, 0.91, -0.91, 0.91, -0.91};
Hexagon hexagono9{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01, 0.91, -0.91, 0.91, -0.91};
Hexagon hexagono10{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01, 0.91, -0.91, 0.91, -0.91};
Hexagon hexagono11{0, 0, {0.0, 1.0, 0.0}, 0.03, 0.006, 0.01, 0.91, -0.91, 0.91, -0.91};
Hexagon hexagono12{0, 0, {0.0, 1.0, 0.0}, 0.03, -0.006, 0.01, 0.91, -0.91, 0.91, -0.91};

//-------------------------------------------
// SEPTIMO, OCTAVO, NOVENO Y DECIMO NIVEL
//-------------------------------------------
//SEPTIMO NIVEL
Plataformas plataforma1_Nivel7{-0.2, 0.02, 0.2, 0.02, 0.2, -0.02, -0.2, -0.02, 0.6, 0.0, {0.0, 1.0, 0.0}, 0.2, 0.2, 0.02, 0.02};
Plataformas plataforma2_Nivel7{-0.2, 0.02, 0.2, 0.02, 0.2, -0.02, -0.2, -0.02, -0.6, 0.0, {0.0, 1.0, 0.0}, 0.2, 0.2, 0.02, 0.02};
//OCTAVO NIVEL
Plataformas plataforma1_Nivel8{-0.03, 0.03, 0.03, 0.03, 0.03, -0.03, -0.03, -0.03, 0, 0.3, {0.0, 1.0, 0.0}, 0.03, 0.03, 0.03, 0.03};
Plataformas plataforma2_Nivel8{-0.03, 0.03, 0.03, 0.03, 0.03, -0.03, -0.03, -0.03, 0, -0.3, {0.0, 1.0, 0.0}, 0.03, 0.03, 0.03, 0.03};
Plataformas plataforma3_Nivel8{-0.03, 0.03, 0.03, 0.03, 0.03, -0.03, -0.03, -0.03, 0.6, 0, {0.0, 1.0, 0.0}, 0.03, 0.03, 0.03, 0.03};
Plataformas plataforma4_Nivel8{-0.03, 0.03, 0.03, 0.03, 0.03, -0.03, -0.03, -0.03, -0.6, 0, {0.0, 1.0, 0.0}, 0.03, 0.03, 0.03, 0.03};
/*
//NOVENO NIVEL
Plataformas plataforma1_Nivel9{};
Plataformas plataforma2_Nivel9{};
//DECIMO NIVEL
Plataformas plataforma1_Nivel10{};
Plataformas plataforma2_Nivel10{};
Plataformas plataforma3_Nivel10{};
*/
//-------------------------------------------
// BUFOS PARA EL JUGADOR
//-------------------------------------------
//BUFOS DE LAS PELOTAS DEL PRIMER NIVEL
Bufos bufoInvulnerabilidad1{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo1{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};//las variables xy que paso como parametro son las coordenadas para el cuadrado
Bufos bufoInvulnerabilidad2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};
Bufos bufoInvulnerabilidad3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};
//BUFOS DE LAS PELOTAS DEL SEGUNDO NIVEL
Bufos bufoInvulnerabilidad1_Nivel2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo1_Nivel2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};//las variables xy que paso como parametro son las coordenadas para el cuadrado
Bufos bufoInvulnerabilidad2_Nivel2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo2_Nivel2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};
Bufos bufoInvulnerabilidad3_Nivel2{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo3_Nivel2{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};
//BUFOS DE LAS PELOTAS DEL TERCER NIVEL
Bufos bufoInvulnerabilidad1_Nivel3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo1_Nivel3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};//las variables xy que paso como parametro son las coordenadas para el cuadrado
Bufos bufoInvulnerabilidad2_Nivel3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo2_Nivel3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};
Bufos bufoInvulnerabilidad3_Nivel3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo3_Nivel3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};
Bufos bufoInvulnerabilidad4_Nivel3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo4_Nivel3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};
Bufos bufoInvulnerabilidad5_Nivel3{0.017, {0.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, 0, 0, -0.93};
Bufos bufoDobleDisparo5_Nivel3{0.01, {0.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, 0, 0, -0.93};

//-------------------------------------------
// COMIDAS
//-------------------------------------------
//COMIDAS PARA LOS NIVELES DEL 1-6
Comida manzana_Nivel1{0, 0.8, 0, 0, {1.0, 0.0, 0.0}, {1.0, 1.0, 1.0}, {0.0, 1.0, 0.0}, 0.01};
Comida manzana_Nivel4{0, 0.8, 0, 0, {1.0, 0.0, 0.0}, {1.0, 1.0, 1.0}, {0.0, 1.0, 0.0}, 0.01};
Comida manzana_Nivel6{0, 0.8, 0, 0, {1.0, 0.0, 0.0}, {1.0, 1.0, 1.0}, {0.0, 1.0, 0.0}, 0.01};
Comida naranja_Nivel2{0, 0.8, 0.03, 0.007, {1.0, 0.5, 0.0}, {0.0, 1.0, 0.0}, {1.0, 1.0, 1.0}, 0.01};
Comida naranja_Nivel4{0.7, 0.8, 0.03, 0.007, {1.0, 0.5, 0.0}, {0.0, 1.0, 0.0}, {1.0, 1.0, 1.0}, 0.01};
Comida naranja_Nivel5{0.7, 0.8, 0.03, 0.007, {1.0, 0.5, 0.0}, {0.0, 1.0, 0.0}, {1.0, 1.0, 1.0}, 0.01};
Comida naranja_Nivel6{0.7, 0.8, 0.03, 0.007, {1.0, 0.5, 0.0}, {0.0, 1.0, 0.0}, {1.0, 1.0, 1.0}, 0.01};
Comida fresa_Nivel3{0, 0.8, 0.002, 0, {1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 0.0}, 0.01};
Comida fresa_Nivel5{-0.7, 0.8, 0.002, 0, {1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 0.0}, 0.01};
//COMIDAS PARA LOS NIVELES DEL 7-10
Comida hamburguesa_Nivel7{0, 0.8, 0.03, 0, {0.9, 1.0, 0.0}, {1.0, 0.0, 0.0}, {0.4, 0.0, 0.0}, 0.01};
Comida hamburguesa_Nivel9{0, 0.8, 0.03, 0, {0.9, 1.0, 0.0}, {1.0, 0.0, 0.0}, {0.4, 0.0, 0.0}, 0.01};
Comida hamburguesa_Nivel10{0, 0.8, 0.03, 0, {0.9, 1.0, 0.0}, {1.0, 0.0, 0.0}, {0.4, 0.0, 0.0}, 0.01};
Comida pizza_Nivel7{0.5, 0.8, 0.03, 0.003, {0.9, 1.0, 0.0}, {1.0, 1.0, 1.0}, {0.9, 0.0, 0.0}, 0.01};
Comida pizza_Nivel8{0.0, 0.8, 0.03, 0.003, {0.9, 1.0, 0.0}, {1.0, 1.0, 1.0}, {0.9, 0.0, 0.0}, 0.01};
Comida pizza_Nivel10{-0.5, 0.8, 0.03, 0.003, {0.9, 1.0, 0.0}, {1.0, 1.0, 1.0}, {0.9, 0.0, 0.0}, 0.01};

//-------------------------------------------
// VIDAS EXTRAS
//-------------------------------------------
Bufos vidaExtra_Nivel1{0.015, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, -0.6, 0.8, -0.92};
Bufos vidaExtra_Nivel2{0.015, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, 0.6, 0.8, -0.92};
Bufos vidaExtra_Nivel3{0.015, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, 0.3, 0.8, -0.92};
Bufos vidaExtra_Nivel4{0.015, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, -0.3, 0.8, -0.92};
Bufos vidaExtra_Nivel5{0.015, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, -0.6, 0.8, -0.92};
Bufos vidaExtra_Nivel6{0.015, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, 0.6, 0.8, -0.92};

//-------------------------------------------
// RELOJES
//-------------------------------------------
Bufos reloj_Nivel2{0, {0.0, 1.0, 0.0}, {0.5, 1.0, 1.0}, 0.4, 0.8, -0.905};
Bufos reloj_Nivel3{0, {0.0, 1.0, 0.0}, {0.5, 1.0, 1.0}, 0.2, 0.8, -0.905};
Bufos reloj_Nivel4{0, {0.0, 1.0, 0.0}, {0.5, 1.0, 1.0}, -0.5, 0.8, -0.905};

Jugador jugador1{-0.89, 0.0, 0.06, -0.06, -0.06, 0.06, -0.06, {1.0, 0.0, 0.0}};
vector <Figure*> disparoJugador;

//VARIABLES PARA LA MAQUINA
vector <Figure*> disparoMaquina;

//VARIABLES PARA LA ALTURA MAXIMA DE CADA PELOTA
int reboteBall1{0};

//VARIABLES PARA LOS FRAMES Y LA BARRA DE NIVEL DEL PANIC MODE
vector <Figure*> frames;//frames para delimitar el espacio de juego
vector <Figure*> framesNivel;//frames para la barra de nivel del panic mode
Frame bottomFrame_PanicMode{0, -1.0, -1.0, 0, 1.0, 0, 1.0, -0.2, -1.0, -0.2, {0.0, 0.0, 0.0}};//frame para la parte de abajo para el Panic Mode para que se vea de fondo
Frame primerColor_BarraDeNivel{-0.29, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame segundoColor_BarraDeNivel{-0.244, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame tercerColor_BarraDeNivel{-0.199, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame cuartoColor_BarraDeNivel{-0.154, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame quintoColor_BarraDeNivel{-0.109, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame sextoColor_BarraDeNivel{-0.064, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame septimoColor_BarraDeNivel{-0.019, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame octavoColor_BarraDeNivel{0.026, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame novenoColor_BarraDeNivel{0.071, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame decimoColor_BarraDeNivel{0.116, -1.115, -0.03, 0.012, 0.015, 0.012, 0.015, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame decimoPrimerColor_BarraDeNivel{0.161, -1.115, -0.03, 0.012, 0.01, 0.012, 0.01, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame decimoSegundoColor_BarraDeNivel{0.2, -1.115, -0.03, 0.012, 0.01, 0.012, 0.01, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame decimoTercerColor_BarraDeNivel{0.241, -1.115, -0.03, 0.012, 0.01, 0.012, 0.01, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame decimoCuartoColor_BarraDeNivel{0.281, -1.115, -0.03, 0.012, 0.01, 0.012, 0.01, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
Frame decimoQuintoColor_BarraDeNivel{0.321, -1.115, -0.03, 0.012, 0.01, 0.012, 0.01, -0.05, -0.03, -0.05, {0.0, 0.0, 0.0}};
int dibujadoBarraNivel{0};//variable para el dibujado de la barra de nivel
//contadores para el dibujado de la barra de nivel con el primer nivel de bolas
int contador_PrimeraBarraNivel{0}, contador_SegundaBarraNivel{0}, contador_TerceraBarraNivel{0};
int contador_CuartaBarraNivel{0}, contador_QuintaBarraNivel{0}, contador_SextaBarraNivel{0}, contador_SeptimaBarraNivel{0};
int contador_OctavaBarraNivel{0}, contador_NovenaBarraNivel{0}, contador_DecimaBarraNivel{0};
int contador_DecimaPrimeraBarraNivel{0}, contador_DecimaSegundaBarraNivel{0}, contador_DecimaTerceraBarraNivel{0};
int contador_DecimaCuartaBarraNivel{0}, contador_DecimaQuintaBarraNivel{0};
//contadores para el dibujado de la barra de nivel con el segundo nivel de bolas
int contador_PrimeraBarraNivel_Nivel2{0}, contador_SegundaBarraNivel_Nivel2{0}, contador_TerceraBarraNivel_Nivel2{0};
int contador_CuartaBarraNivel_Nivel2{0}, contador_QuintaBarraNivel_Nivel2{0}, contador_SextaBarraNivel_Nivel2{0};
int contador_SeptimaBarraNivel_Nivel2{0}, contador_OctavaBarraNivel_Nivel2{0}, contador_NovenaBarraNivel_Nivel2{0};
int contador_DecimaBarraNivel_Nivel2{0}, contador_DecimaPrimeraBarraNivel_Nivel2{0}, contador_DecimaSegundaBarraNivel_Nivel2{0};
int contador_DecimaTerceraBarraNivel_Nivel2{0}, contador_DecimaCuartaBarraNivel_Nivel2{0}, contador_DecimaQuintaBarraNivel_Nivel2{0};
//contadores para el dibujado de la barra de nivel con los hexagonos
int contador_PrimeraBarraNivel_HexagonoGrande1{0}, contador_SegundaBarraNivel_HexagonoGrande2{0};
int contador_PrimeraBarraNivel_Hexagono{0}, contador_SegundaBarraNivel_Hexagono{0}, contador_TerceraBarraNivel_Hexagono{0};
int contador_CuartaBarraNivel_Hexagono{0}, contador_QuintaBarraNivel_Hexagono{0}, contador_sextaBarraNivel_Hexagono{0};
int contador_SeptimaBarraNivel_Hexagono{0}, contador_OctavaBarraNivel_Hexagono{0}, contador_NovenaBarraNivel_Hexagono{0};
int contador_DecimaBarraNivel_Hexagono{0}, contador_DecimaPrimeraBarraNivel_Hexagono{0}, contador_DecimaSegundaBarraNivel_Hexagono{0};
//variables para que las pelotas, del panic mode, al volver a dibujarse, aparezcan en una posicion random del eje X
float numeroRandom_EjeX_Ball1{0}, numeroRandom_Eje_Positivo_Negativo{0};
float numeroRandom_EjeX_Ball2{0}, numeroRandom_Eje_Positivo_Negativo_Nivel2{0};
float numeroRandom_EjeX_HexagonoGrande1{0},numeroRandom_EjeX_HexagonoGrande2{0};
float numeroRandom_Eje_Positivo_Negativo_HexagonoGrande1{0}, numeroRandom_Eje_Positivo_Negativo_HexagonoGrande2{0};

//VARIABLES PARA EL FRAME DE LA PARTE DE ABAJO DE LOS DIFERENTES MUNDOS
Frame bottomFrameTourMode{0, -1.0, -1.0, 0, 1.0, 0, 1.0, -0.2, -1.0, -0.2, {0.0, 0.0, 0.0}};
char mundo1BottomFrame[50];//variable para sacar por pantalla la string del mundo 1-1 del tour mode en el marco de abajo
char mundo2BottomFrame[50];//variable para sacar por pantalla la string del mundo 1-2 del tour mode en el marco de abajo
char mundo3BottomFrame[50];//variable para sacar por pantalla la string del mundo 1-3 del tour mode en el marco de abajo
char mundo4BottomFrame[50];//variable para sacar por pantalla la string del mundo 1-4 del tour mode en el marco de abajo
char mundo5BottomFrame[50];//variable para sacar por pantalla la string del mundo 1-5 del tour mode en el marco de abajo
char mundo6BottomFrame[50];//variable para sacar por pantalla la string del mundo 2-1 del tour mode en el marco de abajo

//VARIABLES DEL MENU DE INICIO DEL JUEGO
//variables frame para el marco del boton de inicio del juego
Frame marcoInicioJuego1{0.0, 0.2, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoInicioJuego2{0.0, 0.1, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoInicioJuego3{-0.01, 0.19, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoInicioJuego4{0.64, 0.19, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de las dificultades
Frame marcoDificultades1{0.0, 0.0, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultades2{0.0, -0.1, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultades3{-0.01, -0.01, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoDificultades4{0.64, -0.01, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de las versiones
Frame marcoVersiones1{0.0, -0.2, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVersiones2{0.0, -0.3, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVersiones3{-0.01, -0.21, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoVersiones4{0.64, -0.21, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de los controles del juego
Frame marcoControles1{0.0, -0.4, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoControles2{0.0, -0.5, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoControles3{-0.01, -0.41, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoControles4{0.64, -0.41, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de la salida del juego
Frame marcoSalidaDelJuego1{0.0, -0.6, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoSalidaDelJuego2{0.0, -0.7, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoSalidaDelJuego3{-0.01, -0.61, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoSalidaDelJuego4{0.64, -0.61, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de vuelta atras en la ventana de dificultades
Frame marcoAtrasVersiones1{0.75, -1.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasVersiones2{0.75, -1.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasVersiones3{0.605, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoAtrasVersiones4{0.895, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de vuelta atras en la ventana de controles
Frame marcoAtrasControles1{0.75, -1.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasControles2{0.75, -1.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasControles3{0.605, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoAtrasControles4{0.895, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de vuelta atras en la ventana de versiones
Frame marcoAtrasDificultad1{0.75, -1.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasDificultad2{0.75, -1.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasDificultad3{0.605, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoAtrasDificultad4{0.895, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de dificultad facil de la ventana de dificultad
Frame marcoDificultadFacil1{-0.6, 0.0, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultadFacil2{-0.6, -0.1, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultadFacil3{-0.845, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoDificultadFacil4{-0.355, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de dificultad media de la ventana de dificultad
Frame marcoDificultadMedia1{0.0, 0.0, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultadMedia2{0.0, -0.1, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultadMedia3{-0.245, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoDificultadMedia4{0.245, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de dificultad dificil de la ventana de dificultad
Frame marcoDificultadDificil1{0.6, 0.0, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultadDificil2{0.6, -0.1, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoDificultadDificil3{0.845, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoDificultadDificil4{0.355, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del tipo de juego Tour Mode
Frame marcoTourMode1{0.0, 0.2, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoTourMode2{0.0, 0.1, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoTourMode3{-0.245, 0.15, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoTourMode4{0.245, 0.15, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//Variables frame para el marco del tipo de juego Panic Mode
Frame marcoPanicMode1{0.0, 0.0, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoPanicMode2{0.0, -0.1, -0.25, 0.005, 0.25, 0.005, 0.25, -0.005, -0.25, -0.005, {1.0, 0.5, 0.0}};
Frame marcoPanicMode3{-0.245, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoPanicMode4{0.245, -0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de vuelta atras en la ventana de eleccion del tipo de juego
Frame marcoAtrasTipoJuego1{0.75, -1.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasTipoJuego2{0.75, -1.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasTipoJuego3{0.605, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoAtrasTipoJuego4{0.895, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el Mundo 1-1
Frame marcoMundo11{-0.4, 0.3, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo12{-0.4, 0.2, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo13{-0.546, 0.25, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoMundo14{-0.254, 0.25, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el Mundo 1-2
Frame marcoMundo21{0.0, 0.3, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo22{0.0, 0.2, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo23{-0.146, 0.25, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoMundo24{0.146, 0.25, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el Mundo 1-3
Frame marcoMundo31{0.4, 0.3, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo32{0.4, 0.2, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo33{0.254, 0.25, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoMundo34{0.546, 0.25, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el Mundo 1-4
Frame marcoMundo41{-0.4, 0.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo42{-0.4, 0.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo43{-0.546, 0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoMundo44{-0.254, 0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el Mundo 1-5
Frame marcoMundo51{0.0, 0.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo52{0.0, 0.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo53{-0.146, 0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoMundo54{0.146, 0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el Mundo 2-1
Frame marcoMundo61{0.4, 0.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo62{0.4, 0.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoMundo63{0.254, 0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoMundo64{0.546, 0.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para el marco del boton de vuelta atras en la ventana de eleccion del tipo de juego
Frame marcoAtrasTourMode1{0.75, -1.0, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasTourMode2{0.75, -1.1, -0.15, 0.005, 0.15, 0.005, 0.15, -0.005, -0.15, -0.005, {1.0, 0.5, 0.0}};
Frame marcoAtrasTourMode3{0.605, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
Frame marcoAtrasTourMode4{0.895, -1.05, -0.005, 0.05, 0.005, 0.05, 0.005, -0.05, -0.005, -0.05, {1.0, 0.5, 0.0}};
//variables frame para la linea que separa el cabecero y las explicaciones de los botones, en la ventana de controles
Frame lineaSeparacion{0.0, 0.65, -0.8, 0.01, 0.8, 0.01, 0.8, 0.0, -0.8, 0.0, {0.0, 0.0, 0.0}};
//variables frame para el recuadro dentro de los marcos de los botones del menu de inicio
Frame recuadroInicioJuego{0.0, 0.15, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
Frame recuadroDificultades{0.0, -0.05, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
Frame recuadroVersiones{0.0, -0.25, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
Frame recuadroControles{0.0, -0.45, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
Frame recuadroSalidaDelJuego{0.0, -0.65, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
Frame recuadroAtrasVersiones{0.75, -1.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroAtrasControles{0.75, -1.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroAtrasDificultad{0.75, -1.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroDificultadFacil{-0.6, -0.05, -0.25, 0.05, 0.25, 0.05, 0.25, -0.05, -0.25, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroDificultadMedia{0.0, -0.05, -0.25, 0.05, 0.25, 0.05, 0.25, -0.05, -0.25, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroDificultadDificil{0.6, -0.05, -0.25, 0.05, 0.25, 0.05, 0.25, -0.05, -0.25, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroTourMode{0.0, 0.15, -0.25, 0.05, 0.25, 0.05, 0.25, -0.05, -0.25, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroPanicMode{0.0, -0.05, -0.25, 0.05, 0.25, 0.05, 0.25, -0.05, -0.25, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroAtrasTipoJuego{0.75, -1.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroMundo1{-0.4, 0.25, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroMundo2{0.0, 0.25, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroMundo3{0.4, 0.25, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroMundo4{-0.4, 0.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroMundo5{0.0, 0.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroMundo6{0.4, 0.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};
Frame recuadroAtrasTourMode{0.75, -1.05, -0.15, 0.05, 0.15, 0.05, 0.15, -0.05, -0.15, -0.05, {1.0, 0.7, 0.0}};

char versionActual[50];//variable para sacar por pantalla la version actual del juego
char inicioDelJuego[50];//variable para sacar por pantalla la string de inicio del juego
char eleccionDificultad[50];//variable para sacar por pantalla la string de eleccion de dificultad
char versiones[50];//variable para sacar por pantalla la string de las versiones
char controles[50];//variable para sacar por pantalla la string de los controles
char salidaDelJuego[50];//variable para sacar por pantalla la string de la salida del juego
bool inicioJuego = false;//variable para que comience el juego del tour o panic mode
bool inicioMenu = true;//variable para que aparezca o desaparezca el menu de inicio del juego
bool Explicacion_Versiones = false;//variable para que aparezcan las explicaciones de las versiones
char explicacionVersiones1[50], explicacionVersiones2[50], explicacionVersiones3[50], explicacionVersiones4[50], explicacionVersiones5[50];//-------------------------------------------------------------------------
char explicacionVersiones6[50], explicacionVersiones7[50], explicacionVersiones8[50], explicacionVersiones9[50], explicacionVersiones10[50];
char explicacionVersiones11[100], explicacionVersiones12[50], explicacionVersiones13[50], explicacionVersiones14[50], explicacionVersiones15[100];
char explicacionVersiones16[100], explicacionVersiones17[50], explicacionVersiones18[50], explicacionVersiones19[50], explicacionVersiones20[50];//variables para sacar por pantalla las explicaciones de las versiones
char explicacionVersiones21[50], explicacionVersiones22[50], explicacionVersiones23[50], explicacionVersiones24[50], explicacionVersiones25[50];
char explicacionVersiones26[50], explicacionVersiones27[50], explicacionVersiones28[100], explicacionVersiones29[50], explicacionVersiones30[50];//--------------------------------------------------------------------
bool Explicacion_controles = false;//variable para que aparezcan la explicacion de los controles del juego
char explicacionControles1[50], explicacionControles2[50], explicacionControles3[50], explicacionControles4[50];
char explicacionControles5[50], explicacionControles6[50], explicacionControles7[50], explicacionControles8[50];
bool dificultades = false;//variable para que aparezcan las definiciones de las dificultades y para poder cambiarla
char dificultad1[50], dificultad2[50], dificultad3[50], dificultad4[100], dificultad5[100], dificultad6[50], dificultad7[50];//variables para sacar por pantalla las explicaciones de las dificultades
char dificultad8[50], dificultad9[100], dificultad10[100], dificultad11[50], dificultad12[50], dificultad13[50],dificultad14[150],dificultad15[100];//variables para sacar por pantalla las explicaciones de las dificultades
char backVersiones[50];//variable para sacar por pantalla la string del boton para ir atras desde la ventana de versiones
char backControles[50];//variable para sacar por pantalla la string del boton para ir atras desde la ventana de controles
char backDificultades[50];//variable para sacar por pantalla la string del boton para ir atras desde la ventana de dificultades
char dificultadFacil[50];//variable para sacar por pantalla la string del boton para cambiar la dificultad ha facil en la ventana de dificultades
char dificultadMedia[50];//variable para sacar por pantalla la string del boton para cambiar la dificultad ha media en la ventana de dificultades
char dificultadDificil[50];//variable para sacar por pantalla la string del boton para cambiar la dificultad ha dificil en la ventana de dificultades
char dificultadActual[50];//variable para sacar por pantalla la string que dice la dificultad actual del juego
bool tipoDeJuego = false;//variable para que salga la ventana para la eleccion del tipo de juego
char tourMode[50];//variable para sacar por pantalla la string de tour mode
char panicMode[50];//variable para sacar por pantalla la string de panic mode
char backTipoJuego[50];//variable para sacar por pantalla la string de atras de la ventana de eleccion del tipo de juego
bool tipoJuegoTourMode = false;//variable para que salga la ventana para la eleccion de nivel del Tour Mode
char Mundo11[50];//variable para sacar por pantalla la string del mundo 1-1
char Mundo12[50];//variable para sacar por pantalla la string del mundo 1-2
char Mundo13[50];//variable para sacar por pantalla la string del mundo 1-3
char Mundo14[50];//variable para sacar por pantalla la string del mundo 1-4
char Mundo15[50];//variable para sacar por pantalla la string del mundo 1-5
char Mundo21[50];//variable para sacar por pantalla la string del mundo 2-1
char backTourMode[50];//variable para sacar por pantalla la string de atras de la ventana de Tour Mode
int contadorButtons = 0;//variable contador para dar un timepo entre la pulsacion de botones en el menu de inicio
bool beginContadorButtons = false;//variable para que comience el contador de los botones del menu

//VARIABLES PARA CUANDO SE TERMINA UN NIVEL
//variables para el marco del boton de siguiente nivel desde el mundo 1-1
Frame marcoProximoNivel1{0.45, -0.4, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoProximoNivel2{0.45, -0.5, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoProximoNivel3{0.441, -0.407, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoProximoNivel4{1.091, -0.407, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables para el marco del boton de volver a jugar al panic mode
Frame marcoVolverAJugarAPanicMode1{0.45, -0.4, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVolverAJugarAPanicMode2{0.45, -0.5, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVolverAJugarAPanicMode3{0.441, -0.407, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoVolverAJugarAPanicMode4{1.091, -0.407, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables frame para el recuadro dentro de los marcos de los botones de siguiente nivel desde los diferentes mundos y para el boton de volver a jugar al panic mode
Frame recuadroProximoNivel{0.45, -0.45, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
Frame recuadroVolverAJugarAPanicMode{0.45, -0.45, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
Frame recuadroVueltaMenuInicial{-0.45, -0.45, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
//variables para sacar por pantalla las strings de los botones de siguiente nivel desde los diferentes mundos y de la vuelta al menu inicial
char siguienteNivel_Mundo1[50], siguienteNivel_Mundo2[50], siguienteNivel_Mundo3[50], siguienteNivel_Mundo4[50], siguienteNivel_Mundo5[50], siguienteNivel_Mundo6[50];
char volverMenuInicial[50];
char VolverPanicMode[50];
//variables para el boton de vuelta al menu inicical cuando se termina un nivel
Frame marcoVueltaMenuInicial1{-0.45, -0.4, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVueltaMenuInicial2{-0.45, -0.5, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVueltaMenuInicial3{0.181, -0.407, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoVueltaMenuInicial4{-0.451, -0.407, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variables para sacar por pantalla la puntuacion de los diferentes niveles y del panic mode
char puntuacion1Nivel1[50], puntuacion2Nivel1[50], puntuacion3Nivel1[50], puntuacion4Nivel1[50], puntuacion5Nivel1[50], puntuacion6Nivel1[50], puntuacion7Nivel1[50], puntuacion8Nivel1[100], puntuacion9Nivel1[50], puntuacion10Nivel1[50], puntuacion11Nivel1[50], puntuacion12Nivel1[50];
char puntuacion1Nivel2[50], puntuacion2Nivel2[50], puntuacion3Nivel2[50], puntuacion4Nivel2[50], puntuacion5Nivel2[50], puntuacion6Nivel2[50], puntuacion7Nivel2[50], puntuacion8Nivel2[100], puntuacion9Nivel2[50], puntuacion10Nivel2[50], puntuacion11Nivel2[50], puntuacion12Nivel2[50];
char puntuacion1Nivel3[50], puntuacion2Nivel3[50], puntuacion3Nivel3[50], puntuacion4Nivel3[50], puntuacion5Nivel3[50], puntuacion6Nivel3[50], puntuacion7Nivel3[50], puntuacion8Nivel3[100], puntuacion9Nivel3[50], puntuacion10Nivel3[50], puntuacion11Nivel3[50], puntuacion12Nivel3[50];
char puntuacion1Nivel4[50], puntuacion2Nivel4[50], puntuacion3Nivel4[50], puntuacion4Nivel4[50], puntuacion5Nivel4[50], puntuacion6Nivel4[50], puntuacion7Nivel4[50], puntuacion8Nivel4[100], puntuacion9Nivel4[50], puntuacion10Nivel4[50], puntuacion11Nivel4[50], puntuacion12Nivel4[50];
char puntuacion1Nivel5[50], puntuacion2Nivel5[50], puntuacion3Nivel5[50], puntuacion4Nivel5[50], puntuacion5Nivel5[50], puntuacion6Nivel5[50], puntuacion7Nivel5[50], puntuacion8Nivel5[100], puntuacion9Nivel5[50], puntuacion10Nivel5[50], puntuacion11Nivel5[50], puntuacion12Nivel5[50];
char puntuacion1Nivel6[50], puntuacion2Nivel6[50], puntuacion3Nivel6[50], puntuacion4Nivel6[50], puntuacion5Nivel6[50], puntuacion6Nivel6[50], puntuacion7Nivel6[50], puntuacion8Nivel6[100], puntuacion9Nivel6[50], puntuacion10Nivel6[50], puntuacion11Nivel6[50], puntuacion12Nivel6[50];
char puntuacion1PanicMode[50], puntuacion2PanicMode[50], puntuacion3PanicMode[50], puntuacion4PanicMode[50], puntuacion5PanicMode[50], puntuacion6PanicMode[50], puntuacion7PanicMode[50], puntuacion8PanicMode[100], puntuacion9PanicMode[50], puntuacion10PanicMode[50], puntuacion11PanicMode[50], puntuacion12PanicMode[50];
//variables contador para la puntuacion por dificultad al finalizar un nivel y el panic mode
int contador_DificultadFacil_Nivel1 = 0, contador_DificultadMedia_Nivel1 = 0, contador_DificultadDificil_Nivel1 = 0;
int contador_DificultadFacil_Nivel2 = 0, contador_DificultadMedia_Nivel2 = 0, contador_DificultadDificil_Nivel2 = 0;
int contador_DificultadFacil_Nivel3 = 0, contador_DificultadMedia_Nivel3 = 0, contador_DificultadDificil_Nivel3 = 0;
int contador_DificultadFacil_Nivel4 = 0, contador_DificultadMedia_Nivel4 = 0, contador_DificultadDificil_Nivel4 = 0;
int contador_DificultadFacil_Nivel5 = 0, contador_DificultadMedia_Nivel5 = 0, contador_DificultadDificil_Nivel5 = 0;
int contador_DificultadFacil_Nivel6 = 0, contador_DificultadMedia_Nivel6 = 0, contador_DificultadDificil_Nivel6 = 0;
int contador_DificultadFacil_PanicMode = 0, contador_DificultadMedia_PanicMode = 0, contador_DificultadDificil_PanicMode = 0;
//variables contador para la puntuacion por vidas al finalizar un nivel y el panic mode
int contador_VidasMayorIgualTres_Nivel1 = 0, contador_VidasIgualDos_Nivel1 = 0, contador_VidasIgualUno_Nivel1 = 0, contador_VidasIgualCero_Nivel1 = 0;
int contador_VidasMayorIgualTres_Nivel2 = 0, contador_VidasIgualDos_Nivel2 = 0, contador_VidasIgualUno_Nivel2 = 0, contador_VidasIgualCero_Nivel2 = 0;
int contador_VidasMayorIgualTres_Nivel3 = 0, contador_VidasIgualDos_Nivel3 = 0, contador_VidasIgualUno_Nivel3 = 0, contador_VidasIgualCero_Nivel3 = 0;
int contador_VidasMayorIgualTres_Nivel4 = 0, contador_VidasIgualDos_Nivel4 = 0, contador_VidasIgualUno_Nivel4 = 0, contador_VidasIgualCero_Nivel4 = 0;
int contador_VidasMayorIgualTres_Nivel5 = 0, contador_VidasIgualDos_Nivel5 = 0, contador_VidasIgualUno_Nivel5 = 0, contador_VidasIgualCero_Nivel5 = 0;
int contador_VidasMayorIgualTres_Nivel6 = 0, contador_VidasIgualDos_Nivel6 = 0, contador_VidasIgualUno_Nivel6 = 0, contador_VidasIgualCero_Nivel6 = 0;
int contador_VidasMayorIgualTres_PanicMode = 0, contador_VidasIgualDos_PanicMode = 0, contador_VidasIgualUno_PanicMode = 0, contador_VidasIgualCero_PanicMode = 0;
//variables booleanas para saber cuando se ha terminado un nivel y el panic mode
bool nivel1Terminado = false;
bool nivel2Terminado = false;
bool nivel3Terminado = false;
bool nivel4Terminado = false;
bool nivel5Terminado = false;
bool nivel6Terminado = false;
bool panicModeTerminado = false;
bool botonVueltaMenuInicial = false;

//VARIABLES FRAME PARA CUANDO SE PIERDEN TODAS LAS VIDAS
//variables para el marco de vuelta al menu inicial
Frame marcoVueltaMenuInicialGameOver1{0, 0.1, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVueltaMenuInicialGameOver2{0, 0, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {1.0, 0.5, 0.0}};
Frame marcoVueltaMenuInicialGameOver3{0.63, 0.09, -0.31, 0.005, -0.30, 0.005, -0.30, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
Frame marcoVueltaMenuInicialGameOver4{0, 0.09, -0.31, 0.005, -0.32, 0.005, -0.32, -0.09, -0.31, -0.09, {1.0, 0.5, 0.0}};
//variable frame para el recuadro de dentro del marco del boton de vuelta al menu inicial
Frame recuadroVueltaMenuInicialJuegoTerminado{0, 0.05, -0.31, 0.045, 0.32, 0.045, 0.32, -0.045, -0.31, -0.045, {1.0, 0.7, 0.0}};
char gameOver[50];//variable para sacar por pantalla la string de game over para cuando se pierde la partida
bool juegoPerdido = false;//variable booleana para que el programa sepa cuando sacar por pantalla la string de game over y el boton de vuelta al menu inicial
char backMenuInicial[50];//variable para sacar por pantalla la string del boton de vuelta al menu inicial desde la ventana de game over

//VECTOR QUE CONTIENE LAS VARIABLES PARA LOS RAYOS DEL NIVEL 5
vector <Figure*> thunderBolt;

//ARRAYS INICIALIZADOS CON DIFERENTES VALORES QUE REPRESENTAN COLORES DIFERENTES
array <float,3> color = {0.5, 1.0, 1.0};// color cyan
array <float,3> color1 = {0.0, 0.0, 1.0};// color azul
array <float,3> color2 = {1.0, 1.0, 1.0};//color blanco

//VARIABLES PARA LOS CONTADORES
int i{0}, i1{0}, i2{0}, i3{0}, i4{0}, i5{0}, i6{0}, ig{0};//variables para los contadores de las pelotas del primer nivel
int in2b1{0}, in2{0}, i1n2{0}, i2n2{0}, i3n2{0}, i4n2{0}, i5n2{0}, i6n2{0}, in2g{0};//variables para los contadores de las pelotas del segundo nivel
int in3b1{0}, in3b2{0}, in3{0}, i1n3{0}, i2n3{0}, i3n3{0}, i4n3{0}, in3g{0};//variables para los contadores de las pelotas del tercer nivel
int in4{0}, in4g{0};
int in5{0}, i1n5{0}, in5g{0};
int contador_hexagono1{0}, contador_hexagono2{0}, contador_hexagono3{0}, contador_hexagono4{0};
int contador_nivel6_hexagonoGrande1{0}, contador_nivel6_hexagonoGrande2{0};
int contador_nivel_6_Win{0};
int contador_nivel_8_Win{0};
int vidas{3}, vidaAnterior{3}, tiempoMuerto{0};
int contador_Manzana_Nivel1{0}, contador_Manzana_Nivel4{0}, contador_Manzana_Nivel6{0};
int contador_Naranja_Nivel2{0}, contador_Naranja_Nivel4{0}, contador_Naranja_Nivel5{0}, contador_Naranja_Nivel6{0};
int contador_Fresa_Nivel3{0}, contador_Fresa_Nivel5{0};
int contador_VidaExtra_Nivel1{0}, contador_VidaExtra_Nivel2{0}, contador_VidaExtra_Nivel3{0}, contador_VidaExtra_Nivel4{0}, contador_VidaExtra_Nivel5{0}, contador_VidaExtra_Nivel6{0};//contadores para los corazones que te dan las vidas extra
int contador_PanicModeGanado{0};//contador para retardar un poco la salida del juego cuando se gana el modo de juego Panic Mode
int contador_Traslacion_PrimeraBola{0};//variable contador para la salida de la primera bola del nivel 1
int contador_Traslacion_PrimeraBola_Nivel2{0};//varibale para la salida de la primera bola del nivel 2
int contador_Traslacion_HexagonoGrande1{0}, contador_Traslacion_HexagonoGrande2{0};//variable para la salida de los hexagonos grandes
int contador_SalidaBall1{0};//variable contador para dar un tiempo de espera para poder disparar a la pelota, hasta que la primera pelota del primer nivel termine su traslacion por el marco
int contador_SalidaBall2{0};//variable contador para dar un tiempo de espera para poder disparar a la pelota, hasta que la primera pelota del segundo nivel termine su traslacion por el marco
int contador_SalidaHexagonoGrande1{0}, contador_SalidaHexagonoGrande2{0};//variable contador para dar un tiempo de espera para poder disparar al hexagono, hasta que el hexagono termine su traslacion por el marco
int contador_TiempoEspera_BallNivel2{0};//variable contador para dar un tiempo entre que sale las pelotas del segundo nivel hasta que vuelven a aparecer
bool aparece_BallNivel2 = false;//booleano para que se empiecen a dibujar las bolas del segundo nivel para el panic mode
int contador_TiempoEspera_HexagonoGrande1{0}, contador_TiempoEspera_HexagonoGrande2{0};//variables contador para dar un tiempo entre que salen los hexagonos hasta que vuelven a salir
bool aparece_HexagonoGrande1 = false;//booleano para que empiece a dibujar el primer hexagono grande para el panic mode
bool aparece_HexagonoGrande2 = false;//booleano para que empiece a dibujar el segundo hexagono grande para el panic mode

//VARIABLES PARA LOS CONTADORES DE LOS BUFOS DE DOBLE DISPARO Y PARA LOS BUFOS DE INVULNERABILIDAD
int contador_PrimerBufo_DobleDisparo{0}, contador_SegundoBufo_DobleDisparo{0}, contador_TercerBufo_DobleDisparo{0}, contador_PrimerBufo_DobleDisparo_Nivel2{0}, contador_SegundoBufo_DobleDisparo_Nivel2{0}, contador_TercerBufo_DobleDisparo_Nivel2{0}, contador_PrimerBufo_DobleDisparo_Nivel3{0}, contador_SegundoBufo_DobleDisparo_Nivel3{0}, contador_TercerBufo_DobleDisparo_Nivel3{0}, contador_CuartoBufo_DobleDisparo_Nivel3{0}, contador_QuintoBufo_DobleDisparo_Nivel3{0};//variables para los contadores de los bufos del doble disparo
int contador_PrimerBufo_Invulnerabilidad{0}, contador_SegundoBufo_Invulnerabilidad{0}, contador_TercerBufo_Invulnerabilidad{0}, contador_PrimerBufo_Invulnerabilidad_Nivel2{0}, contador_SegundoBufo_Invulnerabilidad_Nivel2{0}, contador_TercerBufo_Invulnerabilidad_Nivel2{0}, contador_PrimerBufo_Invulnerabilidad_Nivel3{0}, contador_SegundoBufo_Invulnerabilidad_Nivel3{0}, contador_TercerBufo_Invulnerabilidad_Nivel3{0}, contador_CuartoBufo_Invulnerabilidad_Nivel3{0}, contador_QuintoBufo_Invulnerabilidad_Nivel3{0}; //variables para los contadores de los bufos de invulnerabilidad

//VARIABLES PARA LOS NUMEROS RANDOM DE LOS BUFOS DE DOBLE DISPARO E INVULNERABILIDAD
int numeroRandom1{0}, numeroRandom2{0}, numeroRandom3{0}, numeroRandom1_Nivel2{0}, numeroRandom2_Nivel2{0}, numeroRandom3_Nivel2{0}, numeroRandom1_Nivel3{0}, numeroRandom2_Nivel3{0}, numeroRandom3_Nivel3{0}, numeroRandom4_Nivel3{0}, numeroRandom5_Nivel3{0};//variable del numero random
int bufoBall1{0}, bufoBall2{0}, bufoBall3{0}, bufoBall1_Nivel2{0}, bufoBall2_Nivel2{0}, bufoBall3_Nivel2{0}, bufoBall1_Nivel3{0}, bufoBall2_Nivel3{0}, bufoBall3_Nivel3{0}, bufoBall4_Nivel3{0}, bufoBall5_Nivel3{0};//variable para saber cuando hacer el numero random

//VARIABLES PARA LOS DIFERENTES ASPECTOS DEL JUEGO
int nivel;//variable para el nivel elegido por el usuario
int dificultad{2};//variable para la dificultad elegida por el usuario(inicializado a 2 para que la dificultad default sea media)
int tipoJuego;//variable para el tipo de juego
int pelotasDestruidas;//variable para cuando se destruye una pelota
int hexagonosDestruidos;//variable para cuando se destruye un hexagono

//VARIABLES PARA LOS NUMEROS RANDOM DEL BUFO TEMPORAL
int bufo_Reloj_Nivel2{0}, bufo_Reloj_Nivel3{0}, bufo_Reloj_Nivel4{0};//variable para saber cuando hacer el numero random
int NumeroRandom_RelojNivel2{0}, NumeroRandom_RelojNivel3{0}, NumeroRandom_RelojNivel4{0};//variable para el numero random del bufo temporal
int pararPelotas_RelojNivel2{0}, pararPelotas_RelojNivel3{0}, pararPelotas_RelojNivel4{0};//variables del contador para que se paren las pelotas
int contador_RelojNivel2{0}, contador_RelojNivel3{0}, contador_RelojNivel4{0};//variables para temporizar el dibujado del bufo temporal
bool pelotasParadas_RelojNivel2{false}, pelotasParadas_RelojNivel3{false}, pelotasParadas_RelojNivel4{false};//variables boleanas para saber que es el jugador el que ha hecho desaparecer el reloj y no el contador impuesto para el bufo temporal

//FUENTE POR DEFECTO
void *font = GLUT_STROKE_ROMAN;

//ALTO Y ANCHO DE LA VENTANA
int h,w;

//VARIABLES PARA EL CALCULO DE LOS FRAMES POR SEGUNDO
int frame;
long timeFrame, timebase;
char s[50];

//VARIABLES PARA EL SISTEMA DE PUNTUACION
int puntuacion_Total{0};
int puntuacion_Record{0};
char puntuacion[50];
char Nivel_PanicMode[50];
char Nivel1_PanicMode[50];
int level{0};

//VARIABLES PARA SACAR POR PANTALLA LAS VIDAS
char vida[50];

//VARIABLES PARA SACAR POR PANTALLA LA PUNTUACION CUANDO SE RECOGE UN OBJETO O CUANDO SE ROMPE UNA BOLA O HEXAGONO
char puntuacionBalls[50];

//VARIABLES PARA LEER Y ESCRIBIR EN FICHERO PUNTUACION.TXT
fstream fichero("puntuacion.txt");
string linea, linea1;

bool init()
{
    glClearColor(0.5f, 1.0f, 1.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    return true;
}

void resetBarraNivel(){
    //Resetea todos los contadores de las bolas del primer nivel para el dibujado de la barra de nivel del panic mode
    contador_PrimeraBarraNivel = 0;
    contador_SegundaBarraNivel = 0;
    contador_TerceraBarraNivel = 0;
    contador_CuartaBarraNivel = 0;
    contador_QuintaBarraNivel = 0;
    contador_SextaBarraNivel = 0;
    contador_SeptimaBarraNivel = 0;
    contador_OctavaBarraNivel = 0;
    contador_NovenaBarraNivel = 0;
    contador_DecimaBarraNivel = 0;
    contador_DecimaPrimeraBarraNivel = 0;
    contador_DecimaSegundaBarraNivel = 0;
    contador_DecimaTerceraBarraNivel = 0;
    contador_DecimaCuartaBarraNivel = 0;
    contador_DecimaQuintaBarraNivel = 0;
}

void resetBarraNivel2(){
    //Resetea todos los contadores de las bolas del segundo nivel para el dibujado de la barra de nivel del panic mode
    contador_PrimeraBarraNivel_Nivel2 = 0;
    contador_SegundaBarraNivel_Nivel2 = 0;
    contador_TerceraBarraNivel_Nivel2 = 0;
    contador_CuartaBarraNivel_Nivel2 = 0;
    contador_QuintaBarraNivel_Nivel2 = 0;
    contador_SextaBarraNivel_Nivel2 = 0;
    contador_SeptimaBarraNivel_Nivel2 = 0;
    contador_OctavaBarraNivel_Nivel2 = 0;
    contador_NovenaBarraNivel_Nivel2 = 0;
    contador_DecimaBarraNivel_Nivel2 = 0;
    contador_DecimaPrimeraBarraNivel_Nivel2 = 0;
    contador_DecimaSegundaBarraNivel_Nivel2 = 0;
    contador_DecimaTerceraBarraNivel_Nivel2 = 0;
    contador_DecimaCuartaBarraNivel_Nivel2 = 0;
    contador_DecimaQuintaBarraNivel_Nivel2 = 0;
}

void resetBarraNivelHexagonoGrande1(){
    //Resetea todos los contadores de los hexagonos que parten del primer hexagono grande para el dibujado de la barra de nivel
    contador_PrimeraBarraNivel_HexagonoGrande1 = 0;
    contador_PrimeraBarraNivel_Hexagono = 0;
    contador_SegundaBarraNivel_Hexagono = 0;
    contador_QuintaBarraNivel_Hexagono = 0;
    contador_sextaBarraNivel_Hexagono = 0;
    contador_SeptimaBarraNivel_Hexagono = 0;
    contador_OctavaBarraNivel_Hexagono = 0;
}

void resetBarraNivelHexagonoGrande2(){
    //Resetea todos los contadores de los hexagonos que parten del segundo hexagono grande para el dibujado de la barra de nivel
    contador_SegundaBarraNivel_HexagonoGrande2 = 0;
    contador_TerceraBarraNivel_Hexagono = 0;
    contador_CuartaBarraNivel_Hexagono = 0;
    contador_NovenaBarraNivel_Hexagono = 0;
    contador_DecimaBarraNivel_Hexagono = 0;
    contador_DecimaPrimeraBarraNivel_Hexagono = 0;
    contador_DecimaSegundaBarraNivel_Hexagono = 0;
}

void resetDibujadoBarraNivel(){
    dibujadoBarraNivel = 0;
}

void resetNivelTerminado(){
    nivel1Terminado = false;
    nivel2Terminado = false;
    nivel3Terminado = false;
    nivel4Terminado = false;
    nivel5Terminado = false;
    nivel6Terminado = false;
    botonVueltaMenuInicial = false;
}

void resetContadoresPuntuacion(){
    contador_DificultadFacil_Nivel1 = 0, contador_DificultadMedia_Nivel1 = 0, contador_DificultadDificil_Nivel1 = 0;
    contador_DificultadFacil_Nivel2 = 0, contador_DificultadMedia_Nivel2 = 0, contador_DificultadDificil_Nivel2 = 0;
    contador_DificultadFacil_Nivel3 = 0, contador_DificultadMedia_Nivel3 = 0, contador_DificultadDificil_Nivel3 = 0;
    contador_DificultadFacil_Nivel4 = 0, contador_DificultadMedia_Nivel4 = 0, contador_DificultadDificil_Nivel4 = 0;
    contador_DificultadFacil_Nivel5 = 0, contador_DificultadMedia_Nivel5 = 0, contador_DificultadDificil_Nivel5 = 0;
    contador_DificultadFacil_Nivel6 = 0, contador_DificultadMedia_Nivel6 = 0, contador_DificultadDificil_Nivel6 = 0;

    contador_VidasMayorIgualTres_Nivel1 = 0, contador_VidasIgualDos_Nivel1 = 0, contador_VidasIgualUno_Nivel1 = 0, contador_VidasIgualCero_Nivel1 = 0;
    contador_VidasMayorIgualTres_Nivel2 = 0, contador_VidasIgualDos_Nivel2 = 0, contador_VidasIgualUno_Nivel2 = 0, contador_VidasIgualCero_Nivel2 = 0;
    contador_VidasMayorIgualTres_Nivel3 = 0, contador_VidasIgualDos_Nivel3 = 0, contador_VidasIgualUno_Nivel3 = 0, contador_VidasIgualCero_Nivel3 = 0;
    contador_VidasMayorIgualTres_Nivel4 = 0, contador_VidasIgualDos_Nivel4 = 0, contador_VidasIgualUno_Nivel4 = 0, contador_VidasIgualCero_Nivel4 = 0;
    contador_VidasMayorIgualTres_Nivel5 = 0, contador_VidasIgualDos_Nivel5 = 0, contador_VidasIgualUno_Nivel5 = 0, contador_VidasIgualCero_Nivel5 = 0;
    contador_VidasMayorIgualTres_Nivel6 = 0, contador_VidasIgualDos_Nivel6 = 0, contador_VidasIgualUno_Nivel6 = 0, contador_VidasIgualCero_Nivel6 = 0;
}

void resetContadoresWins(){
    ig = 0;
    in2g = 0;
    in3g = 0;
    in4g = 0;
    in5g = 0;
    contador_nivel_6_Win = 0;
}

void resetPanicMode()
{
    level = 0;
    contador_PanicModeGanado = 0;
    panicModeTerminado = false;
}

void resetBalls(float numeroRandom){
    //Pone la variable booleana dibujado de la clase ball, para las bolas del primer nivel, a true, para que se vuelvan a dibujar
    ball1.setDibujado(true);
    ball2.setDibujado(true);
    ball3.setDibujado(true);
    ball4.setDibujado(true);
    ball5.setDibujado(true);
    ball6.setDibujado(true);
    ball7.setDibujado(true);
    ball8.setDibujado(true);
    ball9.setDibujado(true);
    ball10.setDibujado(true);
    ball11.setDibujado(true);
    ball12.setDibujado(true);
    ball13.setDibujado(true);
    ball14.setDibujado(true);
    ball15.setDibujado(true);
    //Resetea los contadores, de las pelotas del primer nivel, que dan un tiempo entre el dibujado de la bola y el poder dispararla
    i = 0;
    i1 = 0;
    i2 = 0;
    i3 = 0;
    i4 = 0;
    i5 = 0;
    i6 = 0;
    //Resetea el contador que hace que la primera bola de las bolas del primer nivel salga despacio desde el techo
    contador_SalidaBall1 = 0;
    //Resetea la posicion y las velocidades a su valor inicial
    ball1.setX(numeroRandom);
    ball1.setY(1.2);
    ball1.setXv(0.1);
    ball1.setYv(0);
    ball2.setXv(0.1);
    ball2.setYv(0);
    ball3.setXv(-0.1);
    ball3.setYv(0);
    ball4.setXv(-0.1);
    ball4.setYv(0);
    ball5.setXv(0.1);
    ball5.setYv(0);
    ball6.setXv(-0.1);
    ball6.setYv(0);
    ball7.setXv(0.1);
    ball7.setYv(0);
    ball8.setXv(-0.1);
    ball8.setYv(0);
    ball9.setXv(0.1);
    ball9.setYv(0);
    ball10.setXv(-0.1);
    ball10.setYv(0);
    ball11.setXv(0.1);
    ball11.setYv(0);
    ball12.setXv(-0.1);
    ball12.setYv(0);
    ball13.setXv(0.1);
    ball13.setYv(0);
    ball14.setXv(-0.1);
    ball14.setYv(0);
    ball15.setXv(0.1);
    ball15.setYv(0);
    //Resetea el contador para la traslacion de la primera bola del primer nivel a lo largo del marco
    contador_Traslacion_PrimeraBola = 0;
    //Resetea la variable de pelotas destruidas
    pelotasDestruidas = 0;
    //Resetea los contadores para el tiempo que el jugador tiene los bufos de doble disparo
    contador_PrimerBufo_DobleDisparo = 0;
    contador_SegundoBufo_DobleDisparo = 0;
    contador_TercerBufo_DobleDisparo = 0;
    //Resetea los contadores para el tiempo que el jugador tiene los bufos de invulnerabilidad
    contador_PrimerBufo_Invulnerabilidad = 0;
    contador_SegundoBufo_Invulnerabilidad = 0;
    contador_TercerBufo_Invulnerabilidad = 0;
    //Resetea los numeros random para los bufos de doble disparo y de invulnerabilidad
    numeroRandom1 = 0;
    numeroRandom2 = 0;
    numeroRandom3 = 0;
    //Resetea el numero para saber cuando hay que hacer el numero random de los bufos de doble diparo e invulnerabilidad
    bufoBall1 = 0;
    bufoBall2 = 0;
    bufoBall3 = 0;
    //Resetea la variable booleana dibujado de la clase bufo a true
    bufoInvulnerabilidad1.setDibujado(true);
    bufoDobleDisparo1.setDibujado(true);
    bufoInvulnerabilidad2.setDibujado(true);
    bufoDobleDisparo2.setDibujado(true);
    bufoInvulnerabilidad3.setDibujado(true);
    bufoDobleDisparo3.setDibujado(true);
    //Resetea la posicion de los bufos a su valor inicial
    bufoInvulnerabilidad1.setX(0);
    bufoInvulnerabilidad1.setY(0);
    bufoInvulnerabilidad1.setYv(0.005);
    bufoDobleDisparo1.setX(0);
    bufoDobleDisparo1.setY(0);
    bufoDobleDisparo1.setYv(0.005);
    bufoInvulnerabilidad2.setX(0);
    bufoInvulnerabilidad2.setY(0);
    bufoInvulnerabilidad2.setYv(0.005);
    bufoDobleDisparo2.setY(0);
    bufoDobleDisparo2.setY(0);
    bufoDobleDisparo2.setYv(0.005);
    bufoInvulnerabilidad3.setX(0);
    bufoInvulnerabilidad3.setY(0);
    bufoInvulnerabilidad3.setYv(0.005);
    bufoDobleDisparo3.setX(0);
    bufoDobleDisparo3.setY(0);
    bufoDobleDisparo3.setYv(0.005);
    //Resetea la variable booleana bufodobledisparo de la clase jugador a false
    jugador1.setBufoDobleDisparo(false);
    //Resetea la variable booleana dibujado de la clase comida a true
    manzana_Nivel1.setDibujado(true);
    //Resetea el contador de la manzana del nivel 1
    contador_Manzana_Nivel1 = 0;
    //Resetea la posicion y la velocidad de la manzana del nivel 1
    manzana_Nivel1.setY(0.8);
    manzana_Nivel1.setYv(0.01);
    //Resetea la variable booleana dibujado de la clase bufo para la vida extra del nivel 1 a true
    vidaExtra_Nivel1.setDibujado(true);
    //Resetea la posicion y la velocidad de la vida extra del nivel 1 a su valor inicial
    vidaExtra_Nivel1.setY(0.8);
    vidaExtra_Nivel1.setYv(0.005);
    vidaExtra_Nivel1.setPosicionX_CirculoRojo1(vidaExtra_Nivel1.getX() + 0.015);
    vidaExtra_Nivel1.setPosicionY_CirculoRojo1(vidaExtra_Nivel1.getY() + 0.035);
    vidaExtra_Nivel1.setPosicionX_CirculoRojo2(vidaExtra_Nivel1.getX() - 0.015);
    vidaExtra_Nivel1.setPosicionY_CirculoRojo2(vidaExtra_Nivel1.getY() + 0.035);
    //Resetea el contador de la vida extra del nivel 1 que hace que desaparezca despues de un tiempo
    contador_VidaExtra_Nivel1 = 0;
}

void resetBallsNivel2(float numeroRandom2)
{
    //Resetea la variable booleana dibujado de la clase ball, para las bolas del segundo nivel, a true, para que se vuelvan a dibujar
    nivel2Ball1.setDibujado(true);
    nivel2Ball2.setDibujado(true);
    nivel2Ball3.setDibujado(true);
    nivel2Ball4.setDibujado(true);
    nivel2Ball5.setDibujado(true);
    nivel2Ball6.setDibujado(true);
    nivel2Ball7.setDibujado(true);
    nivel2Ball8.setDibujado(true);
    nivel2Ball9.setDibujado(true);
    nivel2Ball10.setDibujado(true);
    nivel2Ball11.setDibujado(true);
    nivel2Ball12.setDibujado(true);
    nivel2Ball13.setDibujado(true);
    nivel2Ball14.setDibujado(true);
    nivel2Ball15.setDibujado(true);
    //Resetea los contadores, de las bolas del segundo nivel, que dan un tiempo entre el dibujado de la bola y el poder dispararla
    in2 = 0;
    i1n2 = 0;
    i2n2 = 0;
    i3n2 = 0;
    i4n2 = 0;
    i5n2 = 0;
    i6n2 = 0;
    //Resetea el contador, de la primera bola de las bolas del segundo nivel, que da un tiempo entre el dibujado de la bola y el poder dispararla
    contador_SalidaBall2 = 0;
    //Resetea la posicion y las velocidades a su valor inicial
    nivel2Ball1.setX(numeroRandom2);
    nivel2Ball1.setY(1.2);
    nivel2Ball1.setXv(0.1);
    nivel2Ball1.setYv(0);
    nivel2Ball2.setXv(0.1);
    nivel2Ball2.setYv(0);
    nivel2Ball3.setXv(-0.1);
    nivel2Ball3.setYv(0);
    nivel2Ball4.setXv(-0.1);
    nivel2Ball4.setYv(0);
    nivel2Ball5.setXv(0.1);
    nivel2Ball5.setYv(0);
    nivel2Ball6.setXv(-0.1);
    nivel2Ball6.setYv(0);
    nivel2Ball7.setXv(0.1);
    nivel2Ball7.setYv(0);
    nivel2Ball8.setXv(-0.1);
    nivel2Ball8.setYv(0);
    nivel2Ball9.setXv(0.1);
    nivel2Ball9.setYv(0);
    nivel2Ball10.setXv(-0.1);
    nivel2Ball10.setYv(0);
    nivel2Ball11.setXv(0.1);
    nivel2Ball11.setYv(0);
    nivel2Ball12.setXv(-0.1);
    nivel2Ball12.setYv(0);
    nivel2Ball13.setXv(0.1);
    nivel2Ball13.setYv(0);
    nivel2Ball14.setXv(-0.1);
    nivel2Ball14.setYv(0);
    nivel2Ball15.setXv(0.1);
    nivel2Ball15.setYv(0);
    //Resetea el contador para la traslacion de la primera bola del segundo nivel a lo largo del marco
    contador_Traslacion_PrimeraBola_Nivel2 = 0;
    //Resetea el contador que hace que la primera bola del segundo nivel salga cada cierto tiempo
    contador_TiempoEspera_BallNivel2 = 0;
    //Resetea a false la variable booleana que hace aparecer la primera pelota del segundo nivel
    aparece_BallNivel2 = false;
    //Resetea los contadores para el tiempo que el jugador tiene los bufos de doble disparo
    contador_PrimerBufo_DobleDisparo_Nivel2 = 0;
    contador_SegundoBufo_DobleDisparo_Nivel2 = 0;
    contador_TercerBufo_DobleDisparo_Nivel2 = 0;
    //Resetea los contadores para el tiempo que el jugador tiene los bufos de invulnerabilidad
    contador_PrimerBufo_Invulnerabilidad_Nivel2 = 0;
    contador_SegundoBufo_Invulnerabilidad_Nivel2 = 0;
    contador_TercerBufo_Invulnerabilidad_Nivel2 = 0;
    //Resetea los numeros random para los bufos de doble disparo y de invulnerabilidad
    numeroRandom1_Nivel2 = 0;
    numeroRandom2_Nivel2 = 0;
    numeroRandom3_Nivel2 = 0;
    //Resetea el numero para saber cuando hay que hacer el numero random de los bufos de doble diparo e invulnerabilidad
    bufoBall1_Nivel2 = 0;
    bufoBall2_Nivel2 = 0;
    bufoBall3_Nivel2 = 0;
    //Resetea la variable booleana dibujado de la clase bufo a true
    bufoInvulnerabilidad1_Nivel2.setDibujado(true);
    bufoDobleDisparo1_Nivel2.setDibujado(true);
    bufoInvulnerabilidad2_Nivel2.setDibujado(true);
    bufoDobleDisparo2_Nivel2.setDibujado(true);
    bufoInvulnerabilidad3_Nivel2.setDibujado(true);
    bufoDobleDisparo3_Nivel2.setDibujado(true);
    //Resetea la posicion de los bufos a su valor inicial
    bufoInvulnerabilidad1_Nivel2.setX(0);
    bufoInvulnerabilidad1_Nivel2.setY(0);
    bufoInvulnerabilidad1_Nivel2.setYv(0.005);
    bufoDobleDisparo1_Nivel2.setX(0);
    bufoDobleDisparo1_Nivel2.setY(0);
    bufoDobleDisparo1_Nivel2.setYv(0.005);
    bufoInvulnerabilidad2_Nivel2.setX(0);
    bufoInvulnerabilidad2_Nivel2.setY(0);
    bufoInvulnerabilidad2_Nivel2.setYv(0.005);
    bufoDobleDisparo2_Nivel2.setY(0);
    bufoDobleDisparo2_Nivel2.setY(0);
    bufoDobleDisparo2_Nivel2.setYv(0.005);
    bufoInvulnerabilidad3_Nivel2.setX(0);
    bufoInvulnerabilidad3_Nivel2.setY(0);
    bufoInvulnerabilidad3_Nivel2.setYv(0.005);
    bufoDobleDisparo3_Nivel2.setX(0);
    bufoDobleDisparo3_Nivel2.setY(0);
    bufoDobleDisparo3_Nivel2.setYv(0.005);
    //Resetea la variable booleana bufodobledisparo de la clase jugador a false
    jugador1.setBufoDobleDisparo(false);
    //Resetea la variable booleana dibujado de la clase comida a true
    naranja_Nivel2.setDibujado(true);
    //Resetea el contador de la naranja del nivel 2
    contador_Naranja_Nivel2 = 0;
    //Resetea la posicion y la velocidad de la naranja del nivel 2
    naranja_Nivel2.setY(0.8);
    naranja_Nivel2.setYv(0.01);
}

void resetBallsNivel3(){
    //Resetea la variable booleana dibujado de la clase ball, para las bolas del tercer nivel, a true, para que se vuelvan a dibujar
    nivel3Ball1.setDibujado(true);
    nivel3Ball2.setDibujado(true);
    nivel3Ball3.setDibujado(true);
    nivel3Ball4.setDibujado(true);
    nivel3Ball5.setDibujado(true);
    nivel3Ball6.setDibujado(true);
    nivel3Ball7.setDibujado(true);
    nivel3Ball8.setDibujado(true);
    nivel3Ball9.setDibujado(true);
    nivel3Ball10.setDibujado(true);
    nivel3Ball11.setDibujado(true);
    nivel3Ball12.setDibujado(true);
    nivel3Ball13.setDibujado(true);
    nivel3Ball14.setDibujado(true);
    nivel3Ball15.setDibujado(true);
    //Resetea los contadores, de las bolas del tercer nivel, que dan un tiempo entre el dibujado de la bola y el poder dispararla
    in3b1 = 0;
    in3b2 = 0;
    in3 = 0;
    i1n3 = 0;
    i2n3 = 0;
    i3n3 = 0;
    i4n3 = 0;
    //Resetea la posicion y las velocidades de las pelotas del tercer nivel a su valor inicial
    nivel3Ball1.setX(0.8);
    nivel3Ball1.setY(0);
    nivel3Ball1.setXv(-0.1);
    nivel3Ball1.setYv(0);
    nivel3Ball2.setX(-0.8);
    nivel3Ball2.setY(0);
    nivel3Ball2.setXv(0.1);
    nivel3Ball2.setYv(0);
    nivel3Ball3.setX(0);
    nivel3Ball3.setY(0);
    nivel3Ball3.setXv(0.1);
    nivel3Ball3.setYv(0);
    nivel3Ball4.setX(0.8);
    nivel3Ball4.setY(0);
    nivel3Ball4.setXv(-0.1);
    nivel3Ball4.setYv(0);
    nivel3Ball5.setX(-0.8);
    nivel3Ball5.setY(0);
    nivel3Ball5.setXv(0.1);
    nivel3Ball5.setYv(0);
    nivel3Ball6.setXv(0.1);
    nivel3Ball6.setYv(0);
    nivel3Ball7.setXv(-0.1);
    nivel3Ball7.setYv(0);
    nivel3Ball8.setXv(0.1);
    nivel3Ball8.setYv(0);
    nivel3Ball9.setXv(-0.1);
    nivel3Ball9.setYv(0);
    nivel3Ball10.setXv(0.1);
    nivel3Ball10.setYv(0);
    nivel3Ball11.setXv(-0.1);
    nivel3Ball11.setYv(0);
    nivel3Ball12.setXv(0.1);
    nivel3Ball12.setYv(0);
    nivel3Ball13.setXv(-0.1);
    nivel3Ball13.setYv(0);
    nivel3Ball14.setXv(0.1);
    nivel3Ball14.setYv(0);
    nivel3Ball15.setXv(-0.1);
    nivel3Ball15.setYv(0);
    //Resetea los contadores para el tiempo que el jugador tiene los bufos de doble disparo
    contador_PrimerBufo_DobleDisparo_Nivel3 = 0;
    contador_SegundoBufo_DobleDisparo_Nivel3 = 0;
    contador_TercerBufo_DobleDisparo_Nivel3 = 0;
    contador_CuartoBufo_DobleDisparo_Nivel3 = 0;
    contador_QuintoBufo_DobleDisparo_Nivel3 = 0;
    //Resetea los contadores para el tiempo que el jugador tiene los bufos de invulnerabilidad
    contador_PrimerBufo_Invulnerabilidad_Nivel3 = 0;
    contador_SegundoBufo_Invulnerabilidad_Nivel3 = 0;
    contador_TercerBufo_Invulnerabilidad_Nivel3 = 0;
    contador_CuartoBufo_Invulnerabilidad_Nivel3 = 0;
    contador_QuintoBufo_Invulnerabilidad_Nivel3 = 0;
    //Resetea los numeros random para los bufos de doble disparo y de invulnerabilidad
    numeroRandom1_Nivel3 = 0;
    numeroRandom2_Nivel3 = 0;
    numeroRandom3_Nivel3 = 0;
    numeroRandom4_Nivel3 = 0;
    numeroRandom5_Nivel3 = 0;
    //Resetea el numero para saber cuando hay que hacer el numero random de los bufos de doble diparo e invulnerabilidad
    bufoBall1_Nivel3 = 0;
    bufoBall2_Nivel3 = 0;
    bufoBall3_Nivel3 = 0;
    bufoBall4_Nivel3 = 0;
    bufoBall5_Nivel3 = 0;
    //Resetea la variable booleana dibujado de la clase bufo a true
    bufoInvulnerabilidad1_Nivel3.setDibujado(true);
    bufoDobleDisparo1_Nivel3.setDibujado(true);
    bufoInvulnerabilidad2_Nivel3.setDibujado(true);
    bufoDobleDisparo2_Nivel3.setDibujado(true);
    bufoInvulnerabilidad3_Nivel3.setDibujado(true);
    bufoDobleDisparo3_Nivel3.setDibujado(true);
    bufoInvulnerabilidad4_Nivel3.setDibujado(true);
    bufoDobleDisparo4_Nivel3.setDibujado(true);
    bufoInvulnerabilidad5_Nivel3.setDibujado(true);
    bufoDobleDisparo5_Nivel3.setDibujado(true);
    //Resetea la posicion de los bufos a su valor inicial
    bufoInvulnerabilidad1_Nivel3.setX(0);
    bufoInvulnerabilidad1_Nivel3.setY(0);
    bufoInvulnerabilidad1_Nivel3.setYv(0.005);
    bufoDobleDisparo1_Nivel3.setX(0);
    bufoDobleDisparo1_Nivel3.setY(0);
    bufoDobleDisparo1_Nivel3.setYv(0.005);
    bufoInvulnerabilidad2_Nivel3.setX(0);
    bufoInvulnerabilidad2_Nivel3.setY(0);
    bufoInvulnerabilidad2_Nivel3.setYv(0.005);
    bufoDobleDisparo2_Nivel3.setY(0);
    bufoDobleDisparo2_Nivel3.setY(0);
    bufoDobleDisparo2_Nivel3.setYv(0.005);
    bufoInvulnerabilidad3_Nivel3.setX(0);
    bufoInvulnerabilidad3_Nivel3.setY(0);
    bufoInvulnerabilidad3_Nivel3.setYv(0.005);
    bufoDobleDisparo3_Nivel3.setX(0);
    bufoDobleDisparo3_Nivel3.setY(0);
    bufoDobleDisparo3_Nivel3.setYv(0.005);
    bufoInvulnerabilidad4_Nivel3.setX(0);
    bufoInvulnerabilidad4_Nivel3.setY(0);
    bufoInvulnerabilidad4_Nivel3.setYv(0.005);
    bufoDobleDisparo4_Nivel3.setX(0);
    bufoDobleDisparo4_Nivel3.setY(0);
    bufoDobleDisparo4_Nivel3.setYv(0.005);
    bufoInvulnerabilidad5_Nivel3.setX(0);
    bufoInvulnerabilidad5_Nivel3.setY(0);
    bufoInvulnerabilidad5_Nivel3.setYv(0.005);
    bufoDobleDisparo5_Nivel3.setX(0);
    bufoDobleDisparo5_Nivel3.setY(0);
    bufoDobleDisparo5_Nivel3.setYv(0.005);
    //Resetea la variable booleana bufodobledisparo de la clase jugador a false
    jugador1.setBufoDobleDisparo(false);
    //Resetea la variable booleana dibujado de la clase comida a true
    fresa_Nivel3.setDibujado(true);
    //Resetea el contador de la naranja del nivel 2
    contador_Fresa_Nivel3 = 0;
    //Resetea la posicion y la velocidad de la naranja del nivel 2
    fresa_Nivel3.setY(0.8);
    fresa_Nivel3.setYv(0.01);
}

void resetHexagonosParte1(float numeroRandom){
    //Resetea la variable booleana dibujado de la clase hexagono, para los hexagonos que parten del primer hexagono grande, a true, para que se vuelvan a dibujar en el modo panic mode
    hexagonoGrande1.setDibujado(true);
    hexagono1.setDibujado(true);
    hexagono2.setDibujado(true);
    hexagono5.setDibujado(true);
    hexagono6.setDibujado(true);
    hexagono7.setDibujado(true);
    hexagono8.setDibujado(true);
    //Resetea los contadores, de los hexagonos que parten del primer hexagono grande, que dan un tiempo entre el dibujado de los hexagonos y el poder dispararlos
    contador_nivel6_hexagonoGrande1 = 0;
    contador_hexagono1 = 0;
    contador_hexagono2 = 0;
    //Resetea el contador, del primer hexagono grande, que da un timepo entre el dibujado del hexagono y el poder dispararle
    contador_SalidaHexagonoGrande1 = 0;
    //Resetea la posicion y las velocidades a su valor inicial
    hexagonoGrande1.setX(numeroRandom);
    hexagonoGrande1.setY(1.2);
    hexagonoGrande1.setXv(-0.01);
    hexagonoGrande1.setYv(-0.011);
    hexagono1.setXv(-0.009);
    hexagono1.setYv(0.01);
    hexagono2.setXv(0.009);
    hexagono2.setYv(0.01);
    hexagono5.setXv(0.006);
    hexagono5.setYv(0.01);
    hexagono6.setXv(-0.006);
    hexagono6.setYv(0.01);
    hexagono7.setXv(0.006);
    hexagono7.setYv(0.01);
    hexagono8.setXv(-0.006);
    hexagono8.setYv(0.01);
    //Resetea el contador para la traslacion del primer hexagono grande a lo largo del marco
    contador_Traslacion_HexagonoGrande1 = 0;
    //Resetea el contador que hace que el primer hexagono grande salga cada cierto tiempo
    contador_TiempoEspera_HexagonoGrande1 = 0;
    //Resetea a false la variable booleana que hace aparecer el primer hexagono grande
    aparece_HexagonoGrande1 = false;
    //Resetea la variable booleana para saber cuando se ha terminado el nivel 1, a false
    nivel1Terminado = false;
}

void resetHexagonosParte2(float numeroRandom){
    //Resetea la variable booleana dibujado de la clase hexagono, para los hexagonos que parten del segundo hexagono grande, a true, para que se vuelvan a dibujar en el modo panic mode
    hexagonoGrande2.setDibujado(true);
    hexagono3.setDibujado(true);
    hexagono4.setDibujado(true);
    hexagono9.setDibujado(true);
    hexagono10.setDibujado(true);
    hexagono11.setDibujado(true);
    hexagono12.setDibujado(true);
    //Resetea los contadores, de los hexagonos que parten del segundo hexagono grande, que dan un tiempo entre el dibujado de los hexagonos y el poder dispararlos
    contador_nivel6_hexagonoGrande2 = 0;
    contador_hexagono3 = 0;
    contador_hexagono4 = 0;
    //Resetea el contador, del segundo hexagono grande, que da un tiempo entre el dibujado del hexagono y el poder dispararle
    contador_SalidaHexagonoGrande2 = 0;
    //Resetea la posicion y las velocidades a su valor inicial
    hexagonoGrande2.setX(numeroRandom);
    hexagonoGrande2.setY(1.2);
    hexagonoGrande2.setXv(0.01);
    hexagonoGrande2.setYv(-0.011);
    hexagono3.setXv(-0.009);
    hexagono3.setYv(0.01);
    hexagono4.setXv(0.009);
    hexagono4.setYv(0.01);
    hexagono9.setXv(0.006);
    hexagono9.setYv(0.01);
    hexagono10.setXv(-0.006);
    hexagono10.setYv(0.01);
    hexagono11.setXv(0.006);
    hexagono11.setYv(0.01);
    hexagono12.setXv(-0.006);
    hexagono12.setYv(0.01);
    //Resetea el contador para la traslacion del segundo hexagono grande a lo largo del marco
    contador_Traslacion_HexagonoGrande2 = 0;
    //Resetea el contador que hace que el segundo hexagono grande salga cada cierto tiempo
    contador_TiempoEspera_HexagonoGrande2 = 0;
    //Resetea a false la variable booleana que hace aparecer el segundo hexagono grande
    aparece_HexagonoGrande2 = false;
}

void resetVidas(){
    vidas = 3;
}

void resetPosicionJugador(){
    jugador1.setX(0);
    jugador1.setColor({1.0, 0.0, 0.0});
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
    // VARIABLES DEL SEPTIMO NIVEL
    //-----------------------------------------------------------------------------------------------------

    float velocidad_EjeY_Ball1 = ball1.getYv() * -1;
    float velocidad_EjeX_Ball1 = ball1.getXv() * -1;

    //-----------------------------------------------------------------------------------------------------

    glClear(GL_COLOR_BUFFER_BIT);

    //-----------------------------------------------------------------------------------------------------
    //                                   MENU INICIAL
    //-----------------------------------------------------------------------------------------------------

    if(inicioMenu == true){
        //MARCOS Y STRING PARA EL BOTON DE INICIO DEL JUEGO DEL MENU INICIAL
        recuadroInicioJuego.draw();
        marcoInicioJuego1.draw();
        marcoInicioJuego2.draw();
        marcoInicioJuego3.draw();
        marcoInicioJuego4.draw();

        sprintf(inicioDelJuego,"NUEVA PARTIDA");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(330,282,0,GLUT_BITMAP_HELVETICA_18,inicioDelJuego);
        glPopMatrix();

        restorePerspectiveProjection();

        //MARCOS Y STRING PARA EL BOTON DE LA DEFINICION Y CAMBIO DE DIFICULTADES DEL MENU INCIAL
        recuadroDificultades.draw();
        marcoDificultades1.draw();
        marcoDificultades2.draw();
        marcoDificultades3.draw();
        marcoDificultades4.draw();

        sprintf(eleccionDificultad,"DIFICULTAD");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(350,347,0,GLUT_BITMAP_HELVETICA_18,eleccionDificultad);
        glPopMatrix();

        restorePerspectiveProjection();

        //MARCOS Y STRING PARA EL BOTON DE LA DEFINICION DE LAS DIFERENTES VERSIONES DEL JUEGO DEL MENU INICIAL
        recuadroVersiones.draw();
        marcoVersiones1.draw();
        marcoVersiones2.draw();
        marcoVersiones3.draw();
        marcoVersiones4.draw();

        sprintf(versiones,"VERSIONES");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(350,412,0,GLUT_BITMAP_HELVETICA_18,versiones);
        glPopMatrix();

        restorePerspectiveProjection();

        //MARCOS Y STRING PARA EL BOTON DE SALIDA DEL JUEGO DEL MENU DE INICIO
        recuadroSalidaDelJuego.draw();
        marcoSalidaDelJuego1.draw();
        marcoSalidaDelJuego2.draw();
        marcoSalidaDelJuego3.draw();
        marcoSalidaDelJuego4.draw();

        sprintf(salidaDelJuego,"SALIR DEL JUEGO");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(327,540,0,GLUT_BITMAP_HELVETICA_18,salidaDelJuego);
        glPopMatrix();

        restorePerspectiveProjection();

        //MARCOS Y STRING PARA EL BOTON DE CONTROLES DEL MENU DE INICIO
        recuadroControles.draw();
        marcoControles1.draw();
        marcoControles2.draw();
        marcoControles3.draw();
        marcoControles4.draw();

        sprintf(controles,"CONTROLES");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(347,475,0,GLUT_BITMAP_HELVETICA_18,controles);
        glPopMatrix();

        restorePerspectiveProjection();

        //SACAR POR PANTALLA LA VERSION ACTUAL DEL JUEGO

        sprintf(versionActual,"version 1.0");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(700,700,0,GLUT_BITMAP_HELVETICA_18,versionActual);
        glPopMatrix();

        restorePerspectiveProjection();
    }

    if(Explicacion_Versiones == true){
        sprintf(explicacionVersiones1,"-------------------");
        sprintf(explicacionVersiones2,"   VERSION ALFA");
        sprintf(explicacionVersiones3,"-------------------");
        sprintf(explicacionVersiones4,"- Funciones basicas del juego.");
        sprintf(explicacionVersiones5,"- Menu basico.");
        sprintf(explicacionVersiones6,"- Creacion de varios niveles para testear.");
        sprintf(explicacionVersiones7,"Fecha de salida: 25/03/2019");
        sprintf(explicacionVersiones8,"-------------------");
        sprintf(explicacionVersiones9,"   VERSION BETA");
        sprintf(explicacionVersiones10,"-------------------");
        sprintf(explicacionVersiones11,"- Dos nuevos bufos para el jugador: Invulnerabilidad y Doble disparo.");
        sprintf(explicacionVersiones12,"- Menu mas completo.");
        sprintf(explicacionVersiones13,"- Sistema de eleccion de dificultad.");
        sprintf(explicacionVersiones14,"- Ahora se pueden ver los FPS.");
        sprintf(explicacionVersiones15,"- Ahora el juego finaliza cuando se termina el nivel elegido.");
        sprintf(explicacionVersiones16,"- Mejoras varias en el codigo para un mejor rendimiento del juego.");
        sprintf(explicacionVersiones17,"Fecha de salida: 02/04/2019");
        sprintf(explicacionVersiones18,"-------------------");
        sprintf(explicacionVersiones19,"   VERSION 1.0");
        sprintf(explicacionVersiones20,"-------------------");
        sprintf(explicacionVersiones21,"- Ahora se pueden conseguir vidas extra.");
        sprintf(explicacionVersiones22,"- Nuevo bufo: parar el tiempo.");
        sprintf(explicacionVersiones23,"- Nuevo bufo: cuadruple disparo.");
        sprintf(explicacionVersiones24,"- Las bolas tienen mejor movimiento.");
        sprintf(explicacionVersiones25,"- Nuevos niveles con plataformas.");
        sprintf(explicacionVersiones26,"- Nuevo sistema de puntuacion.");
        sprintf(explicacionVersiones27,"- Nuevo modo de juego: Panic Mode.");
        sprintf(explicacionVersiones28,"- Ahora hay recolectables que suman puntos: Manzana, naranja, fresa, hamburguesa y pizza.");
        sprintf(explicacionVersiones29,"- Nuevo menu con mas opciones.");
        sprintf(explicacionVersiones30,"Fecha de salida:");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(10,10,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones1);
        renderBitmapString(25,25,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones2);
        renderBitmapString(10,40,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones3);
        renderBitmapString(10,55,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones4);
        renderBitmapString(10,70,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones5);
        renderBitmapString(10,85,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones6);
        renderBitmapString(10,100,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones7);
        renderBitmapString(10,115,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones8);
        renderBitmapString(10,130,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones9);
        renderBitmapString(10,145,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones10);
        renderBitmapString(10,160,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones11);
        renderBitmapString(10,175,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones12);
        renderBitmapString(10,190,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones13);
        renderBitmapString(10,205,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones14);
        renderBitmapString(10,220,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones15);
        renderBitmapString(10,235,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones16);
        renderBitmapString(10,250,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones17);
        renderBitmapString(10,265,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones18);
        renderBitmapString(10,280,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones19);
        renderBitmapString(10,295,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones20);
        renderBitmapString(10,310,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones21);
        renderBitmapString(10,325,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones22);
        renderBitmapString(10,340,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones23);
        renderBitmapString(10,355,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones24);
        renderBitmapString(10,370,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones25);
        renderBitmapString(10,385,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones26);
        renderBitmapString(10,400,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones27);
        renderBitmapString(10,415,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones28);
        renderBitmapString(10,430,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones29);
        renderBitmapString(10,445,0,GLUT_BITMAP_HELVETICA_12,explicacionVersiones30);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco y recuadro para el boton de ir hacia atras de la ventana de versiones
        recuadroAtrasVersiones.draw();
        marcoAtrasVersiones1.draw();
        marcoAtrasVersiones2.draw();
        marcoAtrasVersiones3.draw();
        marcoAtrasVersiones4.draw();

        //SACAR POR PANTALLA LA STRING PARA EL BOTON DE VOLVER ATRAS EN LA VENTANA DE VERSIONES
        sprintf(backVersiones,"ATRAS");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(670,670,0,GLUT_BITMAP_HELVETICA_18,backVersiones);
        glPopMatrix();

        restorePerspectiveProjection();
    }

    if(dificultades == true){

        sprintf(dificultad1,"--------------------");
        sprintf(dificultad2,"  DIFICULTAD FACIL");
        sprintf(dificultad3,"--------------------");
        sprintf(dificultad4,"- Solo las pelotas y hexagonos grandes te pueden matar.");
        sprintf(dificultad5,"- Mayor probabilidad de que salgan bufos para el jugador.");
        sprintf(dificultad6,"--------------------");
        sprintf(dificultad7,"  DIFICULTAD MEDIA");
        sprintf(dificultad8,"--------------------");
        sprintf(dificultad9,"- Te matan las pelotas y hexagonos grandes y medianos.");
        sprintf(dificultad10,"- Menor probabilidad de que salgan bufos para el jugador.");
        sprintf(dificultad11,"----------------------");
        sprintf(dificultad12,"  DIFICULTAD DIFICIL");
        sprintf(dificultad13,"----------------------");
        sprintf(dificultad14,"- Te matan las pelotas grandes, las medianas y las medianas-pequeñas; Y los hexagonos grandes, medianos y pequeños.");
        sprintf(dificultad15,"- Poca probabilidad de que salgan bufos para el jugador.");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(10,10,0,GLUT_BITMAP_HELVETICA_12,dificultad1);
        renderBitmapString(10,25,0,GLUT_BITMAP_HELVETICA_12,dificultad2);
        renderBitmapString(10,40,0,GLUT_BITMAP_HELVETICA_12,dificultad3);
        renderBitmapString(10,55,0,GLUT_BITMAP_HELVETICA_12,dificultad4);
        renderBitmapString(10,70,0,GLUT_BITMAP_HELVETICA_12,dificultad5);
        renderBitmapString(10,85,0,GLUT_BITMAP_HELVETICA_12,dificultad6);
        renderBitmapString(10,100,0,GLUT_BITMAP_HELVETICA_12,dificultad7);
        renderBitmapString(10,115,0,GLUT_BITMAP_HELVETICA_12,dificultad8);
        renderBitmapString(10,130,0,GLUT_BITMAP_HELVETICA_12,dificultad9);
        renderBitmapString(10,145,0,GLUT_BITMAP_HELVETICA_12,dificultad10);
        renderBitmapString(10,160,0,GLUT_BITMAP_HELVETICA_12,dificultad11);
        renderBitmapString(10,175,0,GLUT_BITMAP_HELVETICA_12,dificultad12);
        renderBitmapString(10,190,0,GLUT_BITMAP_HELVETICA_12,dificultad13);
        renderBitmapString(10,205,0,GLUT_BITMAP_HELVETICA_12,dificultad14);
        renderBitmapString(10,220,0,GLUT_BITMAP_HELVETICA_12,dificultad15);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del cambio de dificultad ha facil de la ventana de dificultades
        recuadroDificultadFacil.draw();
        marcoDificultadFacil1.draw();
        marcoDificultadFacil2.draw();
        marcoDificultadFacil3.draw();
        marcoDificultadFacil4.draw();

        sprintf(dificultadFacil,"DIFICULTAD FACIL");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(75,347,0,GLUT_BITMAP_HELVETICA_18,dificultadFacil);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del cambio de dificultad ha media de la ventana de dificultades
        recuadroDificultadMedia.draw();
        marcoDificultadMedia1.draw();
        marcoDificultadMedia2.draw();
        marcoDificultadMedia3.draw();
        marcoDificultadMedia4.draw();

        sprintf(dificultadMedia,"DIFICULTAD MEDIA");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(315,347,0,GLUT_BITMAP_HELVETICA_18,dificultadMedia);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del cambio de dificultad ha dificil de la ventana de dificultades
        recuadroDificultadDificil.draw();
        marcoDificultadDificil1.draw();
        marcoDificultadDificil2.draw();
        marcoDificultadDificil3.draw();
        marcoDificultadDificil4.draw();

        sprintf(dificultadDificil,"DIFICULTAD DIFICIL");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(550,347,0,GLUT_BITMAP_HELVETICA_18,dificultadDificil);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton de ir hacia atras de la ventana de dificultades
        recuadroAtrasDificultad.draw();
        marcoAtrasDificultad1.draw();
        marcoAtrasDificultad2.draw();
        marcoAtrasDificultad3.draw();
        marcoAtrasDificultad4.draw();

        sprintf(backDificultades,"ATRAS");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(670,670,0,GLUT_BITMAP_HELVETICA_18,backDificultades);
        glPopMatrix();

        restorePerspectiveProjection();

        //string para la dificultad actual
        if(dificultad == 1){
            sprintf(dificultadActual,"DIFICULTAD ACTUAL: FACIL");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(0.0, 0.0, 0.0);
            renderBitmapString(280,430,0,GLUT_BITMAP_HELVETICA_18,dificultadActual);
            glPopMatrix();

            restorePerspectiveProjection();
        }else if(dificultad == 2){
            sprintf(dificultadActual,"DIFICULTAD ACTUAL: MEDIA");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(0.0, 0.0, 0.0);
            renderBitmapString(280,430,0,GLUT_BITMAP_HELVETICA_18,dificultadActual);
            glPopMatrix();

            restorePerspectiveProjection();
        }else if(dificultad == 3){
            sprintf(dificultadActual,"DIFICULTAD ACTUAL: DIFICIL");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(0.0, 0.0, 0.0);
            renderBitmapString(280,430,0,GLUT_BITMAP_HELVETICA_18,dificultadActual);
            glPopMatrix();

            restorePerspectiveProjection();
        }
    }

    if(Explicacion_controles == true){
        recuadroAtrasControles.draw();
        marcoAtrasControles1.draw();
        marcoAtrasControles2.draw();
        marcoAtrasControles3.draw();
        marcoAtrasControles4.draw();

        lineaSeparacion.draw();

        sprintf(backControles,"ATRAS");
        sprintf(explicacionControles1,"ACTIONS");
        sprintf(explicacionControles2,"KEY");
        sprintf(explicacionControles3,"Move to the left");
        sprintf(explicacionControles4,"Left Arrow Key");
        sprintf(explicacionControles5,"Move to the right");
        sprintf(explicacionControles6,"Right Arrow Key");
        sprintf(explicacionControles7,"Shoot");
        sprintf(explicacionControles8,"Up Arrow Key");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(670,670,0,GLUT_BITMAP_HELVETICA_18,backControles);
        renderBitmapString(200,100,0,GLUT_BITMAP_HELVETICA_18,explicacionControles1);
        renderBitmapString(550,100,0,GLUT_BITMAP_HELVETICA_18,explicacionControles2);
        renderBitmapString(180,140,0,GLUT_BITMAP_HELVETICA_18,explicacionControles3);
        renderBitmapString(530,140,0,GLUT_BITMAP_HELVETICA_18,explicacionControles4);
        renderBitmapString(180,180,0,GLUT_BITMAP_HELVETICA_18,explicacionControles5);
        renderBitmapString(530,180,0,GLUT_BITMAP_HELVETICA_18,explicacionControles6);
        renderBitmapString(180,220,0,GLUT_BITMAP_HELVETICA_18,explicacionControles7);
        renderBitmapString(530,220,0,GLUT_BITMAP_HELVETICA_18,explicacionControles8);
        glPopMatrix();

        restorePerspectiveProjection();
    }

    if(tipoDeJuego == true){
        //Marco, recuadro y string para el boton de tour mode de la ventana del tipo de juego
        recuadroTourMode.draw();
        marcoTourMode1.draw();
        marcoTourMode2.draw();
        marcoTourMode3.draw();
        marcoTourMode4.draw();

        sprintf(tourMode,"TOUR MODE");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(345,282,0,GLUT_BITMAP_HELVETICA_18,tourMode);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton de panic mode de la ventana del tipo de juego
        recuadroPanicMode.draw();
        marcoPanicMode1.draw();
        marcoPanicMode2.draw();
        marcoPanicMode3.draw();
        marcoPanicMode4.draw();

        sprintf(panicMode,"PANIC MODE");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(345,347,0,GLUT_BITMAP_HELVETICA_18,panicMode);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton de ir hacia atras de la ventana de eleccion del tipo de juego
        recuadroAtrasTipoJuego.draw();
        marcoAtrasTipoJuego1.draw();
        marcoAtrasTipoJuego2.draw();
        marcoAtrasTipoJuego3.draw();
        marcoAtrasTipoJuego4.draw();

        sprintf(backTipoJuego,"ATRAS");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(670,670,0,GLUT_BITMAP_HELVETICA_18,backTipoJuego);
        glPopMatrix();

        restorePerspectiveProjection();
    }

    if(tipoJuegoTourMode == true){

        //Marco, recuadro y string para el boton del mundo 1-1
        recuadroMundo1.draw();
        marcoMundo11.draw();
        marcoMundo12.draw();
        marcoMundo13.draw();
        marcoMundo14.draw();

        sprintf(Mundo11,"MUNDO 1-1");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(188,250,0,GLUT_BITMAP_HELVETICA_18,Mundo11);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del mundo 1-2
        recuadroMundo2.draw();
        marcoMundo21.draw();
        marcoMundo22.draw();
        marcoMundo23.draw();
        marcoMundo24.draw();

        sprintf(Mundo12,"MUNDO 1-2");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(348,250,0,GLUT_BITMAP_HELVETICA_18,Mundo12);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del mundo 1-3
        recuadroMundo3.draw();
        marcoMundo31.draw();
        marcoMundo32.draw();
        marcoMundo33.draw();
        marcoMundo34.draw();

        sprintf(Mundo13,"MUNDO 1-3");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(508,250,0,GLUT_BITMAP_HELVETICA_18,Mundo13);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del mundo 1-4
        recuadroMundo4.draw();
        marcoMundo41.draw();
        marcoMundo42.draw();
        marcoMundo43.draw();
        marcoMundo44.draw();

        sprintf(Mundo14,"MUNDO 1-4");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(188,315,0,GLUT_BITMAP_HELVETICA_18,Mundo14);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del mundo 1-5
        recuadroMundo5.draw();
        marcoMundo51.draw();
        marcoMundo52.draw();
        marcoMundo53.draw();
        marcoMundo54.draw();

        sprintf(Mundo15,"MUNDO 1-5");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(348,315,0,GLUT_BITMAP_HELVETICA_18,Mundo15);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton del mundo 2-1
        recuadroMundo6.draw();
        marcoMundo61.draw();
        marcoMundo62.draw();
        marcoMundo63.draw();
        marcoMundo64.draw();

        sprintf(Mundo21,"MUNDO 2-1");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(508,315,0,GLUT_BITMAP_HELVETICA_18,Mundo21);
        glPopMatrix();

        restorePerspectiveProjection();

        //Marco, recuadro y string para el boton de ir hacia atras de la ventana del Tour Mode
        recuadroAtrasTourMode.draw();
        marcoAtrasTourMode1.draw();
        marcoAtrasTourMode2.draw();
        marcoAtrasTourMode3.draw();
        marcoAtrasTourMode4.draw();

        sprintf(backTourMode,"ATRAS");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(670,670,0,GLUT_BITMAP_HELVETICA_18,backTourMode);
        glPopMatrix();

        restorePerspectiveProjection();
    }

    if(inicioJuego == true){
        if(nivel == 1){
            bottomFrameTourMode.draw();

            sprintf(mundo1BottomFrame,"MUNDO 1-1");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(1.0, 0.7, 0.0);
            renderBitmapString(350,690,0,GLUT_BITMAP_HELVETICA_18,mundo1BottomFrame);
            glPopMatrix();

            restorePerspectiveProjection();
        }else if(nivel == 2){
            bottomFrameTourMode.draw();

            sprintf(mundo2BottomFrame,"MUNDO 1-2");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(1.0, 0.7, 0.0);
            renderBitmapString(350,690,0,GLUT_BITMAP_HELVETICA_18,mundo2BottomFrame);
            glPopMatrix();

            restorePerspectiveProjection();
        }else if(nivel == 3){
            bottomFrameTourMode.draw();

            sprintf(mundo3BottomFrame,"MUNDO 1-3");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(1.0, 0.7, 0.0);
            renderBitmapString(350,690,0,GLUT_BITMAP_HELVETICA_18,mundo3BottomFrame);
            glPopMatrix();

            restorePerspectiveProjection();
        }else if(nivel == 4){
            bottomFrameTourMode.draw();

            sprintf(mundo4BottomFrame,"MUNDO 1-4");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(1.0, 0.7, 0.0);
            renderBitmapString(350,690,0,GLUT_BITMAP_HELVETICA_18,mundo4BottomFrame);
            glPopMatrix();

            restorePerspectiveProjection();
        }else if(nivel == 5){
            bottomFrameTourMode.draw();

            sprintf(mundo5BottomFrame,"MUNDO 1-5");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(1.0, 0.7, 0.0);
            renderBitmapString(350,690,0,GLUT_BITMAP_HELVETICA_18,mundo5BottomFrame);
            glPopMatrix();

            restorePerspectiveProjection();
        }else if(nivel == 6){
            bottomFrameTourMode.draw();

            sprintf(mundo6BottomFrame,"MUNDO 2-1");

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(1.0, 0.7, 0.0);
            renderBitmapString(350,690,0,GLUT_BITMAP_HELVETICA_18,mundo6BottomFrame);
            glPopMatrix();

            restorePerspectiveProjection();
        }
    }

    if(inicioJuego == true){

        for(auto cuadros : frames){
            cuadros->draw();
        }

        if(jugador1.getDibujado() == true){
            jugador1.draw();
        }

        //=====================================================================================================
        //
        //                                   MODO DE JUEGO: TOUR MODE
        //
        //=====================================================================================================

        //-----------------------------------------------------------------------------------------------------
        //                                   PRIMER NIVEL
        //-----------------------------------------------------------------------------------------------------

        if(nivel == 1 || nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5 || nivel == 7 || tipoJuego == 2){

            // CONTADORES PRIMER NIVEL, DIBUJADO DE LAS PELOTAS Y DIBUJADO DE LOS BUFOS DEL PRIMER NIVEL
            if(ball1.getDibujado() == true){
                if(contador_SalidaBall1 <= 70){
                    contador_SalidaBall1 += 1;
                }
                ball1.draw();
                if(contador_Traslacion_PrimeraBola <= 60){
                    contador_Traslacion_PrimeraBola += 1;

                    if(contador_Traslacion_PrimeraBola == 15){
                        ball1.setY(1.1);
                    }
                    if(contador_Traslacion_PrimeraBola == 30){
                        ball1.setY(1.0);
                    }
                    if(contador_Traslacion_PrimeraBola == 45){
                        ball1.setY(0.9);
                    }
                    if(contador_Traslacion_PrimeraBola == 60){
                        ball1.setY(0.8);
                    }
                }else{
                    ball1.traslacion();
                }
            }

            if(ball1.getDibujado() == false){
                i += 1;
                if(ball2.getDibujado() != false){
                    ball2.draw();
                    ball2.traslacion();
                }
                if(ball3.getDibujado() != false){
                    ball3.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball3.traslacion();
                    }
                }
                if(bufoBall1 == 1){
                    if(dificultad == 1){
                        numeroRandom1 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom1 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom1 = rand() % 25;
                    }
                    bufoBall1++;
                }
                if(numeroRandom1 == 1){
                    if(bufoDobleDisparo1.getDibujado() != false){
                        bufoDobleDisparo1.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo1.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo1.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo1.traslacion();
                    }
                }else if(numeroRandom1 == 2){
                    if(bufoInvulnerabilidad1.getDibujado() != false){
                        bufoInvulnerabilidad1.draw();
                        bufoInvulnerabilidad1.traslacion();
                    }
                }
            }
            if(ball2.getDibujado() == false){
                i1 += 1;
                if(ball4.getDibujado() != false){
                    ball4.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball4.traslacion();
                    }
                }
                if(ball5.getDibujado() != false){
                    ball5.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball5.traslacion();
                    }
                }
                if(bufoBall2 == 1){
                    if(dificultad == 1){
                        numeroRandom2 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom2 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom2 = rand() % 25;
                    }
                    bufoBall2++;
                }
                if(numeroRandom2 == 1){
                    if(bufoDobleDisparo2.getDibujado() != false){
                        bufoDobleDisparo2.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo2.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo2.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo2.traslacion();
                    }
                }else if(numeroRandom2 == 2){
                    if(bufoInvulnerabilidad2.getDibujado() != false){
                        bufoInvulnerabilidad2.draw();
                        bufoInvulnerabilidad2.traslacion();
                    }
                }
            }
            if(ball3.getDibujado() == false){
                i2 += 1;
                if(ball6.getDibujado() != false){
                    ball6.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball6.traslacion();
                    }
                }
                if(ball7.getDibujado() != false){
                    ball7.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball7.traslacion();
                    }
                }
                if(bufoBall3 == 1){
                    if(dificultad == 1){
                        numeroRandom3 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom3 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom3 = rand() % 25;
                    }
                    bufoBall3++;
                }
                if(numeroRandom3 == 1){
                    if(bufoDobleDisparo3.getDibujado() != false){
                        bufoDobleDisparo3.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo3.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo3.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo3.traslacion();
                    }
                }else if(numeroRandom3 == 2){
                    if(bufoInvulnerabilidad3.getDibujado() != false){
                        bufoInvulnerabilidad3.draw();
                        bufoInvulnerabilidad3.traslacion();
                    }
                }
            }
            if(ball4.getDibujado() == false){
                i3 += 1;
                if(ball8.getDibujado() != false){
                    ball8.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball8.traslacion();
                    }
                }
                if(ball9.getDibujado() != false){
                    ball9.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball9.traslacion();
                    }
                }
            }
            if(ball5.getDibujado() == false){
                i4 += 1;
                if(ball10.getDibujado() != false){
                    ball10.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball10.traslacion();
                    }
                }
                if(ball11.getDibujado() != false){
                    ball11.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball11.traslacion();
                    }
                }
            }
            if(ball6.getDibujado() == false){
                i5 += 1;
                if(ball12.getDibujado() != false){
                    ball12.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball12.traslacion();
                    }
                }
                if(ball13.getDibujado() != false){
                    ball13.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball13.traslacion();
                    }
                }
            }
            if(ball7.getDibujado() == false){
                i6 += 1;
                if(ball14.getDibujado() != false){
                    ball14.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball14.traslacion();
                    }
                }
                if(ball15.getDibujado() != false){
                    ball15.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        ball15.traslacion();
                    }
                }
            }
        }

        //-----------------------------------------------------------------------------------------------------
        //                                    SEGUNDO NIVEL
        //-----------------------------------------------------------------------------------------------------

        // CONTADORES SEGUNDO NIVEL, DIBUJADO DE LAS PELOTAS Y DE LOS BUFOS DEL SEGUNDO NIVEL

        if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5 || tipoJuego == 2){

            if(tipoJuego == 2){
                if(aparece_BallNivel2 == true){
                    if(contador_SalidaBall2 <= 70){
                        contador_SalidaBall2 += 1;
                    }
                    if(nivel2Ball1.getDibujado() == true){
                        nivel2Ball1.draw();
                        if(contador_Traslacion_PrimeraBola_Nivel2 <= 60){
                            contador_Traslacion_PrimeraBola_Nivel2 += 1;

                            if(contador_Traslacion_PrimeraBola_Nivel2 == 15){
                                nivel2Ball1.setY(1.1);
                            }
                            if(contador_Traslacion_PrimeraBola_Nivel2 == 30){
                                nivel2Ball1.setY(1.0);
                            }
                            if(contador_Traslacion_PrimeraBola_Nivel2 == 45){
                                nivel2Ball1.setY(0.9);
                            }
                            if(contador_Traslacion_PrimeraBola_Nivel2 == 60){
                                nivel2Ball1.setY(0.8);
                            }
                        }else{
                            nivel2Ball1.traslacion();
                        }
                    }
                }
            }

            //CONTADOR PARA LA PRIMERA BOLA DEL SEGUNDO NIVEL
            if(tipoJuego == 1){
                if(ball1.getDibujado() == false && (ball2.getDibujado() == false || ball3.getDibujado() == false)){
                    if(contador_SalidaBall2 <= 70){
                        contador_SalidaBall2 += 1;
                    }
                    if(nivel2Ball1.getDibujado() == true){
                        nivel2Ball1.draw();
                        if(contador_Traslacion_PrimeraBola_Nivel2 <= 60){
                            contador_Traslacion_PrimeraBola_Nivel2 += 1;

                            if(contador_Traslacion_PrimeraBola_Nivel2 == 15){
                                nivel2Ball1.setY(1.1);
                            }
                            if(contador_Traslacion_PrimeraBola_Nivel2 == 30){
                                nivel2Ball1.setY(1.0);
                            }
                            if(contador_Traslacion_PrimeraBola_Nivel2 == 45){
                                nivel2Ball1.setY(0.9);
                            }
                            if(contador_Traslacion_PrimeraBola_Nivel2 == 60){
                                nivel2Ball1.setY(0.8);
                            }
                        }else{
                            nivel2Ball1.traslacion();
                        }
                    }
                }
            }

            if(nivel2Ball1.getDibujado() == false){
                in2 += 1;
                if(nivel2Ball2.getDibujado() != false){
                    nivel2Ball2.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball2.traslacion();
                    }
                }
                if(nivel2Ball3.getDibujado() != false){
                    nivel2Ball3.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball3.traslacion();
                    }
                }
                if(bufoBall1_Nivel2 == 1){
                    if(dificultad == 1){
                        numeroRandom1_Nivel2 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom1_Nivel2 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom1_Nivel2 = rand() % 25;
                    }
                    bufoBall1_Nivel2++;
                }
                if(numeroRandom1_Nivel2 == 1){
                    if(bufoDobleDisparo1_Nivel2.getDibujado() != false){
                        bufoDobleDisparo1_Nivel2.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo1_Nivel2.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo1_Nivel2.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo1_Nivel2.traslacion();
                    }
                }else if(numeroRandom1_Nivel2 == 2){
                    if(bufoInvulnerabilidad1_Nivel2.getDibujado() != false){
                        bufoInvulnerabilidad1_Nivel2.draw();
                        bufoInvulnerabilidad1_Nivel2.traslacion();
                    }
                }
            }
            if(nivel2Ball2.getDibujado() == false){
                i1n2 += 1;
                if(nivel2Ball4.getDibujado() != false){
                    nivel2Ball4.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball4.traslacion();
                    }
                }
                if(nivel2Ball5.getDibujado() != false){
                    nivel2Ball5.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball5.traslacion();
                    }
                }
                if(bufoBall2_Nivel2 == 1){
                    if(dificultad == 1){
                        numeroRandom2_Nivel2 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom2_Nivel2 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom2_Nivel2 = rand() % 25;
                    }
                    bufoBall2_Nivel2++;
                }
                if(numeroRandom2_Nivel2 == 1){
                    if(bufoDobleDisparo2_Nivel2.getDibujado() != false){
                        bufoDobleDisparo2_Nivel2.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo2_Nivel2.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo2_Nivel2.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo2_Nivel2.traslacion();
                    }
                }else if(numeroRandom2_Nivel2 == 2){
                    if(bufoInvulnerabilidad2_Nivel2.getDibujado() != false){
                        bufoInvulnerabilidad2_Nivel2.draw();
                        bufoInvulnerabilidad2_Nivel2.traslacion();
                    }
                }
            }
            if(nivel2Ball3.getDibujado() == false){
                i2n2 += 1;
                if(nivel2Ball6.getDibujado() != false){
                    nivel2Ball6.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball6.traslacion();
                    }
                }
                if(nivel2Ball7.getDibujado() != false){
                    nivel2Ball7.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball7.traslacion();
                    }
                }
                if(bufoBall3_Nivel2 == 1){
                    if(dificultad == 1){
                        numeroRandom3_Nivel2 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom3_Nivel2 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom3_Nivel2 = rand() % 25;
                    }
                    bufoBall3_Nivel2++;
                }
                if(numeroRandom3_Nivel2 == 1){
                    if(bufoDobleDisparo3_Nivel2.getDibujado() != false){
                        bufoDobleDisparo3_Nivel2.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo3_Nivel2.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo3_Nivel2.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo3_Nivel2.traslacion();
                    }
                }else if(numeroRandom3_Nivel2 == 2){
                    if(bufoInvulnerabilidad3_Nivel2.getDibujado() != false){
                        bufoInvulnerabilidad3_Nivel2.draw();
                        bufoInvulnerabilidad3_Nivel2.traslacion();
                    }
                }
            }
            if(nivel2Ball4.getDibujado() == false){
                i3n2 += 1;
                if(nivel2Ball8.getDibujado() != false){
                    nivel2Ball8.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball8.traslacion();
                    }
                }
                if(nivel2Ball9.getDibujado() != false){
                    nivel2Ball9.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball9.traslacion();
                    }
                }
            }
            if(nivel2Ball5.getDibujado() == false){
                i4n2 += 1;
                if(nivel2Ball10.getDibujado() != false){
                    nivel2Ball10.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball10.traslacion();
                    }
                }
                if(nivel2Ball11.getDibujado() != false){
                    nivel2Ball11.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball11.traslacion();
                    }
                }
            }
            if(nivel2Ball6.getDibujado() == false){
                i5n2 += 1;
                if(nivel2Ball12.getDibujado() != false){
                    nivel2Ball12.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball12.traslacion();
                    }
                }
                if(nivel2Ball13.getDibujado() != false){
                    nivel2Ball13.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball13.traslacion();
                    }
                }
            }
            if(nivel2Ball7.getDibujado() == false){
                i6n2 += 1;
                if(nivel2Ball14.getDibujado() != false){
                    nivel2Ball14.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball14.traslacion();
                    }
                }
                if(nivel2Ball15.getDibujado() != false){
                    nivel2Ball15.draw();
                    if(pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel2Ball15.traslacion();
                    }
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
                if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                    nivel3Ball2.traslacion();
                }
            }
            if(in3b2 >= 80 && nivel3Ball3.getDibujado() == true){
                nivel3Ball3.draw();
                if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                    nivel3Ball3.traslacion();
                }
            }
            if(in3b2 >= 80 && nivel3Ball4.getDibujado() == true){
                nivel3Ball4.draw();
                if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                    nivel3Ball4.traslacion();
                }
            }
            if(in3b2 >= 80 && nivel3Ball5.getDibujado() == true){
                nivel3Ball5.draw();
                if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                    nivel3Ball5.traslacion();
                }
            }
            if(nivel3Ball1.getDibujado() == false){
                in3 += 1;
                if(nivel3Ball6.getDibujado() != false){
                    nivel3Ball6.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball6.traslacion();
                    }
                }
                if(nivel3Ball7.getDibujado() != false){
                    nivel3Ball7.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball7.traslacion();
                    }
                }
                if(bufoBall1_Nivel3 == 1){
                    if(dificultad == 1){
                        numeroRandom1_Nivel3 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom1_Nivel3 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom1_Nivel3 = rand() % 25;
                    }
                    bufoBall1_Nivel3++;
                }
                if(numeroRandom1_Nivel3 == 1){
                    if(bufoDobleDisparo1_Nivel3.getDibujado() != false){
                        bufoDobleDisparo1_Nivel3.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo1_Nivel3.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo1_Nivel3.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo1_Nivel3.traslacion();
                    }
                }else if(numeroRandom1_Nivel3 == 2){
                    if(bufoInvulnerabilidad1_Nivel3.getDibujado() != false){
                        bufoInvulnerabilidad1_Nivel3.draw();
                        bufoInvulnerabilidad1_Nivel3.traslacion();
                    }
                }
            }
            if(nivel3Ball2.getDibujado() == false){
                i1n3 += 1;
                if(nivel3Ball8.getDibujado() != false){
                    nivel3Ball8.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball8.traslacion();
                    }
                }
                if(nivel3Ball9.getDibujado() != false){
                    nivel3Ball9.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball9.traslacion();
                    }
                }
                if(bufoBall2_Nivel3 == 1){
                    if(dificultad == 1){
                        numeroRandom2_Nivel3 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom2_Nivel3 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom2_Nivel3 = rand() % 25;
                    }
                    bufoBall2_Nivel3++;
                }
                if(numeroRandom2_Nivel3 == 1){
                    if(bufoDobleDisparo2_Nivel3.getDibujado() != false){
                        bufoDobleDisparo2_Nivel3.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo2_Nivel3.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo2_Nivel3.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo2_Nivel3.traslacion();
                    }
                }else if(numeroRandom2_Nivel3 == 2){
                    if(bufoInvulnerabilidad2_Nivel3.getDibujado() != false){
                        bufoInvulnerabilidad2_Nivel3.draw();
                        bufoInvulnerabilidad2_Nivel3.traslacion();
                    }
                }
            }
            if(nivel3Ball3.getDibujado() == false){
                i2n3 += 1;
                if(nivel3Ball10.getDibujado() != false){
                    nivel3Ball10.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball10.traslacion();
                    }
                }
                if(nivel3Ball11.getDibujado() != false){
                    nivel3Ball11.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball11.traslacion();
                    }
                }
                if(bufoBall3_Nivel3 == 1){
                    if(dificultad == 1){
                        numeroRandom3_Nivel3 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom3_Nivel3 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom3_Nivel3 = rand() % 25;
                    }
                    bufoBall3_Nivel3++;
                }
                if(numeroRandom3_Nivel3 == 1){
                    if(bufoDobleDisparo3_Nivel3.getDibujado() != false){
                        bufoDobleDisparo3_Nivel3.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo3_Nivel3.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo3_Nivel3.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo3_Nivel3.traslacion();
                    }
                }else if(numeroRandom3_Nivel3 == 2){
                    if(bufoInvulnerabilidad3_Nivel3.getDibujado() != false){
                        bufoInvulnerabilidad3_Nivel3.draw();
                        bufoInvulnerabilidad3_Nivel3.traslacion();
                    }
                }
            }
            if(nivel3Ball4.getDibujado() == false){
                i3n3 += 1;
                if(nivel3Ball12.getDibujado() != false){
                    nivel3Ball12.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball12.traslacion();
                    }
                }
                if(nivel3Ball13.getDibujado() != false){
                    nivel3Ball13.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball13.traslacion();
                    }
                }
                if(bufoBall4_Nivel3 == 1){
                    if(dificultad == 1){
                        numeroRandom4_Nivel3 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom4_Nivel3 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom4_Nivel3 = rand() % 25;
                    }
                    bufoBall4_Nivel3++;
                }
                if(numeroRandom4_Nivel3 == 1){
                    if(bufoDobleDisparo4_Nivel3.getDibujado() != false){
                        bufoDobleDisparo4_Nivel3.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo4_Nivel3.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo4_Nivel3.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo4_Nivel3.traslacion();
                    }
                }else if(numeroRandom4_Nivel3 == 2){
                    if(bufoInvulnerabilidad4_Nivel3.getDibujado() != false){
                        bufoInvulnerabilidad4_Nivel3.draw();
                        bufoInvulnerabilidad4_Nivel3.traslacion();
                    }
                }
            }
            if(nivel3Ball5.getDibujado() == false){
                i4n3 += 1;
                if(nivel3Ball14.getDibujado() != false){
                    nivel3Ball14.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball14.traslacion();
                    }
                }
                if(nivel3Ball15.getDibujado() != false){
                    nivel3Ball15.draw();
                    if(pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
                        nivel3Ball15.traslacion();
                    }
                }
                if(bufoBall5_Nivel3 == 1){
                    if(dificultad == 1){
                        numeroRandom5_Nivel3 = rand() % 10;
                    }else if(dificultad == 2){
                        numeroRandom5_Nivel3 = rand() % 20;
                    }else if(dificultad == 3){
                        numeroRandom5_Nivel3 = rand() % 25;
                    }
                    bufoBall5_Nivel3++;
                }
                if(numeroRandom5_Nivel3 == 1){
                    if(bufoDobleDisparo5_Nivel3.getDibujado() != false){
                        bufoDobleDisparo5_Nivel3.drawBufoDobleDisparoParteI();
                        bufoDobleDisparo5_Nivel3.drawBufoDobleDisparoParteII();
                        bufoDobleDisparo5_Nivel3.drawBufoDobleDisparoParteIII();
                        bufoDobleDisparo5_Nivel3.traslacion();
                    }
                }else if(numeroRandom5_Nivel3 == 2){
                    if(bufoInvulnerabilidad5_Nivel3.getDibujado() != false){
                        bufoInvulnerabilidad5_Nivel3.draw();
                        bufoInvulnerabilidad5_Nivel3.traslacion();
                    }
                }
            }
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   CUARTO NIVEL
        //-----------------------------------------------------------------------------------------------------

        //MAQUINA CUARTO NIVEL
        if(nivel == 4 || nivel == 5){

            //CONTADOR DE LA MAQUINA
            in4 += 1;

            if(in4 > 300){
                in4 = 0;
            }

            //DIBUJADO DE LA MAQUINA Y DEL DISPARO
            maquina.draw();
            if(pelotasParadas_RelojNivel4 != true){
                maquina.traslacion();
            }

            float xm = maquina.getX();
            float ym = maquina.getY();
            float xdm, ydm;

            if(in4 == 300){
                if(pelotasParadas_RelojNivel4 != true){
                    disparoMaquina.push_back(new Disparo{0.020, xm, ym, -0.05, 0, {1.0, 0.0, 0.0}});
                }
            }

            for(auto disparo : disparoMaquina){
                disparo->draw();
                disparo->traslacion();
                xdm = disparo->getX();
                ydm = disparo->getY();
            }

            if(jugador1.getColor() != color2){
                if(jugador1.distance(xdm, ydm) <= 0.06 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
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
                if(jugador1.distance(rayo1.getXDAB(),rayo1.getYDAB()) <= 0.06 && rayo1.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }else if(jugador1.distance(rayo2.getXDAB(),rayo2.getYDAB()) <= 0.06 && rayo2.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }else if(jugador1.distance(rayo3.getXDAB(),rayo3.getYDAB()) <= 0.06 && rayo3.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }else if(jugador1.distance(rayo4.getXDAB(),rayo4.getYDAB()) <= 0.06 && rayo4.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }else if(jugador1.distance(rayo1.getXIAB(),rayo1.getYIAB()) <= 0.06 && rayo1.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }else if(jugador1.distance(rayo2.getXIAB(),rayo2.getYIAB()) <= 0.06 && rayo2.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }else if(jugador1.distance(rayo3.getXIAB(),rayo3.getYIAB()) <= 0.06 && rayo3.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }else if(jugador1.distance(rayo4.getXIAB(),rayo4.getYIAB()) <= 0.06 && rayo4.getColor() == color1 && jugador1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   SEXTO NIVEL
        //-----------------------------------------------------------------------------------------------------
        if(nivel == 6 || nivel == 8 || tipoJuego == 2){
            if(tipoJuego == 2){
                if(aparece_HexagonoGrande1 == true){
                    if(contador_SalidaHexagonoGrande1 <= 70){
                        contador_SalidaHexagonoGrande1 += 1;
                    }
                    if(hexagonoGrande1.getDibujado() == true){
                        hexagonoGrande1.draw();
                        if(contador_Traslacion_HexagonoGrande1 <= 60){
                            contador_Traslacion_HexagonoGrande1 += 1;
                            if(contador_Traslacion_HexagonoGrande1 == 15){
                                hexagonoGrande1.setY(1.1);
                            }
                            if(contador_Traslacion_HexagonoGrande1 == 30){
                                hexagonoGrande1.setY(1.0);
                            }
                            if(contador_Traslacion_HexagonoGrande1 == 45){
                                hexagonoGrande1.setY(0.9);
                            }
                            if(contador_Traslacion_HexagonoGrande1 == 60){
                                hexagonoGrande1.setY(0.8);
                            }
                        }else{
                            hexagonoGrande1.traslacion();
                        }
                    }
                }

                if(aparece_HexagonoGrande2 == true){
                    if(contador_SalidaHexagonoGrande2 <= 70){
                        contador_SalidaHexagonoGrande2 += 1;
                    }
                    if(hexagonoGrande2.getDibujado() == true){
                        hexagonoGrande2.draw();
                        if(contador_Traslacion_HexagonoGrande2 <= 60){
                            contador_Traslacion_HexagonoGrande2 += 1;
                            if(contador_Traslacion_HexagonoGrande2 == 15){
                                hexagonoGrande2.setY(1.1);
                            }
                            if(contador_Traslacion_HexagonoGrande2 == 30){
                                hexagonoGrande2.setY(1.0);
                            }
                            if(contador_Traslacion_HexagonoGrande2 == 45){
                                hexagonoGrande2.setY(0.9);
                            }
                            if(contador_Traslacion_HexagonoGrande2 == 60){
                                hexagonoGrande2.setY(0.8);
                            }
                        }else{
                            hexagonoGrande2.traslacion();
                        }
                    }
                }
            }else if(tipoJuego == 1){
                if(contador_SalidaHexagonoGrande1 <= 70){
                    contador_SalidaHexagonoGrande1 += 1;
                }
                if(hexagonoGrande1.getDibujado() == true){
                    hexagonoGrande1.draw();
                    if(contador_Traslacion_HexagonoGrande1 <= 60){
                        contador_Traslacion_HexagonoGrande1 += 1;
                        if(contador_Traslacion_HexagonoGrande1 == 15){
                            hexagonoGrande1.setY(1.1);
                        }
                        if(contador_Traslacion_HexagonoGrande1 == 30){
                            hexagonoGrande1.setY(1.0);
                        }
                        if(contador_Traslacion_HexagonoGrande1 == 45){
                            hexagonoGrande1.setY(0.9);
                        }
                        if(contador_Traslacion_HexagonoGrande1 == 60){
                            hexagonoGrande1.setY(0.8);
                        }
                    }else{
                        hexagonoGrande1.traslacion();
                    }
                }

                if(contador_SalidaHexagonoGrande2 <= 70){
                    contador_SalidaHexagonoGrande2 += 1;
                }
                if(hexagonoGrande2.getDibujado() == true){
                    hexagonoGrande2.draw();
                    if(contador_Traslacion_HexagonoGrande2 <= 60){
                        contador_Traslacion_HexagonoGrande2 += 1;
                        if(contador_Traslacion_HexagonoGrande2 == 15){
                            hexagonoGrande2.setY(1.1);
                        }
                        if(contador_Traslacion_HexagonoGrande2 == 30){
                            hexagonoGrande2.setY(1.0);
                        }
                        if(contador_Traslacion_HexagonoGrande2 == 45){
                            hexagonoGrande2.setY(0.9);
                        }
                        if(contador_Traslacion_HexagonoGrande2 == 60){
                            hexagonoGrande2.setY(0.8);
                        }
                    }else{
                        hexagonoGrande2.traslacion();
                    }
                }
            }

            if(hexagonoGrande1.getDibujado() == false){
                if(contador_nivel6_hexagonoGrande1 <= 20){
                    contador_nivel6_hexagonoGrande1 += 1;
                }
                if(hexagono1.getDibujado() != false){
                    hexagono1.draw();
                    hexagono1.traslacion();
                }
                if(hexagono2.getDibujado() != false){
                    hexagono2.draw();
                    hexagono2.traslacion();
                }
            }

            if(hexagonoGrande2.getDibujado() == false){
                if(contador_nivel6_hexagonoGrande2 <= 20){
                    contador_nivel6_hexagonoGrande2 += 1;
                }
                if(hexagono3.getDibujado() != false){
                    hexagono3.draw();
                    hexagono3.traslacion();
                }
                if(hexagono4.getDibujado() != false){
                    hexagono4.draw();
                    hexagono4.traslacion();
                }
            }

            if(hexagono1.getDibujado() == false){
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

            if(hexagono2.getDibujado() == false){
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


            if(hexagono3.getDibujado() == false){
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

            if(hexagono4.getDibujado() == false){
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
        }

        /*
        //-----------------------------------------------------------------------------------------------------
        //                                   SEPTIMO NIVEL
        //-----------------------------------------------------------------------------------------------------

        if(nivel == 7){
            plataforma1_Nivel7.draw();
            plataforma2_Nivel7.draw();

            if(ball1.getBallXmax() >= plataforma1_Nivel7.getX() && plataforma1_Nivel7.getXmax() >= ball1.getX()
                    && ball1.getBallYmax() >= plataforma1_Nivel7.getY() && plataforma1_Nivel7.getYmax() >= ball1.getY()){
                ball1.setXv(velocidad_EjeX_Ball1);
                ball1.setYv(velocidad_EjeY_Ball1);
            }
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   OCTAVO NIVEL
        //-----------------------------------------------------------------------------------------------------

        if(nivel == 8){
            plataforma1_Nivel8.draw();
            plataforma2_Nivel8.draw();
            plataforma3_Nivel8.draw();
            plataforma4_Nivel8.draw();
        }
        */

        //-----------------------------------------------------------------------------------------------------
        //                                   CALCULOS Y MOVIMIENTOS DE LOS ELEMENTOS
        //-----------------------------------------------------------------------------------------------------

        for(auto elem : disparoJugador){
            x = elem->getX();
            y = elem->getY();
            elem->draw();
            elem->traslacion();

            // Primer nivel
            if(nivel == 1 || nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5 || nivel == 7 || tipoJuego == 2){
                if(contador_SalidaBall1 >= 70){
                    if(ball1.distance(x,y) <= 0.15 && ball1.getDibujado() != false){
                        ball1.setDibujado(false);
                        ball2.setX(ball1.getX());
                        ball2.setY(ball1.getY());
                        ball3.setX(ball1.getX());
                        ball3.setY(ball1.getY());
                        pelotasDestruidas++;
                        bufoBall1++;
                        bufoDobleDisparo1.setX(ball1.getX());
                        bufoDobleDisparo1.setY(ball1.getY());
                        bufoDobleDisparo1.setXb1(ball1.getX() - 0.01);
                        bufoDobleDisparo1.setYb1(ball1.getY() - 0.01);
                        bufoDobleDisparo1.setXb2(ball1.getX() + 0.01);
                        bufoDobleDisparo1.setYb2(ball1.getY() + 0.01);
                        bufoInvulnerabilidad1.setX(ball1.getX());
                        bufoInvulnerabilidad1.setY(ball1.getY());
                        puntuacion_Total += 800;
                    }
                }
                if(i >= 20){
                    if(ball2.distance(x,y) <= 0.13 && ball2.getDibujado() != false){
                        ball2.setDibujado(false);
                        ball4.setX(ball2.getX());
                        ball4.setY(ball2.getY());
                        ball5.setX(ball2.getX());
                        ball5.setY(ball2.getY());
                        pelotasDestruidas++;
                        bufoBall2++;
                        bufoDobleDisparo2.setX(ball2.getX());
                        bufoDobleDisparo2.setY(ball2.getY());
                        bufoDobleDisparo2.setXb1(ball2.getX() - 0.01);
                        bufoDobleDisparo2.setYb1(ball2.getY() - 0.01);
                        bufoDobleDisparo2.setXb2(ball2.getX() + 0.01);
                        bufoDobleDisparo2.setYb2(ball2.getY() + 0.01);
                        bufoInvulnerabilidad2.setX(ball2.getX());
                        bufoInvulnerabilidad2.setY(ball2.getY());
                        puntuacion_Total += 600;
                    }
                    if(ball3.distance(x,y) <= 0.13 && ball3.getDibujado() != false){
                        ball3.setDibujado(false);
                        ball6.setX(ball3.getX());
                        ball6.setY(ball3.getY());
                        ball7.setX(ball3.getX());
                        ball7.setY(ball3.getY());
                        pelotasDestruidas++;
                        bufoBall3++;
                        bufoDobleDisparo3.setX(ball3.getX());
                        bufoDobleDisparo3.setY(ball3.getY());
                        bufoDobleDisparo3.setXb1(ball3.getX() - 0.01);
                        bufoDobleDisparo3.setYb1(ball3.getY() - 0.01);
                        bufoDobleDisparo3.setXb2(ball3.getX() + 0.01);
                        bufoDobleDisparo3.setYb2(ball3.getY() + 0.01);
                        bufoInvulnerabilidad3.setX(ball3.getX());
                        bufoInvulnerabilidad3.setY(ball3.getY());
                        puntuacion_Total += 600;
                    }
                }
                if(i1 >= 20){
                    if(ball4.distance(x,y) <= 0.09 && ball4.getDibujado() != false){
                        ball4.setDibujado(false);
                        ball8.setX(ball4.getX());
                        ball8.setY(ball4.getY());
                        ball9.setX(ball4.getX());
                        ball9.setY(ball4.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(ball5.distance(x,y) <= 0.09 && ball5.getDibujado() != false){
                        ball5.setDibujado(false);
                        ball10.setX(ball5.getX());
                        ball10.setY(ball5.getY());
                        ball11.setX(ball5.getX());
                        ball11.setY(ball5.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i2 >= 20){
                    if(ball6.distance(x,y) <= 0.09 && ball6.getDibujado() != false){
                        ball6.setDibujado(false);
                        ball12.setX(ball6.getX());
                        ball12.setY(ball6.getY());
                        ball13.setX(ball6.getX());
                        ball13.setY(ball6.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }

                    if(ball7.distance(x,y) <= 0.09 && ball7.getDibujado() != false){
                        ball7.setDibujado(false);
                        ball14.setX(ball7.getX());
                        ball14.setY(ball7.getY());
                        ball15.setX(ball7.getX());
                        ball15.setY(ball7.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i3 >= 20){
                    if(ball8.distance(x,y) <= 0.06 && ball8.getDibujado() != false){
                        ball8.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(ball9.distance(x,y) <= 0.06 && ball9.getDibujado() != false){
                        ball9.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
                if(i4 >= 20){
                    if(ball10.distance(x,y) <= 0.06 && ball10.getDibujado() != false){
                        ball10.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(ball11.distance(x,y) <= 0.06 && ball11.getDibujado() != false){
                        ball11.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
                if(i5 >= 20){
                    if(ball12.distance(x,y) <= 0.06 && ball12.getDibujado() != false){
                        ball12.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(ball13.distance(x,y) <= 0.06 && ball13.getDibujado() != false){
                        ball13.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
                if(i6 >= 20){
                    if(ball14.distance(x,y) <= 0.06 && ball14.getDibujado() != false){
                        ball14.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(ball15.distance(x,y) <= 0.06 && ball15.getDibujado() != false){
                        ball15.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
            }

            // SEGUNDO NIVEL
            if(nivel == 2 || nivel == 3 || nivel == 4 || nivel == 5 || tipoJuego == 2){
                if(contador_SalidaBall2 >= 70){
                    if(nivel2Ball1.distance(x,y) <= 0.15 && nivel2Ball1.getDibujado() != false){
                        nivel2Ball1.setDibujado(false);
                        nivel2Ball2.setX(nivel2Ball1.getX());
                        nivel2Ball2.setY(nivel2Ball1.getY());
                        nivel2Ball3.setX(nivel2Ball1.getX());
                        nivel2Ball3.setY(nivel2Ball1.getY());
                        pelotasDestruidas++;
                        bufoBall1_Nivel2++;
                        bufoDobleDisparo1_Nivel2.setX(nivel2Ball1.getX());
                        bufoDobleDisparo1_Nivel2.setY(nivel2Ball1.getY());
                        bufoDobleDisparo1_Nivel2.setXb1(nivel2Ball1.getX() - 0.01);
                        bufoDobleDisparo1_Nivel2.setYb1(nivel2Ball1.getY() - 0.01);
                        bufoDobleDisparo1_Nivel2.setXb2(nivel2Ball1.getX() + 0.01);
                        bufoDobleDisparo1_Nivel2.setYb2(nivel2Ball1.getY() + 0.01);
                        bufoInvulnerabilidad1_Nivel2.setX(nivel2Ball1.getX());
                        bufoInvulnerabilidad1_Nivel2.setY(nivel2Ball1.getY());
                        puntuacion_Total += 800;
                    }
                }
                if(in2 >= 20){
                    if(nivel2Ball2.distance(x,y) <= 0.13 && nivel2Ball2.getDibujado() != false){
                        nivel2Ball2.setDibujado(false);
                        nivel2Ball4.setX(nivel2Ball2.getX());
                        nivel2Ball4.setY(nivel2Ball2.getY());
                        nivel2Ball5.setX(nivel2Ball2.getX());
                        nivel2Ball5.setY(nivel2Ball2.getY());
                        pelotasDestruidas++;
                        bufoBall2_Nivel2++;
                        bufoDobleDisparo2_Nivel2.setX(nivel2Ball2.getX());
                        bufoDobleDisparo2_Nivel2.setY(nivel2Ball2.getY());
                        bufoDobleDisparo2_Nivel2.setXb1(nivel2Ball2.getX() - 0.01);
                        bufoDobleDisparo2_Nivel2.setYb1(nivel2Ball2.getY() - 0.01);
                        bufoDobleDisparo2_Nivel2.setXb2(nivel2Ball2.getX() + 0.01);
                        bufoDobleDisparo2_Nivel2.setYb2(nivel2Ball2.getY() + 0.01);
                        bufoInvulnerabilidad2_Nivel2.setX(nivel2Ball2.getX());
                        bufoInvulnerabilidad2_Nivel2.setY(nivel2Ball2.getY());
                        puntuacion_Total += 600;
                    }
                    if(nivel2Ball3.distance(x,y) <= 0.13 && nivel2Ball3.getDibujado() != false){
                        nivel2Ball3.setDibujado(false);
                        nivel2Ball6.setX(nivel2Ball3.getX());
                        nivel2Ball6.setY(nivel2Ball3.getY());
                        nivel2Ball7.setX(nivel2Ball3.getX());
                        nivel2Ball7.setY(nivel2Ball3.getY());
                        pelotasDestruidas++;
                        bufoBall3_Nivel2++;
                        bufoDobleDisparo3_Nivel2.setX(nivel2Ball3.getX());
                        bufoDobleDisparo3_Nivel2.setY(nivel2Ball3.getY());
                        bufoDobleDisparo3_Nivel2.setXb1(nivel2Ball3.getX() - 0.01);
                        bufoDobleDisparo3_Nivel2.setYb1(nivel2Ball3.getY() - 0.01);
                        bufoDobleDisparo3_Nivel2.setXb2(nivel2Ball3.getX() + 0.01);
                        bufoDobleDisparo3_Nivel2.setYb2(nivel2Ball3.getY() + 0.01);
                        bufoInvulnerabilidad3_Nivel2.setX(nivel2Ball3.getX());
                        bufoInvulnerabilidad3_Nivel2.setY(nivel2Ball3.getY());
                        puntuacion_Total += 600;
                    }
                }
                if(i1n2 >= 20){
                    if(nivel2Ball4.distance(x,y) <= 0.09 && nivel2Ball4.getDibujado() != false){
                        nivel2Ball4.setDibujado(false);
                        nivel2Ball8.setX(nivel2Ball4.getX());
                        nivel2Ball8.setY(nivel2Ball4.getY());
                        nivel2Ball9.setX(nivel2Ball4.getX());
                        nivel2Ball9.setY(nivel2Ball4.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(nivel2Ball5.distance(x,y) <= 0.09 && nivel2Ball5.getDibujado() != false){
                        nivel2Ball5.setDibujado(false);
                        nivel2Ball10.setX(nivel2Ball5.getX());
                        nivel2Ball10.setY(nivel2Ball5.getY());
                        nivel2Ball11.setX(nivel2Ball5.getX());
                        nivel2Ball11.setY(nivel2Ball5.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i2n2 >= 20){
                    if(nivel2Ball6.distance(x,y) <= 0.09 && nivel2Ball6.getDibujado() != false){
                        nivel2Ball6.setDibujado(false);
                        nivel2Ball12.setX(nivel2Ball6.getX());
                        nivel2Ball12.setY(nivel2Ball6.getY());
                        nivel2Ball13.setX(nivel2Ball6.getX());
                        nivel2Ball13.setY(nivel2Ball6.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(nivel2Ball7.distance(x,y) <= 0.09 && nivel2Ball7.getDibujado() != false){
                        nivel2Ball7.setDibujado(false);
                        nivel2Ball14.setX(nivel2Ball7.getX());
                        nivel2Ball14.setY(nivel2Ball7.getY());
                        nivel2Ball15.setX(nivel2Ball7.getX());
                        nivel2Ball15.setY(nivel2Ball7.getY());
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i3n2 >= 20){
                    if(nivel2Ball8.distance(x,y) <= 0.06 && nivel2Ball8.getDibujado() != false){
                        nivel2Ball8.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(nivel2Ball9.distance(x,y) <= 0.06 && nivel2Ball9.getDibujado() != false){
                        nivel2Ball9.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
                if(i4n2 >= 20){
                    if(nivel2Ball10.distance(x,y) <= 0.06 && nivel2Ball10.getDibujado() != false){
                        nivel2Ball10.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(nivel2Ball11.distance(x,y) <= 0.06 && nivel2Ball11.getDibujado() != false){
                        nivel2Ball11.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
                if(i5n2 >= 20){
                    if(nivel2Ball12.distance(x,y) <= 0.06 && nivel2Ball12.getDibujado() != false){
                        nivel2Ball12.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(nivel2Ball13.distance(x,y) <= 0.06 && nivel2Ball13.getDibujado() != false){
                        nivel2Ball13.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
                if(i6n2 >= 20){
                    if(nivel2Ball14.distance(x,y) <= 0.06 && nivel2Ball14.getDibujado() != false){
                        nivel2Ball14.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                    if(nivel2Ball15.distance(x,y) <= 0.06 && nivel2Ball15.getDibujado() != false){
                        nivel2Ball15.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 200;
                    }
                }
            }

            //TERCER NIVEL
            if(nivel == 3 || nivel == 4){
                if(in3b1 >= 80){
                    if(nivel3Ball1.distance(x,y) <= 0.09 && nivel3Ball1.getDibujado() != false){
                        nivel3Ball1.setDibujado(false);
                        nivel3Ball6.setX(nivel3Ball1.getX());
                        nivel3Ball6.setY(nivel3Ball1.getY());
                        nivel3Ball7.setX(nivel3Ball1.getX());
                        nivel3Ball7.setY(nivel3Ball1.getY());
                        pelotasDestruidas++;
                        bufoBall1_Nivel3++;
                        bufoDobleDisparo1_Nivel3.setX(nivel3Ball1.getX());
                        bufoDobleDisparo1_Nivel3.setY(nivel3Ball1.getY());
                        bufoDobleDisparo1_Nivel3.setXb1(nivel3Ball1.getX() - 0.01);
                        bufoDobleDisparo1_Nivel3.setYb1(nivel3Ball1.getY() - 0.01);
                        bufoDobleDisparo1_Nivel3.setXb2(nivel3Ball1.getX() + 0.01);
                        bufoDobleDisparo1_Nivel3.setYb2(nivel3Ball1.getY() + 0.01);
                        bufoInvulnerabilidad1_Nivel3.setX(nivel3Ball1.getX());
                        bufoInvulnerabilidad1_Nivel3.setY(nivel3Ball1.getY());
                        puntuacion_Total += 800;
                    }
                }
                if(in3b1 >= 80){
                    if(nivel3Ball2.distance(x,y) <= 0.09 && nivel3Ball2.getDibujado() != false){
                        nivel3Ball2.setDibujado(false);
                        nivel3Ball8.setX(nivel3Ball2.getX());
                        nivel3Ball8.setY(nivel3Ball2.getY());
                        nivel3Ball9.setX(nivel3Ball2.getX());
                        nivel3Ball9.setY(nivel3Ball2.getY());
                        pelotasDestruidas++;
                        bufoBall2_Nivel3++;
                        bufoDobleDisparo2_Nivel3.setX(nivel3Ball2.getX());
                        bufoDobleDisparo2_Nivel3.setY(nivel3Ball2.getY());
                        bufoDobleDisparo2_Nivel3.setXb1(nivel3Ball2.getX() - 0.01);
                        bufoDobleDisparo2_Nivel3.setYb1(nivel3Ball2.getY() - 0.01);
                        bufoDobleDisparo2_Nivel3.setXb2(nivel3Ball2.getX() + 0.01);
                        bufoDobleDisparo2_Nivel3.setYb2(nivel3Ball2.getY() + 0.01);
                        bufoInvulnerabilidad2_Nivel3.setX(nivel3Ball2.getX());
                        bufoInvulnerabilidad2_Nivel3.setY(nivel3Ball2.getY());
                        puntuacion_Total += 800;
                    }
                }
                if(in3b2 >= 80){
                    if(nivel3Ball3.distance(x,y) <= 0.09 && nivel3Ball3.getDibujado() != false){
                        nivel3Ball3.setDibujado(false);
                        nivel3Ball10.setX(nivel3Ball3.getX());
                        nivel3Ball10.setY(nivel3Ball3.getY());
                        nivel3Ball11.setX(nivel3Ball3.getX());
                        nivel3Ball11.setY(nivel3Ball3.getY());
                        pelotasDestruidas++;
                        bufoBall3_Nivel3++;
                        bufoDobleDisparo3_Nivel3.setX(nivel3Ball3.getX());
                        bufoDobleDisparo3_Nivel3.setY(nivel3Ball3.getY());
                        bufoDobleDisparo3_Nivel3.setXb1(nivel3Ball3.getX() - 0.01);
                        bufoDobleDisparo3_Nivel3.setYb1(nivel3Ball3.getY() - 0.01);
                        bufoDobleDisparo3_Nivel3.setXb2(nivel3Ball3.getX() + 0.01);
                        bufoDobleDisparo3_Nivel3.setYb2(nivel3Ball3.getY() + 0.01);
                        bufoInvulnerabilidad3_Nivel3.setX(nivel3Ball3.getX());
                        bufoInvulnerabilidad3_Nivel3.setY(nivel3Ball3.getY());
                        puntuacion_Total += 800;
                    }
                }
                if(in3b2 >= 80){
                    if(nivel3Ball4.distance(x,y) <= 0.09 && nivel3Ball4.getDibujado() != false){
                        nivel3Ball4.setDibujado(false);
                        nivel3Ball12.setX(nivel3Ball4.getX());
                        nivel3Ball12.setY(nivel3Ball4.getY());
                        nivel3Ball13.setX(nivel3Ball4.getX());
                        nivel3Ball13.setY(nivel3Ball4.getY());
                        pelotasDestruidas++;
                        bufoBall4_Nivel3++;
                        bufoDobleDisparo4_Nivel3.setX(nivel3Ball4.getX());
                        bufoDobleDisparo4_Nivel3.setY(nivel3Ball4.getY());
                        bufoDobleDisparo4_Nivel3.setXb1(nivel3Ball4.getX() - 0.01);
                        bufoDobleDisparo4_Nivel3.setYb1(nivel3Ball4.getY() - 0.01);
                        bufoDobleDisparo4_Nivel3.setXb2(nivel3Ball4.getX() + 0.01);
                        bufoDobleDisparo4_Nivel3.setYb2(nivel3Ball4.getY() + 0.01);
                        bufoInvulnerabilidad4_Nivel3.setX(nivel3Ball4.getX());
                        bufoInvulnerabilidad4_Nivel3.setY(nivel3Ball4.getY());
                        puntuacion_Total += 800;
                    }
                }
                if(in3b2 >= 80){
                    if(nivel3Ball5.distance(x,y) <= 0.09 && nivel3Ball5.getDibujado() != false){
                        nivel3Ball5.setDibujado(false);
                        nivel3Ball14.setX(nivel3Ball5.getX());
                        nivel3Ball14.setY(nivel3Ball5.getY());
                        nivel3Ball15.setX(nivel3Ball5.getX());
                        nivel3Ball15.setY(nivel3Ball5.getY());
                        pelotasDestruidas++;
                        bufoBall5_Nivel3++;
                        bufoDobleDisparo5_Nivel3.setX(nivel3Ball5.getX());
                        bufoDobleDisparo5_Nivel3.setY(nivel3Ball5.getY());
                        bufoDobleDisparo5_Nivel3.setXb1(nivel3Ball5.getX() - 0.01);
                        bufoDobleDisparo5_Nivel3.setYb1(nivel3Ball5.getY() - 0.01);
                        bufoDobleDisparo5_Nivel3.setXb2(nivel3Ball5.getX() + 0.01);
                        bufoDobleDisparo5_Nivel3.setYb2(nivel3Ball5.getY() + 0.01);
                        bufoInvulnerabilidad5_Nivel3.setX(nivel3Ball5.getX());
                        bufoInvulnerabilidad5_Nivel3.setY(nivel3Ball5.getY());
                        puntuacion_Total += 800;
                    }
                }
                if(in3 >= 20){
                    if(nivel3Ball6.distance(x,y) <= 0.06 && nivel3Ball6.getDibujado() != false){
                        nivel3Ball6.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(nivel3Ball7.distance(x,y) <= 0.06 && nivel3Ball7.getDibujado() != false){
                        nivel3Ball7.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i1n3 >= 20){
                    if(nivel3Ball8.distance(x,y) <= 0.06 && nivel3Ball8.getDibujado() != false){
                        nivel3Ball8.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(nivel3Ball9.distance(x,y) <= 0.06 && nivel3Ball9.getDibujado() != false){
                        nivel3Ball9.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i2n3 >= 20){
                    if(nivel3Ball10.distance(x,y) <= 0.06 && nivel3Ball10.getDibujado() != false){
                        nivel3Ball10.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(nivel3Ball11.distance(x,y) <= 0.06 && nivel3Ball11.getDibujado() != false){
                        nivel3Ball11.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i3n3 >= 20){
                    if(nivel3Ball12.distance(x,y) <= 0.06 && nivel3Ball12.getDibujado() != false){
                        nivel3Ball12.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(nivel3Ball13.distance(x,y) <= 0.06 && nivel3Ball13.getDibujado() != false){
                        nivel3Ball13.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
                if(i4n3 >= 20){
                    if(nivel3Ball14.distance(x,y) <= 0.06 && nivel3Ball14.getDibujado() != false){
                        nivel3Ball14.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                    if(nivel3Ball15.distance(x,y) <= 0.06 && nivel3Ball15.getDibujado() != false){
                        nivel3Ball15.setDibujado(false);
                        pelotasDestruidas++;
                        puntuacion_Total += 400;
                    }
                }
            }

            //SEXTO NIVEL
            if(nivel == 6 || nivel == 8 || tipoJuego == 2){
                if(contador_SalidaHexagonoGrande1 >= 70){
                    if(hexagonoGrande1.distance(x,y) <= 0.09 && hexagonoGrande1.getDibujado() !=false){
                        hexagonoGrande1.setDibujado(false);
                        hexagono1.setX(hexagonoGrande1.getX());
                        hexagono1.setY(hexagonoGrande1.getY());
                        hexagono2.setX(hexagonoGrande1.getX());
                        hexagono2.setY(hexagonoGrande1.getY());
                        hexagonosDestruidos++;
                        puntuacion_Total += 1500;
                    }
                }

                if(contador_SalidaHexagonoGrande2 >= 70){
                    if(hexagonoGrande2.distance(x,y) <= 0.09 && hexagonoGrande2.getDibujado() != false){
                        hexagonoGrande2.setDibujado(false);
                        hexagono3.setX(hexagonoGrande2.getX());
                        hexagono3.setY(hexagonoGrande2.getY());
                        hexagono4.setX(hexagonoGrande2.getX());
                        hexagono4.setY(hexagonoGrande2.getY());
                        hexagonosDestruidos++;
                        puntuacion_Total += 1500;
                    }
                }

                if(contador_nivel6_hexagonoGrande1 >= 20){
                    if(hexagono1.distance(x,y) <= 0.06 && hexagono1.getDibujado() != false){
                        hexagono1.setDibujado(false);
                        hexagono5.setX(hexagono1.getX());
                        hexagono5.setY(hexagono1.getY());
                        hexagono6.setX(hexagono1.getX());
                        hexagono6.setY(hexagono1.getY());
                        hexagonosDestruidos++;
                        puntuacion_Total += 1000;
                    }

                    if(hexagono2.distance(x,y) <= 0.06 && hexagono2.getDibujado() != false){
                        hexagono2.setDibujado(false);
                        hexagono7.setX(hexagono2.getX());
                        hexagono7.setY(hexagono2.getY());
                        hexagono8.setX(hexagono2.getX());
                        hexagono8.setY(hexagono2.getY());
                        hexagonosDestruidos++;
                        puntuacion_Total += 1000;
                    }
                }

                if(contador_nivel6_hexagonoGrande2 >= 20){
                    if(hexagono3.distance(x,y) <= 0.06 && hexagono3.getDibujado() != false){
                        hexagono3.setDibujado(false);
                        hexagono9.setX(hexagono3.getX());
                        hexagono9.setY(hexagono3.getY());
                        hexagono10.setX(hexagono3.getX());
                        hexagono10.setY(hexagono3.getY());
                        hexagonosDestruidos++;
                        puntuacion_Total += 1000;
                    }

                    if(hexagono4.distance(x,y) <= 0.06 && hexagono4.getDibujado() != false){
                        hexagono4.setDibujado(false);
                        hexagono11.setX(hexagono4.getX());
                        hexagono11.setY(hexagono4.getY());
                        hexagono12.setX(hexagono4.getX());
                        hexagono12.setY(hexagono4.getY());
                        hexagonosDestruidos++;
                        puntuacion_Total += 1000;
                    }
                }

                if(contador_hexagono1 >= 20){
                    if(hexagono5.distance(x,y) <= 0.04 && hexagono5.getDibujado() != false){
                        hexagono5.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }

                    if(hexagono6.distance(x,y) <= 0.04 && hexagono6.getDibujado() != false){
                        hexagono6.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }
                }

                if(contador_hexagono2 >= 20){
                    if(hexagono7.distance(x,y) <= 0.04 && hexagono7.getDibujado() != false){
                        hexagono7.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }

                    if(hexagono8.distance(x,y) <= 0.04 && hexagono8.getDibujado() != false){
                        hexagono8.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }
                }

                if(contador_hexagono3 >= 20){
                    if(hexagono9.distance(x,y) <= 0.04 && hexagono9.getDibujado() != false){
                        hexagono9.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }

                    if(hexagono10.distance(x,y) <= 0.04 && hexagono10.getDibujado() != false){
                        hexagono10.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }
                }

                if(contador_hexagono4 >= 20){
                    if(hexagono11.distance(x,y) <= 0.04 && hexagono11.getDibujado() != false){
                        hexagono11.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }

                    if(hexagono12.distance(x,y) <= 0.04 && hexagono12.getDibujado() != false){
                        hexagono12.setDibujado(false);
                        hexagonosDestruidos++;
                        puntuacion_Total += 500;
                    }
                }
            }
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   TIEMPOS, DIBUJADOS Y USO DE LOS BUFOS
        //-----------------------------------------------------------------------------------------------------

        if(jugador1.distance(bufoDobleDisparo1.getX(), bufoDobleDisparo1.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo1.getDibujado() != false){
            bufoDobleDisparo1.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo2.getX(), bufoDobleDisparo2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo2.getDibujado() != false){
            bufoDobleDisparo2.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo3.getX(), bufoDobleDisparo3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo3.getDibujado() != false){
            bufoDobleDisparo3.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo1_Nivel2.getX(), bufoDobleDisparo1_Nivel2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo1_Nivel2.getDibujado() != false){
            bufoDobleDisparo1_Nivel2.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo2_Nivel2.getX(), bufoDobleDisparo2_Nivel2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo2_Nivel2.getDibujado() != false){
            bufoDobleDisparo2_Nivel2.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo3_Nivel2.getX(), bufoDobleDisparo3_Nivel2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo3_Nivel2.getDibujado() != false){
            bufoDobleDisparo3_Nivel2.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo1_Nivel3.getX(), bufoDobleDisparo1_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo1_Nivel3.getDibujado() != false){
            bufoDobleDisparo1_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo2_Nivel3.getX(), bufoDobleDisparo2_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo2_Nivel3.getDibujado() != false){
            bufoDobleDisparo2_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo3_Nivel3.getX(), bufoDobleDisparo3_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo3_Nivel3.getDibujado() != false){
            bufoDobleDisparo3_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo4_Nivel3.getX(), bufoDobleDisparo4_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo4_Nivel3.getDibujado() != false){
            bufoDobleDisparo4_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoDobleDisparo5_Nivel3.getX(), bufoDobleDisparo5_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoDobleDisparo5_Nivel3.getDibujado() != false){
            bufoDobleDisparo5_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad1.getX(), bufoInvulnerabilidad1.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad1.getDibujado() != false){
            bufoInvulnerabilidad1.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad2.getX(), bufoInvulnerabilidad2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad2.getDibujado() != false){
            bufoInvulnerabilidad2.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad3.getX(), bufoInvulnerabilidad3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad3.getDibujado() != false){
            bufoInvulnerabilidad3.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad1_Nivel2.getX(), bufoInvulnerabilidad1_Nivel2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad1_Nivel2.getDibujado() != false){
            bufoInvulnerabilidad1_Nivel2.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad2_Nivel2.getX(), bufoInvulnerabilidad2_Nivel2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad2_Nivel2.getDibujado() != false){
            bufoInvulnerabilidad2_Nivel2.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad3_Nivel2.getX(), bufoInvulnerabilidad3_Nivel2.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad3_Nivel2.getDibujado() != false){
            bufoInvulnerabilidad3_Nivel2.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad1_Nivel3.getX(), bufoInvulnerabilidad1_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad1_Nivel3.getDibujado() != false){
            bufoInvulnerabilidad1_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad2_Nivel3.getX(), bufoInvulnerabilidad2_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad2_Nivel3.getDibujado() != false){
            bufoInvulnerabilidad2_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad3_Nivel3.getX(), bufoInvulnerabilidad3_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad3_Nivel3.getDibujado() != false){
            bufoInvulnerabilidad3_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad4_Nivel3.getX(), bufoInvulnerabilidad4_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad4_Nivel3.getDibujado() != false){
            bufoInvulnerabilidad4_Nivel3.setDibujado(false);
        }
        if(jugador1.distance(bufoInvulnerabilidad5_Nivel3.getX(), bufoInvulnerabilidad5_Nivel3.getY()) <= 0.08 && jugador1.getDibujado() != false && bufoInvulnerabilidad5_Nivel3.getDibujado() != false){
            bufoInvulnerabilidad5_Nivel3.setDibujado(false);
        }

        if(bufoDobleDisparo1.getDibujado() == false && contador_PrimerBufo_DobleDisparo <= 300){
            contador_PrimerBufo_DobleDisparo += 1;
            if(contador_PrimerBufo_DobleDisparo <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);//para el doble disparo
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo2.getDibujado() == false && contador_SegundoBufo_DobleDisparo <= 300){
            contador_SegundoBufo_DobleDisparo += 1;
            if(contador_SegundoBufo_DobleDisparo <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo3.getDibujado() == false && contador_TercerBufo_DobleDisparo <= 300){
            contador_TercerBufo_DobleDisparo += 1;
            if(contador_TercerBufo_DobleDisparo <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo1_Nivel2.getDibujado() == false && contador_PrimerBufo_DobleDisparo_Nivel2 <= 300){
            contador_PrimerBufo_DobleDisparo_Nivel2 += 1;
            if(contador_PrimerBufo_DobleDisparo_Nivel2 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo2_Nivel2.getDibujado() == false && contador_SegundoBufo_DobleDisparo_Nivel2 <= 300){
            contador_SegundoBufo_DobleDisparo_Nivel2 += 1;
            if(contador_SegundoBufo_DobleDisparo_Nivel2 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo3_Nivel2.getDibujado() == false && contador_TercerBufo_DobleDisparo_Nivel2 <= 300){
            contador_TercerBufo_DobleDisparo_Nivel2 += 1;
            if(contador_TercerBufo_DobleDisparo_Nivel2 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo1_Nivel3.getDibujado() == false && contador_PrimerBufo_DobleDisparo_Nivel3 <= 300){
            contador_PrimerBufo_DobleDisparo_Nivel3 += 1;
            if(contador_PrimerBufo_DobleDisparo_Nivel3 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo2_Nivel3.getDibujado() == false && contador_SegundoBufo_DobleDisparo_Nivel3 <= 300){
            contador_SegundoBufo_DobleDisparo_Nivel3 += 1;
            if(contador_SegundoBufo_DobleDisparo_Nivel3 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo3_Nivel3.getDibujado() == false && contador_TercerBufo_DobleDisparo_Nivel3 <= 300){
            contador_TercerBufo_DobleDisparo_Nivel3 += 1;
            if(contador_TercerBufo_DobleDisparo_Nivel3 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo4_Nivel3.getDibujado() == false && contador_CuartoBufo_DobleDisparo_Nivel3 <= 300){
            contador_CuartoBufo_DobleDisparo_Nivel3 += 1;
            if(contador_CuartoBufo_DobleDisparo_Nivel3 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoDobleDisparo5_Nivel3.getDibujado() == false && contador_QuintoBufo_DobleDisparo_Nivel3 <= 300){
            contador_QuintoBufo_DobleDisparo_Nivel3 += 1;
            if(contador_QuintoBufo_DobleDisparo_Nivel3 <= 300){
                jugador1.dobleDisparoUpgrade();
                jugador1.setBufoDobleDisparo(true);
            }else{
                jugador1.setBufoDobleDisparo(false);
            }
        }
        if(bufoInvulnerabilidad1.getDibujado() == false && contador_PrimerBufo_Invulnerabilidad <= 300){
            contador_PrimerBufo_Invulnerabilidad += 1;
            if(contador_PrimerBufo_Invulnerabilidad <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad2.getDibujado() == false && contador_SegundoBufo_Invulnerabilidad <= 300){
            contador_SegundoBufo_Invulnerabilidad += 1;
            if(contador_SegundoBufo_Invulnerabilidad <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad3.getDibujado() == false && contador_TercerBufo_Invulnerabilidad <= 300){
            contador_TercerBufo_Invulnerabilidad += 1;
            if(contador_TercerBufo_Invulnerabilidad <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad1_Nivel2.getDibujado() == false && contador_PrimerBufo_Invulnerabilidad_Nivel2 <= 300){
            contador_PrimerBufo_Invulnerabilidad_Nivel2 += 1;
            if(contador_PrimerBufo_Invulnerabilidad_Nivel2 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad2_Nivel2.getDibujado() == false && contador_SegundoBufo_Invulnerabilidad_Nivel2 <= 300){
            contador_SegundoBufo_Invulnerabilidad_Nivel2 += 1;
            if(contador_SegundoBufo_Invulnerabilidad_Nivel2 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad3_Nivel2.getDibujado() == false && contador_TercerBufo_Invulnerabilidad_Nivel2 <= 300){
            contador_TercerBufo_Invulnerabilidad_Nivel2 += 1;
            if(contador_TercerBufo_Invulnerabilidad_Nivel2 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad1_Nivel3.getDibujado() == false && contador_PrimerBufo_Invulnerabilidad_Nivel3 <= 300){
            contador_PrimerBufo_Invulnerabilidad_Nivel3 += 1;
            if(contador_PrimerBufo_Invulnerabilidad_Nivel3 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad2_Nivel3.getDibujado() == false && contador_SegundoBufo_Invulnerabilidad_Nivel3 <= 300){
            contador_SegundoBufo_Invulnerabilidad_Nivel3 += 1;
            if(contador_SegundoBufo_Invulnerabilidad_Nivel3 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad3_Nivel3.getDibujado() == false && contador_TercerBufo_Invulnerabilidad_Nivel3 <= 300){
            contador_TercerBufo_Invulnerabilidad_Nivel3 += 1;
            if(contador_TercerBufo_Invulnerabilidad_Nivel3 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad4_Nivel3.getDibujado() == false && contador_CuartoBufo_Invulnerabilidad_Nivel3 <= 300){
            contador_CuartoBufo_Invulnerabilidad_Nivel3 += 1;
            if(contador_CuartoBufo_Invulnerabilidad_Nivel3 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }
        if(bufoInvulnerabilidad5_Nivel3.getDibujado() == false && contador_QuintoBufo_Invulnerabilidad_Nivel3 <= 300){
            contador_QuintoBufo_Invulnerabilidad_Nivel3 += 1;
            if(contador_QuintoBufo_Invulnerabilidad_Nivel3 <= 300){
                jugador1.invulnerabilidadUpgrade();
            }else{
                jugador1.setColor({1.0, 0.0, 0.0});
            }
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   DIBUJADO, CONTADORES Y USO DE VIDAS EXTRAS
        //-----------------------------------------------------------------------------------------------------

        if(nivel == 1){
            if(ball2.getDibujado() == false && ball3.getDibujado() == false){
                if(vidaExtra_Nivel1.getDibujado() != false){
                    vidaExtra_Nivel1.drawCorazonParteI();
                    vidaExtra_Nivel1.drawCorazonParteII();
                    vidaExtra_Nivel1.drawCorazonParteIII();
                    vidaExtra_Nivel1.traslacion();
                }
                if(vidaExtra_Nivel1.getYv() == 0){
                    if(contador_VidaExtra_Nivel1 <= 300){
                        contador_VidaExtra_Nivel1 += 1;
                    }
                    if(contador_VidaExtra_Nivel1 >= 300){
                        vidaExtra_Nivel1.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 2){
            if(nivel2Ball2.getDibujado() == false && nivel2Ball3.getDibujado() == false){
                if(vidaExtra_Nivel2.getDibujado() != false){
                    vidaExtra_Nivel2.drawCorazonParteI();
                    vidaExtra_Nivel2.drawCorazonParteII();
                    vidaExtra_Nivel2.drawCorazonParteIII();
                    vidaExtra_Nivel2.traslacion();
                }
                if(vidaExtra_Nivel2.getYv() == 0){
                    if(contador_VidaExtra_Nivel2 <= 300){
                        contador_VidaExtra_Nivel2 += 1;
                    }
                    if(contador_VidaExtra_Nivel2 >= 300){
                        vidaExtra_Nivel2.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 3){
            if(nivel3Ball1.getDibujado() == false && nivel3Ball2.getDibujado() == false){
                if(vidaExtra_Nivel3.getDibujado() != false){
                    vidaExtra_Nivel3.drawCorazonParteI();
                    vidaExtra_Nivel3.drawCorazonParteII();
                    vidaExtra_Nivel3.drawCorazonParteIII();
                    vidaExtra_Nivel3.traslacion();
                }
                if(vidaExtra_Nivel3.getYv() == 0){
                    if(contador_VidaExtra_Nivel3 <= 300){
                        contador_VidaExtra_Nivel3 += 1;
                    }
                    if(contador_VidaExtra_Nivel3 >= 300){
                        vidaExtra_Nivel3.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 4){
            if(ball2.getDibujado() == false && ball3.getDibujado() == false && nivel2Ball3.getDibujado() == false && nivel3Ball1.getDibujado() == false){
                if(vidaExtra_Nivel4.getDibujado() != false){
                    vidaExtra_Nivel4.drawCorazonParteI();
                    vidaExtra_Nivel4.drawCorazonParteII();
                    vidaExtra_Nivel4.drawCorazonParteIII();
                    vidaExtra_Nivel4.traslacion();
                }
                if(vidaExtra_Nivel4.getYv() == 0){
                    if(contador_VidaExtra_Nivel4 <= 300){
                        contador_VidaExtra_Nivel4 += 1;
                    }
                    if(contador_VidaExtra_Nivel4 >= 300){
                        vidaExtra_Nivel4.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 5){
            if(ball2.getDibujado() == false && ball3.getDibujado() == false && nivel2Ball2.getDibujado() == false && nivel2Ball3.getDibujado() == false){
                if(vidaExtra_Nivel5.getDibujado() != false){
                    vidaExtra_Nivel5.drawCorazonParteI();
                    vidaExtra_Nivel5.drawCorazonParteII();
                    vidaExtra_Nivel5.drawCorazonParteIII();
                    vidaExtra_Nivel5.traslacion();
                }
                if(vidaExtra_Nivel5.getYv() == 0){
                    if(contador_VidaExtra_Nivel5 <= 300){
                        contador_VidaExtra_Nivel5 += 1;
                    }
                    if(contador_VidaExtra_Nivel5 >= 300){
                        vidaExtra_Nivel5.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 6){
            if(hexagono1.getDibujado() == false && hexagono2.getDibujado() == false){
                if(vidaExtra_Nivel6.getDibujado() != false){
                    vidaExtra_Nivel6.drawCorazonParteI();
                    vidaExtra_Nivel6.drawCorazonParteII();
                    vidaExtra_Nivel6.drawCorazonParteIII();
                    vidaExtra_Nivel6.traslacion();
                }
                if(vidaExtra_Nivel6.getYv() == 0){
                    if(contador_VidaExtra_Nivel6 <= 300){
                        contador_VidaExtra_Nivel6 += 1;
                    }
                    if(contador_VidaExtra_Nivel6 >= 300){
                        vidaExtra_Nivel6.setDibujado(false);
                    }
                }
            }
        }

        if(jugador1.distance(vidaExtra_Nivel1.getX(),vidaExtra_Nivel1.getY()) <= 0.07 && jugador1.getDibujado() != false && vidaExtra_Nivel1.getDibujado() != false){
            vidaExtra_Nivel1.setDibujado(false);
            vidas++;
        }
        if(jugador1.distance(vidaExtra_Nivel2.getX(),vidaExtra_Nivel2.getY()) <= 0.07 && jugador1.getDibujado() != false && vidaExtra_Nivel2.getDibujado() != false){
            vidaExtra_Nivel2.setDibujado(false);
            vidas++;
        }
        if(jugador1.distance(vidaExtra_Nivel3.getX(),vidaExtra_Nivel3.getY()) <= 0.07 && jugador1.getDibujado() != false && vidaExtra_Nivel3.getDibujado() != false){
            vidaExtra_Nivel3.setDibujado(false);
            vidas++;
        }
        if(jugador1.distance(vidaExtra_Nivel4.getX(),vidaExtra_Nivel4.getY()) <= 0.07 && jugador1.getDibujado() != false && vidaExtra_Nivel4.getDibujado() != false){
            vidaExtra_Nivel4.setDibujado(false);
            vidas++;
        }
        if(jugador1.distance(vidaExtra_Nivel5.getX(),vidaExtra_Nivel5.getY()) <= 0.07 && jugador1.getDibujado() != false && vidaExtra_Nivel5.getDibujado() != false){
            vidaExtra_Nivel5.setDibujado(false);
            vidas++;
        }
        if(jugador1.distance(vidaExtra_Nivel6.getX(),vidaExtra_Nivel6.getY()) <= 0.07 && jugador1.getDibujado() != false && vidaExtra_Nivel6.getDibujado() != false){
            vidaExtra_Nivel6.setDibujado(false);
            vidas++;
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   CALCULOS Y CONTADORES DE LAS VIDAS
        //-----------------------------------------------------------------------------------------------------


        if(vidas != vidaAnterior){
            if(tiempoMuerto <= 150){
                tiempoMuerto += 1;
            }
            if(tiempoMuerto >= 150){
                tiempoMuerto = 0;
                jugador1.setDibujado(true);
                vidaAnterior = vidas;
            }
        }

        if(jugador1.getColor() != color2 && pelotasParadas_RelojNivel2 != true && pelotasParadas_RelojNivel3 != true && pelotasParadas_RelojNivel4 != true){
            // MUERTES POR BOLAS DEL PRIMER NIVEL
            if(dificultad == 1 || dificultad == 2 || dificultad == 3){
                if(jugador1.distance(ball1.getX(),ball1.getY()) <= 0.15 && jugador1.getDibujado() != false && ball1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            if(dificultad == 2 || dificultad == 3){
                if(jugador1.distance(ball2.getX(),ball2.getY()) <= 0.13 && jugador1.getDibujado() != false && ball2.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(ball3.getX(),ball3.getY()) <= 0.13 && jugador1.getDibujado() != false && ball3.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            if(dificultad == 3){
                if(jugador1.distance(ball4.getX(),ball4.getY()) <= 0.09 && jugador1.getDibujado() != false && ball4.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(ball5.getX(),ball5.getY()) <= 0.09 && jugador1.getDibujado() != false && ball5.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(ball6.getX(),ball6.getY()) <= 0.09 && jugador1.getDibujado() != false && ball6.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(ball7.getX(),ball7.getY()) <= 0.09 && jugador1.getDibujado() != false && ball7.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            //MUERTES POR BOLAS DEL SEGUNDO NIVEL
            if(dificultad == 1 || dificultad == 2 || dificultad == 3){
                if(jugador1.distance(nivel2Ball1.getX(),nivel2Ball1.getY()) <= 0.15 && jugador1.getDibujado() != false && nivel2Ball1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            if(dificultad == 2 || dificultad == 3){
                if(jugador1.distance(nivel2Ball2.getX(),nivel2Ball2.getY()) <= 0.13 && jugador1.getDibujado() != false && nivel2Ball2.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel2Ball3.getX(),nivel2Ball3.getY()) <= 0.13 && jugador1.getDibujado() != false && nivel2Ball3.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            if(dificultad == 3){
                if(jugador1.distance(nivel2Ball4.getX(),nivel2Ball4.getY()) <= 0.09 && jugador1.getDibujado() != false && nivel2Ball4.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel2Ball5.getX(),nivel2Ball5.getY()) <= 0.09 && jugador1.getDibujado() != false && nivel2Ball5.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel2Ball6.getX(),nivel2Ball6.getY()) <= 0.09 && jugador1.getDibujado() != false && nivel2Ball6.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel2Ball7.getX(),nivel2Ball7.getY()) <= 0.09 && jugador1.getDibujado() != false && nivel2Ball7.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            //MUERTES POR BOLAS DEL TERCER NIVEL
            if(dificultad == 1 || dificultad == 2 || dificultad == 3){
                if(jugador1.distance(nivel3Ball1.getX(),nivel3Ball1.getY()) <= 0.10 && jugador1.getDibujado() != false && nivel3Ball1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel3Ball2.getX(),nivel3Ball2.getY()) <= 0.10 && jugador1.getDibujado() != false && nivel3Ball2.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel3Ball3.getX(),nivel3Ball3.getY()) <= 0.10 && jugador1.getDibujado() != false && nivel3Ball3.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel3Ball4.getX(),nivel3Ball4.getY()) <= 0.10 && jugador1.getDibujado() != false && nivel3Ball4.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(nivel3Ball5.getX(),nivel3Ball5.getY()) <= 0.10 && jugador1.getDibujado() != false && nivel3Ball5.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            //MUERTES POR HEXAGONOS DEL SEXTO NIVEL
            if(dificultad == 1 || dificultad == 2 || dificultad == 3){
                if(jugador1.distance(hexagonoGrande1.getX(),hexagonoGrande1.getY()) <= 0.09 && jugador1.getDibujado() != false && hexagonoGrande1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagonoGrande2.getX(),hexagonoGrande2.getY()) <= 0.09 && jugador1.getDibujado() != false && hexagonoGrande2.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            if(dificultad == 2 || dificultad == 3){
                if(jugador1.distance(hexagono1.getX(),hexagono1.getY()) <= 0.06 && jugador1.getDibujado() != false && hexagono1.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono2.getX(),hexagono2.getY()) <= 0.06 && jugador1.getDibujado() != false && hexagono2.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono3.getX(),hexagono3.getY()) <= 0.06 && jugador1.getDibujado() != false && hexagono3.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono4.getX(),hexagono4.getY()) <= 0.06 && jugador1.getDibujado() != false && hexagono4.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
            if(dificultad == 3){
                if(jugador1.distance(hexagono5.getX(),hexagono5.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono5.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono6.getX(),hexagono6.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono6.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono7.getX(),hexagono7.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono7.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono8.getX(),hexagono8.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono8.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono9.getX(),hexagono9.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono9.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono10.getX(),hexagono10.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono10.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono11.getX(),hexagono11.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono11.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
                if(jugador1.distance(hexagono12.getX(),hexagono12.getY()) <= 0.04 && jugador1.getDibujado() != false && hexagono12.getDibujado() != false){
                    jugador1.setDibujado(false);
                    vidas--;
                }
            }
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   FRAMES POR SEGUNDO
        //-----------------------------------------------------------------------------------------------------
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
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(710,40,0,GLUT_BITMAP_HELVETICA_12,s);
        glPopMatrix();

        restorePerspectiveProjection();

        //-----------------------------------------------------------------------------------------------------
        //                                   DIBUJADO, CONTADORES Y USO DE RELOJES
        //-----------------------------------------------------------------------------------------------------

        if(nivel == 2){
            if(ball2.getDibujado() == false && nivel2Ball2.getDibujado() == false && nivel2Ball3.getDibujado() == false && bufo_Reloj_Nivel2 != 1){
                bufo_Reloj_Nivel2 += 1;
            }
            if(bufo_Reloj_Nivel2 == 1){
                if(dificultad == 1){
                    NumeroRandom_RelojNivel2 = rand() % 10;
                }else if(dificultad == 2){
                    NumeroRandom_RelojNivel2 = rand() % 15;
                }else if(dificultad == 3){
                    NumeroRandom_RelojNivel2 = rand() % 20;
                }
                bufo_Reloj_Nivel2++;
            }
            if(NumeroRandom_RelojNivel2 == 1){
                if(reloj_Nivel2.getDibujado() != false){
                    reloj_Nivel2.drawRelojParteI();
                    reloj_Nivel2.drawRelojParteII();
                    reloj_Nivel2.drawRelojParteIII();
                    reloj_Nivel2.drawRelojParteIV();
                    reloj_Nivel2.drawRelojParteV();
                    reloj_Nivel2.drawRelojParteVI();
                    reloj_Nivel2.drawRelojParteVII();
                    reloj_Nivel2.drawRelojParteVIII();
                    reloj_Nivel2.traslacion();
                }
                if(reloj_Nivel2.getYv() == 0){
                    if(contador_RelojNivel2 <= 300){
                        contador_RelojNivel2 += 1;
                    }
                    if(contador_RelojNivel2 >= 300){
                        reloj_Nivel2.setDibujado(false);
                    }
                }
            }
            if(pelotasParadas_RelojNivel2 == true){
                if(pararPelotas_RelojNivel2 <= 300){
                    pararPelotas_RelojNivel2 += 1;
                }
                if(pararPelotas_RelojNivel2 >= 300){
                    pelotasParadas_RelojNivel2 = false;
                }
            }
        }else if(nivel == 3){
            if(ball2.getDibujado() == false && nivel2Ball2.getDibujado() == false && nivel3Ball1.getDibujado() == false && bufo_Reloj_Nivel3 != 1){
                bufo_Reloj_Nivel3 += 1;
            }
            if(bufo_Reloj_Nivel3 == 1){
                if(dificultad == 1){
                    NumeroRandom_RelojNivel3 = rand() % 10;
                }else if(dificultad == 2){
                    NumeroRandom_RelojNivel3 = rand() % 15;
                }else if(dificultad == 3){
                    NumeroRandom_RelojNivel3 = rand() % 20;
                }
                bufo_Reloj_Nivel3++;
            }
            if(NumeroRandom_RelojNivel3 == 1){
                if(reloj_Nivel3.getDibujado() != false){
                    reloj_Nivel3.drawRelojParteI();
                    reloj_Nivel3.drawRelojParteII();
                    reloj_Nivel3.drawRelojParteIII();
                    reloj_Nivel3.drawRelojParteIV();
                    reloj_Nivel3.drawRelojParteV();
                    reloj_Nivel3.drawRelojParteVI();
                    reloj_Nivel3.drawRelojParteVII();
                    reloj_Nivel3.drawRelojParteVIII();
                    reloj_Nivel3.traslacion();
                }
                if(reloj_Nivel3.getYv() == 0){
                    if(contador_RelojNivel3 <= 300){
                        contador_RelojNivel3 += 1;
                    }
                    if(contador_RelojNivel3 >= 300){
                        reloj_Nivel3.setDibujado(false);
                    }
                }
            }
            if(pelotasParadas_RelojNivel3 == true){
                if(pararPelotas_RelojNivel3 <= 300){
                    pararPelotas_RelojNivel3 += 1;
                }
                if(pararPelotas_RelojNivel3 >= 300){
                    pelotasParadas_RelojNivel3 = false;
                }
            }
        }else if(nivel == 4){
            if(ball2.getDibujado() == false && nivel2Ball2.getDibujado() == false && nivel3Ball1.getDibujado() == false && bufo_Reloj_Nivel4 != 1){
                bufo_Reloj_Nivel4 += 1;
            }
            if(bufo_Reloj_Nivel4 == 1){
                if(dificultad == 1){
                    NumeroRandom_RelojNivel4 = rand() % 10;
                }else if(dificultad == 2){
                    NumeroRandom_RelojNivel4 = rand() % 15;
                }else if(dificultad == 3){
                    NumeroRandom_RelojNivel4 = rand() % 20;
                }
                bufo_Reloj_Nivel4++;
            }
            if(NumeroRandom_RelojNivel4 == 1){
                if(reloj_Nivel4.getDibujado() != false){
                    reloj_Nivel4.drawRelojParteI();
                    reloj_Nivel4.drawRelojParteII();
                    reloj_Nivel4.drawRelojParteIII();
                    reloj_Nivel4.drawRelojParteIV();
                    reloj_Nivel4.drawRelojParteV();
                    reloj_Nivel4.drawRelojParteVI();
                    reloj_Nivel4.drawRelojParteVII();
                    reloj_Nivel4.drawRelojParteVIII();
                    reloj_Nivel4.traslacion();
                }
                if(reloj_Nivel4.getYv() == 0){
                    if(contador_RelojNivel4 <= 300){
                        contador_RelojNivel4 += 1;
                    }
                    if(contador_RelojNivel4 >= 300){
                        reloj_Nivel4.setDibujado(false);
                    }
                }
            }
            if(pelotasParadas_RelojNivel4 == true){
                if(pararPelotas_RelojNivel4 <= 300){
                    pararPelotas_RelojNivel4 += 1;
                }
                if(pararPelotas_RelojNivel4 >= 300){
                    pelotasParadas_RelojNivel4 = false;
                }
            }
        }

        if(jugador1.distance(reloj_Nivel2.getX(),reloj_Nivel2.getY()) <= 0.07 && jugador1.getDibujado() != false && reloj_Nivel2.getDibujado() != false){
            reloj_Nivel2.setDibujado(false);
            pelotasParadas_RelojNivel2 = true;
        }
        if(jugador1.distance(reloj_Nivel3.getX(),reloj_Nivel3.getY()) <= 0.07 && jugador1.getDibujado() != false && reloj_Nivel3.getDibujado() != false){
            reloj_Nivel3.setDibujado(false);
            pelotasParadas_RelojNivel3 = true;
        }
        if(jugador1.distance(reloj_Nivel4.getX(),reloj_Nivel4.getY()) <= 0.07 && jugador1.getDibujado() != false && reloj_Nivel4.getDibujado() != false){
            reloj_Nivel4.setDibujado(false);
            pelotasParadas_RelojNivel4 = true;
        }

        //-----------------------------------------------------------------------------------------------------
        //                                   DIBUJADO, CONTADORES Y USO DE COMIDAS
        //-----------------------------------------------------------------------------------------------------

        if(nivel == 1){
            if(ball5.getDibujado() == false && ball6.getDibujado() == false){
                if(manzana_Nivel1.getDibujado() != false){
                    manzana_Nivel1.draw();
                    manzana_Nivel1.drawManzanaParteII();
                    manzana_Nivel1.drawManzanaParteIII();
                    manzana_Nivel1.traslacion();
                }
                if(manzana_Nivel1.getYv() == 0){
                    if(contador_Manzana_Nivel1 <= 300){
                        contador_Manzana_Nivel1 += 1;
                    }
                    if(contador_Manzana_Nivel1 >= 300){
                        manzana_Nivel1.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 2){
            if(ball5.getDibujado() == false && nivel2Ball2.getDibujado() == false && nivel2Ball3.getDibujado() == false){
                if(naranja_Nivel2.getDibujado() != false){
                    naranja_Nivel2.drawNaranjaParteI();
                    naranja_Nivel2.drawNaranjaParteII();
                    naranja_Nivel2.drawNaranjaParteIII();
                    naranja_Nivel2.drawNaranjaParteIV();
                    naranja_Nivel2.traslacion();
                }
                if(naranja_Nivel2.getYv() == 0){
                    if(contador_Naranja_Nivel2 <= 300){
                        contador_Naranja_Nivel2 += 1;
                    }
                    if(contador_Naranja_Nivel2 >= 300){
                        naranja_Nivel2.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 3){
            if(ball4.getDibujado() == false && nivel2Ball3.getDibujado() == false && nivel3Ball3.getDibujado() == false && nivel3Ball4.getDibujado() == false){
                if(fresa_Nivel3.getDibujado() != false){
                    fresa_Nivel3.drawFresaParteI();
                    fresa_Nivel3.drawFresaParteII();
                    fresa_Nivel3.drawFresaParteIII();
                    fresa_Nivel3.drawFresaParteIV();
                    fresa_Nivel3.drawFresaParteV();
                    fresa_Nivel3.traslacion();
                }
                if(fresa_Nivel3.getYv() == 0){
                    if(contador_Fresa_Nivel3 <= 300){
                        contador_Fresa_Nivel3 += 1;
                    }
                    if(contador_Fresa_Nivel3 >= 300){
                        fresa_Nivel3.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 4){
            if(ball2.getDibujado() == false && nivel2Ball1.getDibujado() == false){
                if(naranja_Nivel4.getDibujado() != false){
                    naranja_Nivel4.drawNaranjaParteI();
                    naranja_Nivel4.drawNaranjaParteII();
                    naranja_Nivel4.drawNaranjaParteIII();
                    naranja_Nivel4.drawNaranjaParteIV();
                    naranja_Nivel4.traslacion();
                }
                if(naranja_Nivel4.getYv() == 0){
                    if(contador_Naranja_Nivel4 <= 300){
                        contador_Naranja_Nivel4 += 1;
                    }
                    if(contador_Naranja_Nivel4 >= 300){
                        naranja_Nivel4.setDibujado(false);
                    }
                }
            }
            if(nivel3Ball1.getDibujado() == false && nivel3Ball2.getDibujado() == false){
                if(manzana_Nivel4.getDibujado() != false){
                    manzana_Nivel4.draw();
                    manzana_Nivel4.drawManzanaParteII();
                    manzana_Nivel4.drawManzanaParteIII();
                    manzana_Nivel4.traslacion();
                }
                if(manzana_Nivel4.getYv() == 0){
                    if(contador_Manzana_Nivel4 <= 300){
                        contador_Manzana_Nivel4 += 1;
                    }
                    if(contador_Manzana_Nivel4 >= 300){
                        manzana_Nivel4.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 5){
            if(ball1.getDibujado() == false && ball3.getDibujado() == false){
                if(naranja_Nivel5.getDibujado() != false){
                    naranja_Nivel5.drawNaranjaParteI();
                    naranja_Nivel5.drawNaranjaParteII();
                    naranja_Nivel5.drawNaranjaParteIII();
                    naranja_Nivel5.drawNaranjaParteIV();
                    naranja_Nivel5.traslacion();
                }
                if(naranja_Nivel5.getYv() == 0){
                    if(contador_Naranja_Nivel5 <= 300){
                        contador_Naranja_Nivel5 += 1;
                    }
                    if(contador_Naranja_Nivel5 >= 300){
                        naranja_Nivel5.setDibujado(false);
                    }
                }
            }
            if(nivel2Ball1.getDibujado() == false && nivel2Ball2.getDibujado() == false){
                if(fresa_Nivel5.getDibujado() != false){
                    fresa_Nivel5.drawFresaParteI();
                    fresa_Nivel5.drawFresaParteII();
                    fresa_Nivel5.drawFresaParteIII();
                    fresa_Nivel5.drawFresaParteIV();
                    fresa_Nivel5.drawFresaParteV();
                    fresa_Nivel5.traslacion();
                }
                if(fresa_Nivel5.getYv() == 0){
                    if(contador_Fresa_Nivel5 <= 300){
                        contador_Fresa_Nivel5 += 1;
                    }
                    if(contador_Fresa_Nivel5 >= 300){
                        fresa_Nivel5.setDibujado(false);
                    }
                }
            }
        }else if(nivel == 6){
            if(hexagono1.getDibujado() == false){
                if(manzana_Nivel6.getDibujado() != false){
                    manzana_Nivel6.draw();
                    manzana_Nivel6.drawManzanaParteII();
                    manzana_Nivel6.drawManzanaParteIII();
                    manzana_Nivel6.traslacion();
                }
                if(manzana_Nivel6.getYv() == 0){
                    if(contador_Manzana_Nivel6 <= 300){
                        contador_Manzana_Nivel6 += 1;
                    }
                    if(contador_Manzana_Nivel6 >= 300){
                        manzana_Nivel6.setDibujado(false);
                    }
                }
            }
            if(hexagono4.getDibujado() == false){
                if(naranja_Nivel6.getDibujado() != false){
                    naranja_Nivel6.drawNaranjaParteI();
                    naranja_Nivel6.drawNaranjaParteII();
                    naranja_Nivel6.drawNaranjaParteIII();
                    naranja_Nivel6.drawNaranjaParteIV();
                    naranja_Nivel6.traslacion();
                }
                if(naranja_Nivel6.getYv() == 0){
                    if(contador_Naranja_Nivel6 <= 300){
                        contador_Naranja_Nivel6 += 1;
                    }
                    if(contador_Naranja_Nivel6 >= 300){
                        naranja_Nivel6.setDibujado(false);
                    }
                }
            }
        }

        if(jugador1.distance(manzana_Nivel1.getX(),manzana_Nivel1.getY()) <= 0.07 && jugador1.getDibujado() != false && manzana_Nivel1.getDibujado() != false){
            manzana_Nivel1.setDibujado(false);
            puntuacion_Total += 2000;
        }
        if(jugador1.distance(naranja_Nivel2.getX(),naranja_Nivel2.getY()) <= 0.07 && jugador1.getDibujado() != false && naranja_Nivel2.getDibujado() != false){
            naranja_Nivel2.setDibujado(false);
            puntuacion_Total += 1500;
        }
        if(jugador1.distance(fresa_Nivel3.getX(),fresa_Nivel3.getY()) <= 0.07 && jugador1.getDibujado() != false && fresa_Nivel3.getDibujado() != false){
            fresa_Nivel3.setDibujado(false);
            puntuacion_Total += 1800;
        }
        if(jugador1.distance(manzana_Nivel4.getX(),manzana_Nivel4.getY()) <= 0.07 && jugador1.getDibujado() != false && manzana_Nivel4.getDibujado() != false){
            manzana_Nivel4.setDibujado(false);
            puntuacion_Total += 2000;
        }
        if(jugador1.distance(naranja_Nivel4.getX(),naranja_Nivel4.getY()) <= 0.07 && jugador1.getDibujado() != false && naranja_Nivel4.getDibujado() != false){
            naranja_Nivel4.setDibujado(false);
            puntuacion_Total += 1500;
        }
        if(jugador1.distance(naranja_Nivel5.getX(),naranja_Nivel5.getY()) <= 0.07 && jugador1.getDibujado() != false && naranja_Nivel5.getDibujado() != false){
            naranja_Nivel5.setDibujado(false);
            puntuacion_Total += 1500;
        }
        if(jugador1.distance(fresa_Nivel5.getX(),fresa_Nivel5.getY()) <= 0.07 && jugador1.getDibujado() != false && fresa_Nivel5.getDibujado() != false){
            fresa_Nivel5.setDibujado(false);
            puntuacion_Total += 1800;
        }
        if(jugador1.distance(manzana_Nivel6.getX(),manzana_Nivel6.getY()) <= 0.07 && jugador1.getDibujado() != false && manzana_Nivel6.getDibujado() != false){
            manzana_Nivel6.setDibujado(false);
            puntuacion_Total += 2000;
        }
        if(jugador1.distance(naranja_Nivel6.getX(),naranja_Nivel6.getY()) <= 0.07 && jugador1.getDibujado() != false && naranja_Nivel6.getDibujado() != false){
            naranja_Nivel6.setDibujado(false);
            puntuacion_Total += 1500;
        }

        //=====================================================================================================

        //=====================================================================================================
        //
        //                                   MODO DE JUEGO: PANIC MODE
        //
        //=====================================================================================================

        if(tipoJuego == 2){

            bottomFrame_PanicMode.draw();

            //BORDE DE LA BARRA DE NIVEL
            for(auto frameNivel: framesNivel){
                frameNivel->draw();
            }

            //-------------------------------------------------------------------------------------------------
            //                               DIBUJADO DE LA BARRA DE NIVEL
            //-------------------------------------------------------------------------------------------------

            //DIBUJADO DE LA BARRA DE NIVEL MEDIANTE LAS BOLAS DEL PRIMER NIVEL
            if(ball1.getDibujado() == false && contador_PrimeraBarraNivel < 1){
                contador_PrimeraBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball2.getDibujado() == false && contador_SegundaBarraNivel < 1){
                contador_SegundaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball3.getDibujado() == false && contador_TerceraBarraNivel < 1){
                contador_TerceraBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball4.getDibujado() == false && contador_CuartaBarraNivel < 1){
                contador_CuartaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball5.getDibujado() == false && contador_QuintaBarraNivel < 1){
                contador_QuintaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball6.getDibujado() == false && contador_SextaBarraNivel < 1){
                contador_SextaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball7.getDibujado() == false && contador_SeptimaBarraNivel < 1){
                contador_SeptimaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball8.getDibujado() == false && contador_OctavaBarraNivel < 1){
                contador_OctavaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball9.getDibujado() == false && contador_NovenaBarraNivel < 1){
                contador_NovenaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball10.getDibujado() == false && contador_DecimaBarraNivel < 1){
                contador_DecimaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball11.getDibujado() == false && contador_DecimaPrimeraBarraNivel < 1){
                contador_DecimaPrimeraBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball12.getDibujado() == false && contador_DecimaSegundaBarraNivel < 1){
                contador_DecimaSegundaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball13.getDibujado() == false && contador_DecimaTerceraBarraNivel < 1){
                contador_DecimaTerceraBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball14.getDibujado() == false && contador_DecimaCuartaBarraNivel < 1){
                contador_DecimaCuartaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            if(ball15.getDibujado() == false && contador_DecimaQuintaBarraNivel < 1){
                contador_DecimaQuintaBarraNivel += 1;
                dibujadoBarraNivel++;
            }

            //DIBUJADO DE LA BARRA DE NIVEL MEDIANTE LAS BOLAS DEL SEGUNDO NIVEL
            if(nivel2Ball1.getDibujado() == false && contador_PrimeraBarraNivel_Nivel2 < 1){
                contador_PrimeraBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball2.getDibujado() == false && contador_SegundaBarraNivel_Nivel2 < 1){
                contador_SegundaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball3.getDibujado() == false && contador_TerceraBarraNivel_Nivel2 < 1){
                contador_TerceraBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball4.getDibujado() == false && contador_CuartaBarraNivel_Nivel2 < 1){
                contador_CuartaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball5.getDibujado() == false && contador_QuintaBarraNivel_Nivel2 < 1){
                contador_QuintaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball6.getDibujado() == false && contador_SextaBarraNivel_Nivel2 < 1){
                contador_SextaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball7.getDibujado() == false && contador_SeptimaBarraNivel_Nivel2 < 1){
                contador_SeptimaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball8.getDibujado() == false && contador_OctavaBarraNivel_Nivel2 < 1){
                contador_OctavaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball9.getDibujado() == false && contador_NovenaBarraNivel_Nivel2 < 1){
                contador_NovenaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball10.getDibujado() == false && contador_DecimaBarraNivel_Nivel2 < 1){
                contador_DecimaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball11.getDibujado() == false && contador_DecimaPrimeraBarraNivel_Nivel2 < 1){
                contador_DecimaPrimeraBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball12.getDibujado() == false && contador_DecimaSegundaBarraNivel_Nivel2 < 1){
                contador_DecimaSegundaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball13.getDibujado() == false && contador_DecimaTerceraBarraNivel_Nivel2 < 1){
                contador_DecimaTerceraBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball14.getDibujado() == false && contador_DecimaCuartaBarraNivel_Nivel2 < 1){
                contador_DecimaCuartaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            if(nivel2Ball15.getDibujado() == false && contador_DecimaQuintaBarraNivel_Nivel2 < 1){
                contador_DecimaQuintaBarraNivel_Nivel2 += 1;
                dibujadoBarraNivel++;
            }

            //DIBUJADO DE LA BARRA DE NIVEL MEDIANTE LOS HEXAGONOS

            if(hexagonoGrande1.getDibujado() == false && contador_PrimeraBarraNivel_HexagonoGrande1 < 1){
                contador_PrimeraBarraNivel_HexagonoGrande1 += 1;
                dibujadoBarraNivel++;
            }

            if(hexagonoGrande2.getDibujado() == false && contador_SegundaBarraNivel_HexagonoGrande2 < 1){
                contador_SegundaBarraNivel_HexagonoGrande2 += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono1.getDibujado() == false && contador_PrimeraBarraNivel_Hexagono < 1){
                contador_PrimeraBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono2.getDibujado() == false && contador_SegundaBarraNivel_Hexagono < 1){
                contador_SegundaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono3.getDibujado() == false && contador_TerceraBarraNivel_Hexagono < 1){
                contador_TerceraBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono4.getDibujado() == false && contador_CuartaBarraNivel_Hexagono < 1){
                contador_CuartaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono5.getDibujado() == false && contador_QuintaBarraNivel_Hexagono < 1){
                contador_QuintaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono6.getDibujado() == false && contador_sextaBarraNivel_Hexagono < 1){
                contador_sextaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono7.getDibujado() == false && contador_SeptimaBarraNivel_Hexagono < 1){
                contador_SeptimaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono8.getDibujado() == false && contador_OctavaBarraNivel_Hexagono < 1){
                contador_OctavaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono9.getDibujado() == false && contador_NovenaBarraNivel_Hexagono < 1){
                contador_NovenaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono10.getDibujado() == false && contador_DecimaBarraNivel_Hexagono < 1){
                contador_DecimaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono11.getDibujado() == false && contador_DecimaPrimeraBarraNivel_Hexagono < 1){
                contador_DecimaPrimeraBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(hexagono12.getDibujado() == false && contador_DecimaSegundaBarraNivel_Hexagono < 1){
                contador_DecimaSegundaBarraNivel_Hexagono += 1;
                dibujadoBarraNivel++;
            }

            if(dibujadoBarraNivel == 1 || dibujadoBarraNivel == 2 || dibujadoBarraNivel == 3 || dibujadoBarraNivel == 4
                    || dibujadoBarraNivel == 5 || dibujadoBarraNivel == 6 || dibujadoBarraNivel == 7 || dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                primerColor_BarraDeNivel.drawBarraDeNivel({0.0, 0.0, 1.0}, {0.137255, 0.419608, 0.556863}, {0.137255, 0.419608, 0.556863}, {0.0, 0.0, 1.0});//BLUE AND STEELBLUE
            }
            if(dibujadoBarraNivel == 2 || dibujadoBarraNivel == 3 || dibujadoBarraNivel == 4
                    || dibujadoBarraNivel == 5 || dibujadoBarraNivel == 6 || dibujadoBarraNivel == 7 || dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                segundoColor_BarraDeNivel.drawBarraDeNivel({0.137255, 0.419608, 0.556863}, {0.372549, 0.623529, 0.623529}, {0.372549, 0.623529, 0.623529}, {0.137255, 0.419608, 0.556863});//STEELBLUE AND CADET BLUE
            }
            if(dibujadoBarraNivel == 3 || dibujadoBarraNivel == 4
                    || dibujadoBarraNivel == 5 || dibujadoBarraNivel == 6 || dibujadoBarraNivel == 7 || dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                tercerColor_BarraDeNivel.drawBarraDeNivel({0.372549, 0.623529, 0.623529}, {0.5, 1.0, 1.0}, {0.5, 1.0, 1.0}, {0.372549, 0.623529, 0.623529});//CADET BLUE AND LIGHTBLUE
            }
            if(dibujadoBarraNivel == 4
                    || dibujadoBarraNivel == 5 || dibujadoBarraNivel == 6 || dibujadoBarraNivel == 7 || dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                cuartoColor_BarraDeNivel.drawBarraDeNivel({0.5, 1.0, 1.0}, {0.439216, 0.858824, 0.576471}, {0.439216, 0.858824, 0.576471}, {0.5, 1.0, 1.0});//LIGHTBLUE AND AQUAMARINE
            }
            if(dibujadoBarraNivel == 5 || dibujadoBarraNivel == 6 || dibujadoBarraNivel == 7 || dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                quintoColor_BarraDeNivel.drawBarraDeNivel({0.439216, 0.858824, 0.576471}, {0.196078, 0.8, 0.196078}, {0.196078, 0.8, 0.196078}, {0.439216, 0.858824, 0.576471});//AQUAMARINE AND LIMEGREEN
            }
            if(dibujadoBarraNivel == 6 || dibujadoBarraNivel == 7 || dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                sextoColor_BarraDeNivel.drawBarraDeNivel({0.196078, 0.8, 0.196078}, {0.2, 1.0, 0.0}, {0.2, 1.0, 0.0}, {0.196078, 0.8, 0.196078});//LIMEGREEN AND LIGHTGREEN
            }
            if(dibujadoBarraNivel == 7 || dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                septimoColor_BarraDeNivel.drawBarraDeNivel({0.2, 1.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 1.0, 0.0}, {0.2, 1.0, 0.0});//LIGHTGREEN AND GREEN
            }
            if(dibujadoBarraNivel == 8
                    || dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                octavoColor_BarraDeNivel.drawBarraDeNivel({0.0, 1.0, 0.0}, {0.6, 0.8, 0.196078}, {0.6, 0.8, 0.196078}, {0.0, 1.0, 0.0});//GREEN AND YELLOWGREEN
            }
            if(dibujadoBarraNivel == 9 || dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                novenoColor_BarraDeNivel.drawBarraDeNivel({0.6, 0.8, 0.196078}, {0.7, 1.0, 0.0}, {0.7, 1.0, 0.0}, {0.6, 0.8, 0.196078});//YELLOWGREEN AND LIGHTYELLOW
            }
            if(dibujadoBarraNivel == 10 || dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                decimoColor_BarraDeNivel.drawBarraDeNivel({0.7, 1.0, 0.0}, {1.0, 1.0, 0.0}, {1.0, 1.0, 0.0}, {0.7, 1.0, 0.0});//LIGHTYELLOW AND YELLOW
            }
            if(dibujadoBarraNivel == 11 || dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                decimoPrimerColor_BarraDeNivel.drawBarraDeNivel({1.0, 1.0, 0.0}, {1.0, 0.85, 0.0}, {1.0, 0.85, 0.0}, {1.0, 1.0, 0.0});//YELLOW AND EXTRALIGHT ORANGE
            }
            if(dibujadoBarraNivel == 12
                    || dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                decimoSegundoColor_BarraDeNivel.drawBarraDeNivel({1.0, 0.85, 0.0}, {1.0, 0.7, 0.0}, {1.0, 0.7, 0.0}, {1.0, 0.85, 0.0});//EXTRALIGHT ORANGE AND LIGHTORANGE
            }
            if(dibujadoBarraNivel == 13 || dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                decimoTercerColor_BarraDeNivel.drawBarraDeNivel({1.0, 0.7, 0.0}, {1.0, 0.5, 0.0}, {1.0, 0.5, 0.0}, {1.0, 0.7, 0.0});//LIGHTORANGE AND ORANGE
            }
            if(dibujadoBarraNivel == 14 || dibujadoBarraNivel == 15){
                decimoCuartoColor_BarraDeNivel.drawBarraDeNivel({1.0, 0.5, 0.0}, {1.0, 0.3, 0.0}, {1.0, 0.3, 0.0}, {1.0, 0.5, 0.0});//ORANGE AND LIGHT REDORANGE
            }
            if(dibujadoBarraNivel == 15){
                decimoQuintoColor_BarraDeNivel.drawBarraDeNivel({1.0, 0.3, 0.0}, {1.0, 0.2, 0.0}, {1.0, 0.2, 0.0}, {1.0, 0.3, 0.0});//LIGHT REDORANGE AND REDORANGE
            }

            //-------------------------------------------------------------------------------------------------
            //                      RESETEO DE LA BARRA DE NIVEL Y DE LAS BOLAS Y SUS CONTADORES
            //-------------------------------------------------------------------------------------------------

            //RESETEO DE LAS BOLAS DEL PRIMER NIVEL
            if(ball8.getDibujado() == false && ball9.getDibujado() == false && ball10.getDibujado() == false && ball11.getDibujado() == false
                    && ball12.getDibujado() == false && ball13.getDibujado() == false && ball14.getDibujado() == false && ball15.getDibujado() == false){
                numeroRandom_Eje_Positivo_Negativo = rand() % 2;
                if(numeroRandom_Eje_Positivo_Negativo == 0){
                    numeroRandom_EjeX_Ball1 = ((rand() % 9) * 0.1);
                }else if(numeroRandom_Eje_Positivo_Negativo == 1){
                    numeroRandom_EjeX_Ball1 = (((rand() % 9) * 0.1) * -1);
                }
                resetBalls(numeroRandom_EjeX_Ball1);//Funcion que resetea las bolas del primer nivel
                resetBarraNivel();//Funcion que resetea los contadores que utilizan las bolas del primer nivel para el dibujado de la barra de nivel
            }

            //CONTADOR Y RESETEO BOLAS DEL SEGUNDO NIVEL
            if(contador_TiempoEspera_BallNivel2 <= 500){
                contador_TiempoEspera_BallNivel2 += 1;
            }
            if(contador_TiempoEspera_BallNivel2 >= 500){
                aparece_BallNivel2 = true;
            }
            if(nivel2Ball8.getDibujado() == false && nivel2Ball9.getDibujado() == false && nivel2Ball10.getDibujado() == false
                    && nivel2Ball11.getDibujado() == false && nivel2Ball12.getDibujado() == false && nivel2Ball13.getDibujado() == false
                    && nivel2Ball14.getDibujado() == false && nivel2Ball15.getDibujado() == false){
                numeroRandom_Eje_Positivo_Negativo_Nivel2 = rand() % 2;
                if(numeroRandom_Eje_Positivo_Negativo_Nivel2 == 0){
                    numeroRandom_EjeX_Ball2 = ((rand() % 9) * 0.1);
                }else if(numeroRandom_Eje_Positivo_Negativo_Nivel2 == 1){
                    numeroRandom_EjeX_Ball2 = (((rand() % 9) * 0.1) * -1);
                }
                resetBallsNivel2(numeroRandom_EjeX_Ball2);//Funcion que resetea las bolas del segundo nivel
                resetBarraNivel2();//Funcion que resetea los contadores que utilizan las bolas del segundo nivel para el dibujado de la barra de nivel
            }

            //CONTADOR Y RESETEO DE LOS HEXAGONOS
            if(contador_TiempoEspera_HexagonoGrande1 <= 1000){
                contador_TiempoEspera_HexagonoGrande1 += 1;
            }
            if(contador_TiempoEspera_HexagonoGrande1 >= 1000){
                aparece_HexagonoGrande1 = true;
            }
            if(hexagono5.getDibujado() == false && hexagono6.getDibujado() == false && hexagono7.getDibujado() == false && hexagono8.getDibujado() == false){
                numeroRandom_Eje_Positivo_Negativo_HexagonoGrande1 = rand() % 2;
                if(numeroRandom_Eje_Positivo_Negativo_HexagonoGrande1 == 0){
                    numeroRandom_EjeX_HexagonoGrande1 = ((rand() % 9) * 0.1);
                }else if(numeroRandom_Eje_Positivo_Negativo_HexagonoGrande1 == 1){
                    numeroRandom_EjeX_HexagonoGrande1 = (((rand() % 9) * 0.1) * -1);
                }
                resetBarraNivelHexagonoGrande1();
                resetHexagonosParte1(numeroRandom_EjeX_HexagonoGrande1);
            }

            if(contador_TiempoEspera_HexagonoGrande2 <= 2000){
                contador_TiempoEspera_HexagonoGrande2 += 1;
            }
            if(contador_TiempoEspera_HexagonoGrande2 >= 2000){
                aparece_HexagonoGrande2 = true;
            }
            if(hexagono9.getDibujado() == false && hexagono10.getDibujado() == false && hexagono11.getDibujado() == false && hexagono12.getDibujado() == false){
                numeroRandom_Eje_Positivo_Negativo_HexagonoGrande2 = rand() % 2;
                if(numeroRandom_Eje_Positivo_Negativo_HexagonoGrande2 == 1){
                    numeroRandom_EjeX_HexagonoGrande2 = ((rand() % 9) * 0.1);
                }else if(numeroRandom_Eje_Positivo_Negativo_HexagonoGrande2 == 2){
                    numeroRandom_EjeX_HexagonoGrande2 = (((rand() % 9) * 0.1) * -1);
                }
                resetBarraNivelHexagonoGrande2();
                resetHexagonosParte2(numeroRandom_EjeX_HexagonoGrande2);
            }

            //RESETEO DE LA BARRA DE NIVEL Y SUBIDA DE NIVEL
            if(dibujadoBarraNivel >= 16){
                if(level != 100){
                    dibujadoBarraNivel = 0;
                    level++;
                }
            }

            //-------------------------------------------------------------------------------------------------
            //                               SACAR NIVEL POR PANTALLA
            //-------------------------------------------------------------------------------------------------

            sprintf(Nivel_PanicMode,"%s","LEVEL");
            sprintf(Nivel1_PanicMode,"%d",level);

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(0.87, 0.71, 0.23);
            renderBitmapString(355,670,0,GLUT_BITMAP_HELVETICA_18,Nivel_PanicMode);
            glColor3f(1.0, 0.4, 0.0);
            renderBitmapString(430,670,0,GLUT_BITMAP_HELVETICA_18,Nivel1_PanicMode);
            glPopMatrix();

            restorePerspectiveProjection();
        }

        //=====================================================================================================

        //-----------------------------------------------------------------------------------------------------
        //                                   SACAR VIDAS POR PANTALLA
        //-----------------------------------------------------------------------------------------------------

        sprintf(vida,"Vidas: %d",vidas);

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(1.0, 0.5, 0.0);
        renderBitmapString(30,700,0,GLUT_BITMAP_HELVETICA_18,vida);
        glPopMatrix();

        restorePerspectiveProjection();

        //-----------------------------------------------------------------------------------------------------
        //                                   SISTEMA DE PUNTUACION
        //-----------------------------------------------------------------------------------------------------

        //PUNTUACION DURANTE EL JUEGO
        sprintf(puntuacion,"%d", puntuacion_Total);

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(1.0, 0.5, 0.0);
        renderBitmapString(30,670,0,GLUT_BITMAP_HELVETICA_18,puntuacion);
        glPopMatrix();

        restorePerspectiveProjection();

        //LECTURA Y ESCRITURA DEL ARCHIVO PUNTUACION.TXT PARA LA PUNTUACION RECORD
        /*
    fichero.open("puntuacion.txt", ios::in);

    if(fichero.is_open()){
        while(getline(fichero,linea)){
            cout << linea << endl;
        }
    }

    fichero.close();

    setOrthographicProjection();

    glPushMatrix();
    glLoadIdentity();
    renderBitmapString(30,80,0,GLUT_BITMAP_HELVETICA_12,puntuacion_Record);
    glPopMatrix();

    restorePerspectiveProjection();
*/
    }

    //-------------------------------------------------------------------------------------------------
    //                               MUERTE DEL JUGADOR
    //-------------------------------------------------------------------------------------------------

    if(vidas == 0){
        inicioJuego = false;
        juegoPerdido = true;

        recuadroVueltaMenuInicialJuegoTerminado.draw();
        marcoVueltaMenuInicialGameOver1.draw();
        marcoVueltaMenuInicialGameOver2.draw();
        marcoVueltaMenuInicialGameOver3.draw();
        marcoVueltaMenuInicialGameOver4.draw();

        sprintf(gameOver,"GAME OVER!!!");
        sprintf(backMenuInicial,"MENU INICIAL");

        setOrthographicProjection();

        glPushMatrix();
        glLoadIdentity();
        glColor3f(1.0, 0.5, 0.0);
        renderBitmapString(340,100,0,GLUT_BITMAP_HELVETICA_18,gameOver);
        glColor3f(0.0, 0.0, 0.0);
        renderBitmapString(340,315,0,GLUT_BITMAP_HELVETICA_18,backMenuInicial);
        glPopMatrix();

        restorePerspectiveProjection();
    }

    //-------------------------------------------------------------------------------------------------
    //                               SALIDA DEL PANIC MODE
    //-------------------------------------------------------------------------------------------------

        if(level == 100){
        contador_PanicModeGanado += 1;
        panicModeTerminado = true;
        if(contador_PanicModeGanado >= 20){
            inicioJuego = false;
            botonVueltaMenuInicial = true;

            recuadroVolverAJugarAPanicMode.draw();
            marcoVolverAJugarAPanicMode1.draw();
            marcoVolverAJugarAPanicMode2.draw();
            marcoVolverAJugarAPanicMode3.draw();
            marcoVolverAJugarAPanicMode4.draw();

            recuadroVueltaMenuInicial.draw();
            marcoVueltaMenuInicial1.draw();
            marcoVueltaMenuInicial2.draw();
            marcoVueltaMenuInicial3.draw();
            marcoVueltaMenuInicial4.draw();

            sprintf(VolverPanicMode,"RESTART");
            sprintf(volverMenuInicial,"MENU INICIAL");
            sprintf(puntuacion1PanicMode,"PANIC MODE COMPLETADO!!!");
            sprintf(puntuacion2PanicMode,"---------------------------");
            sprintf(puntuacion3PanicMode,"|           PUNTUACION TOTAL         |");
            sprintf(puntuacion4PanicMode,"---------------------------");
            sprintf(puntuacion5PanicMode,"Puntuacion extra en dificultad facil: +1000");
            sprintf(puntuacion6PanicMode,"Puntuacion extra en dificultad media: +1500");
            sprintf(puntuacion7PanicMode,"Puntuacion extra en dificultad dificil: +2000");
            sprintf(puntuacion8PanicMode,"Puntuacion extra por mantener 3 o mas vidas: +1000");
            sprintf(puntuacion9PanicMode,"Pierdes puntos por perder una vida: -200");
            sprintf(puntuacion10PanicMode,"Pierdes puntos por perder dos vidas: -500");
            sprintf(puntuacion11PanicMode,"Pierdes puntos por perder todas las vidas: -1000");
            sprintf(puntuacion12PanicMode,"Puntuacion Total: %d",puntuacion_Total);

            setOrthographicProjection();

            glPushMatrix();
            glLoadIdentity();
            glColor3f(1.0, 0.7, 0.0);
            renderBitmapString(270,50,0,GLUT_BITMAP_HELVETICA_18,puntuacion1PanicMode);
            glColor3f(0.0, 0.0, 0.0);
            renderBitmapString(545,475,0,GLUT_BITMAP_HELVETICA_18,VolverPanicMode);
            renderBitmapString(160,475,0,GLUT_BITMAP_HELVETICA_18,volverMenuInicial);
            renderBitmapString(50,120,0,GLUT_BITMAP_HELVETICA_18,puntuacion2PanicMode);
            renderBitmapString(50,140,0,GLUT_BITMAP_HELVETICA_18,puntuacion3PanicMode);
            renderBitmapString(50,160,0,GLUT_BITMAP_HELVETICA_18,puntuacion4PanicMode);
            if(dificultad == 1){
                if(contador_DificultadFacil_PanicMode <= 0){
                    contador_DificultadFacil_PanicMode += 1;
                    puntuacion_Total += 1000;
                }
                renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion5PanicMode);
            }else if(dificultad == 2){
                if(contador_DificultadMedia_PanicMode <= 0){
                    contador_DificultadMedia_PanicMode += 1;
                    puntuacion_Total += 1500;
                }
                renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion6PanicMode);
            }else if(dificultad == 3){
                if(contador_DificultadDificil_PanicMode <= 0){
                    contador_DificultadDificil_PanicMode += 1;
                    puntuacion_Total += 2000;
                }
                renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion7PanicMode);
            }

            if(vidas >= 3){
                if(contador_VidasMayorIgualTres_PanicMode <= 0){
                    contador_VidasMayorIgualTres_PanicMode += 1;
                    puntuacion_Total += 1000;
                }
                renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion8PanicMode);
            }else if(vidas == 2){
                if(contador_VidasIgualDos_PanicMode <= 0){
                    contador_VidasIgualDos_PanicMode += 1;
                    puntuacion_Total -= 200;
                }
                renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion9PanicMode);
            }else if(vidas == 1){
                if(contador_VidasIgualUno_PanicMode <= 0){
                    contador_VidasIgualUno_PanicMode += 1;
                    puntuacion_Total -= 500;
                }
                renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion10PanicMode);
            }else if(vidas == 0){
                if(contador_VidasIgualCero_PanicMode <= 0){
                    contador_VidasIgualCero_PanicMode += 1;
                    puntuacion_Total -= 1000;
                }
                renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion11PanicMode);
            }
            renderBitmapString(50,220,0,GLUT_BITMAP_HELVETICA_18,puntuacion12PanicMode);
            glPopMatrix();

            restorePerspectiveProjection();
        }
    }

    //-----------------------------------------------------------------------------------------------------
    //                                   PELOTAS DESTRUIDAS Y SALIDA DEL JUEGO
    //-----------------------------------------------------------------------------------------------------

    if(nivel == 1){
        if(pelotasDestruidas == 15){
            ig += 1;
            nivel1Terminado = true;
            if(ig >= 20){
                inicioJuego = false;
                botonVueltaMenuInicial = true;

                recuadroProximoNivel.draw();
                marcoProximoNivel1.draw();
                marcoProximoNivel2.draw();
                marcoProximoNivel3.draw();
                marcoProximoNivel4.draw();

                recuadroVueltaMenuInicial.draw();
                marcoVueltaMenuInicial1.draw();
                marcoVueltaMenuInicial2.draw();
                marcoVueltaMenuInicial3.draw();
                marcoVueltaMenuInicial4.draw();

                sprintf(siguienteNivel_Mundo1,"PROXIMO NIVEL");
                sprintf(volverMenuInicial,"MENU INICIAL");
                sprintf(puntuacion1Nivel1,"MUNDO 1-1 COMPLETADO!!!");
                sprintf(puntuacion2Nivel1,"---------------------------");
                sprintf(puntuacion3Nivel1,"|           PUNTUACION TOTAL         |");
                sprintf(puntuacion4Nivel1,"---------------------------");
                sprintf(puntuacion5Nivel1,"Puntuacion extra en dificultad facil: +1000");
                sprintf(puntuacion6Nivel1,"Puntuacion extra en dificultad media: +1500");
                sprintf(puntuacion7Nivel1,"Puntuacion extra en dificultad dificil: +2000");
                sprintf(puntuacion8Nivel1,"Puntuacion extra por mantener 3 o mas vidas: +1000");
                sprintf(puntuacion9Nivel1,"Pierdes puntos por perder una vida: -200");
                sprintf(puntuacion10Nivel1,"Pierdes puntos por perder dos vidas: -500");
                sprintf(puntuacion11Nivel1,"Pierdes puntos por perder todas las vidas: -1000");
                sprintf(puntuacion12Nivel1,"Puntuacion Total: %d",puntuacion_Total);

                setOrthographicProjection();

                glPushMatrix();
                glLoadIdentity();
                glColor3f(1.0, 0.7, 0.0);
                renderBitmapString(270,50,0,GLUT_BITMAP_HELVETICA_18,puntuacion1Nivel1);
                glColor3f(0.0, 0.0, 0.0);
                renderBitmapString(510,475,0,GLUT_BITMAP_HELVETICA_18,siguienteNivel_Mundo1);
                renderBitmapString(160,475,0,GLUT_BITMAP_HELVETICA_18,volverMenuInicial);
                renderBitmapString(50,120,0,GLUT_BITMAP_HELVETICA_18,puntuacion2Nivel1);
                renderBitmapString(50,140,0,GLUT_BITMAP_HELVETICA_18,puntuacion3Nivel1);
                renderBitmapString(50,160,0,GLUT_BITMAP_HELVETICA_18,puntuacion4Nivel1);
                if(dificultad == 1){
                    if(contador_DificultadFacil_Nivel1 <= 0){
                        contador_DificultadFacil_Nivel1 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion5Nivel1);
                }else if(dificultad == 2){
                    if(contador_DificultadMedia_Nivel1 <= 0){
                        contador_DificultadMedia_Nivel1 += 1;
                        puntuacion_Total += 1500;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion6Nivel1);
                }else if(dificultad == 3){
                    if(contador_DificultadDificil_Nivel1 <= 0){
                        contador_DificultadDificil_Nivel1 += 1;
                        puntuacion_Total += 2000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion7Nivel1);
                }

                if(vidas >= 3){
                    if(contador_VidasMayorIgualTres_Nivel1 <= 0){
                        contador_VidasMayorIgualTres_Nivel1 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion8Nivel1);
                }else if(vidas == 2){
                    if(contador_VidasIgualDos_Nivel1 <= 0){
                        contador_VidasIgualDos_Nivel1 += 1;
                        puntuacion_Total -= 200;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion9Nivel1);
                }else if(vidas == 1){
                    if(contador_VidasIgualUno_Nivel1 <= 0){
                        contador_VidasIgualUno_Nivel1 += 1;
                        puntuacion_Total -= 500;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion10Nivel1);
                }else if(vidas == 0){
                    if(contador_VidasIgualCero_Nivel1 <= 0){
                        contador_VidasIgualCero_Nivel1 += 1;
                        puntuacion_Total -= 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion11Nivel1);
                }
                renderBitmapString(50,220,0,GLUT_BITMAP_HELVETICA_18,puntuacion12Nivel1);
                glPopMatrix();

                restorePerspectiveProjection();
            }
        }
    }else if(nivel == 2){
        if(pelotasDestruidas == 30){
            in2g += 1;
            nivel1Terminado = false;
            nivel2Terminado = true;
            if(in2g >= 20){
                inicioJuego = false;
                botonVueltaMenuInicial = true;

                recuadroProximoNivel.draw();
                marcoProximoNivel1.draw();
                marcoProximoNivel2.draw();
                marcoProximoNivel3.draw();
                marcoProximoNivel4.draw();

                recuadroVueltaMenuInicial.draw();
                marcoVueltaMenuInicial1.draw();
                marcoVueltaMenuInicial2.draw();
                marcoVueltaMenuInicial3.draw();
                marcoVueltaMenuInicial4.draw();

                sprintf(siguienteNivel_Mundo2,"PROXIMO NIVEL");
                sprintf(volverMenuInicial,"MENU INICIAL");
                sprintf(puntuacion1Nivel2,"MUNDO 1-2 COMPLETADO!!!");
                sprintf(puntuacion2Nivel2,"---------------------------");
                sprintf(puntuacion3Nivel2,"|           PUNTUACION TOTAL         |");
                sprintf(puntuacion4Nivel2,"---------------------------");
                sprintf(puntuacion5Nivel2,"Puntuacion extra en dificultad facil: +1000");
                sprintf(puntuacion6Nivel2,"Puntuacion extra en dificultad media: +1500");
                sprintf(puntuacion7Nivel2,"Puntuacion extra en dificultad dificil: +2000");
                sprintf(puntuacion8Nivel2,"Puntuacion extra por mantener 3 o mas vidas: +1000");
                sprintf(puntuacion9Nivel2,"Pierdes puntos por perder una vida: -200");
                sprintf(puntuacion10Nivel2,"Pierdes puntos por perder dos vidas: -500");
                sprintf(puntuacion11Nivel2,"Pierdes puntos por perder todas las vidas: -1000");
                sprintf(puntuacion12Nivel2,"Puntuacion Total: %d",puntuacion_Total);

                setOrthographicProjection();

                glPushMatrix();
                glLoadIdentity();
                glColor3f(1.0, 0.7, 0.0);
                renderBitmapString(270,50,0,GLUT_BITMAP_HELVETICA_18,puntuacion1Nivel2);
                glColor3f(0.0, 0.0, 0.0);
                renderBitmapString(510,475,0,GLUT_BITMAP_HELVETICA_18,siguienteNivel_Mundo2);
                renderBitmapString(160,475,0,GLUT_BITMAP_HELVETICA_18,volverMenuInicial);
                renderBitmapString(50,120,0,GLUT_BITMAP_HELVETICA_18,puntuacion2Nivel2);
                renderBitmapString(50,140,0,GLUT_BITMAP_HELVETICA_18,puntuacion3Nivel2);
                renderBitmapString(50,160,0,GLUT_BITMAP_HELVETICA_18,puntuacion4Nivel2);
                if(dificultad == 1){
                    if(contador_DificultadFacil_Nivel2 <= 0){
                        contador_DificultadFacil_Nivel2 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion5Nivel2);
                }else if(dificultad == 2){
                    if(contador_DificultadMedia_Nivel2 <= 0){
                        contador_DificultadMedia_Nivel2 += 1;
                        puntuacion_Total += 1500;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion6Nivel2);
                }else if(dificultad == 3){
                    if(contador_DificultadDificil_Nivel2 <= 0){
                        contador_DificultadDificil_Nivel2 += 1;
                        puntuacion_Total += 2000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion7Nivel2);
                }

                if(vidas >= 3){
                    if(contador_VidasMayorIgualTres_Nivel2 <= 0){
                        contador_VidasMayorIgualTres_Nivel2 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion8Nivel2);
                }else if(vidas == 2){
                    if(contador_VidasIgualDos_Nivel2 <= 0){
                        contador_VidasIgualDos_Nivel2 += 1;
                        puntuacion_Total -= 200;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion9Nivel2);
                }else if(vidas == 1){
                    if(contador_VidasIgualUno_Nivel2 <= 0){
                        contador_VidasIgualUno_Nivel2 += 1;
                        puntuacion_Total -= 500;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion10Nivel2);
                }else if(vidas == 0){
                    if(contador_VidasIgualCero_Nivel2 <= 0){
                        contador_VidasIgualCero_Nivel2 += 1;
                        puntuacion_Total -= 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion11Nivel2);
                }
                renderBitmapString(50,220,0,GLUT_BITMAP_HELVETICA_18,puntuacion12Nivel2);
                glPopMatrix();

                restorePerspectiveProjection();
            }
        }
    }else if(nivel == 3){
        if(pelotasDestruidas == 45){
            in3g += 1;
            nivel2Terminado = false;
            nivel3Terminado = true;
            if(in3g >= 20){
                inicioJuego = false;
                botonVueltaMenuInicial = true;

                recuadroProximoNivel.draw();
                marcoProximoNivel1.draw();
                marcoProximoNivel2.draw();
                marcoProximoNivel3.draw();
                marcoProximoNivel4.draw();

                recuadroVueltaMenuInicial.draw();
                marcoVueltaMenuInicial1.draw();
                marcoVueltaMenuInicial2.draw();
                marcoVueltaMenuInicial3.draw();
                marcoVueltaMenuInicial4.draw();

                sprintf(siguienteNivel_Mundo3,"PROXIMO NIVEL");
                sprintf(volverMenuInicial,"MENU INICIAL");
                sprintf(puntuacion1Nivel3,"MUNDO 1-3 COMPLETADO!!!");
                sprintf(puntuacion2Nivel3,"---------------------------");
                sprintf(puntuacion3Nivel3,"|           PUNTUACION TOTAL         |");
                sprintf(puntuacion4Nivel3,"---------------------------");
                sprintf(puntuacion5Nivel3,"Puntuacion extra en dificultad facil: +1000");
                sprintf(puntuacion6Nivel3,"Puntuacion extra en dificultad media: +1500");
                sprintf(puntuacion7Nivel3,"Puntuacion extra en dificultad dificil: +2000");
                sprintf(puntuacion8Nivel3,"Puntuacion extra por mantener 3 o mas vidas: +1000");
                sprintf(puntuacion9Nivel3,"Pierdes puntos por perder una vida: -200");
                sprintf(puntuacion10Nivel3,"Pierdes puntos por perder dos vidas: -500");
                sprintf(puntuacion11Nivel3,"Pierdes puntos por perder todas las vidas: -1000");
                sprintf(puntuacion12Nivel3,"Puntuacion Total: %d",puntuacion_Total);

                setOrthographicProjection();

                glPushMatrix();
                glLoadIdentity();
                glColor3f(1.0, 0.7, 0.0);
                renderBitmapString(270,50,0,GLUT_BITMAP_HELVETICA_18,puntuacion1Nivel3);
                glColor3f(0.0, 0.0, 0.0);
                renderBitmapString(510,475,0,GLUT_BITMAP_HELVETICA_18,siguienteNivel_Mundo3);
                renderBitmapString(160,475,0,GLUT_BITMAP_HELVETICA_18,volverMenuInicial);
                renderBitmapString(50,120,0,GLUT_BITMAP_HELVETICA_18,puntuacion2Nivel3);
                renderBitmapString(50,140,0,GLUT_BITMAP_HELVETICA_18,puntuacion3Nivel3);
                renderBitmapString(50,160,0,GLUT_BITMAP_HELVETICA_18,puntuacion4Nivel3);
                if(dificultad == 1){
                    if(contador_DificultadFacil_Nivel3 <= 0){
                        contador_DificultadFacil_Nivel3 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion5Nivel3);
                }else if(dificultad == 2){
                    if(contador_DificultadMedia_Nivel3 <= 0){
                        contador_DificultadMedia_Nivel3 += 1;
                        puntuacion_Total += 1500;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion6Nivel3);
                }else if(dificultad == 3){
                    if(contador_DificultadDificil_Nivel3 <= 0){
                        contador_DificultadDificil_Nivel3 += 1;
                        puntuacion_Total += 2000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion7Nivel3);
                }

                if(vidas >= 3){
                    if(contador_VidasMayorIgualTres_Nivel3 <= 0){
                        contador_VidasMayorIgualTres_Nivel3 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion8Nivel3);
                }else if(vidas == 2){
                    if(contador_VidasIgualDos_Nivel3 <= 0){
                        contador_VidasIgualDos_Nivel3 += 1;
                        puntuacion_Total -= 200;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion9Nivel3);
                }else if(vidas == 1){
                    if(contador_VidasIgualUno_Nivel3 <= 0){
                        contador_VidasIgualUno_Nivel3 += 1;
                        puntuacion_Total -= 500;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion10Nivel3);
                }else if(vidas == 0){
                    if(contador_VidasIgualCero_Nivel3 <= 0){
                        contador_VidasIgualCero_Nivel3 += 1;
                        puntuacion_Total -= 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion11Nivel3);
                }
                renderBitmapString(50,220,0,GLUT_BITMAP_HELVETICA_18,puntuacion12Nivel3);
                glPopMatrix();

                restorePerspectiveProjection();
            }
        }
    }else if(nivel == 4){
        if(pelotasDestruidas == 45){
            in4g += 1;
            nivel3Terminado = false;
            nivel4Terminado = true;
            if(in4g >= 20){
                inicioJuego = false;
                botonVueltaMenuInicial = true;

                recuadroProximoNivel.draw();
                marcoProximoNivel1.draw();
                marcoProximoNivel2.draw();
                marcoProximoNivel3.draw();
                marcoProximoNivel4.draw();

                recuadroVueltaMenuInicial.draw();
                marcoVueltaMenuInicial1.draw();
                marcoVueltaMenuInicial2.draw();
                marcoVueltaMenuInicial3.draw();
                marcoVueltaMenuInicial4.draw();

                sprintf(siguienteNivel_Mundo4,"PROXIMO NIVEL");
                sprintf(volverMenuInicial,"MENU INICIAL");
                sprintf(puntuacion1Nivel4,"MUNDO 1-4 COMPLETADO!!!");
                sprintf(puntuacion2Nivel4,"---------------------------");
                sprintf(puntuacion3Nivel4,"|           PUNTUACION TOTAL         |");
                sprintf(puntuacion4Nivel4,"---------------------------");
                sprintf(puntuacion5Nivel4,"Puntuacion extra en dificultad facil: +1000");
                sprintf(puntuacion6Nivel4,"Puntuacion extra en dificultad media: +1500");
                sprintf(puntuacion7Nivel4,"Puntuacion extra en dificultad dificil: +2000");
                sprintf(puntuacion8Nivel4,"Puntuacion extra por mantener 3 o mas vidas: +1000");
                sprintf(puntuacion9Nivel4,"Pierdes puntos por perder una vida: -200");
                sprintf(puntuacion10Nivel4,"Pierdes puntos por perder dos vidas: -500");
                sprintf(puntuacion11Nivel4,"Pierdes puntos por perder todas las vidas: -1000");
                sprintf(puntuacion12Nivel4,"Puntuacion Total: %d",puntuacion_Total);

                setOrthographicProjection();

                glPushMatrix();
                glLoadIdentity();
                glColor3f(1.0, 0.7, 0.0);
                renderBitmapString(270,50,0,GLUT_BITMAP_HELVETICA_18,puntuacion1Nivel4);
                glColor3f(0.0, 0.0, 0.0);
                renderBitmapString(510,475,0,GLUT_BITMAP_HELVETICA_18,siguienteNivel_Mundo4);
                renderBitmapString(160,475,0,GLUT_BITMAP_HELVETICA_18,volverMenuInicial);
                renderBitmapString(50,120,0,GLUT_BITMAP_HELVETICA_18,puntuacion2Nivel4);
                renderBitmapString(50,140,0,GLUT_BITMAP_HELVETICA_18,puntuacion3Nivel4);
                renderBitmapString(50,160,0,GLUT_BITMAP_HELVETICA_18,puntuacion4Nivel4);
                if(dificultad == 1){
                    if(contador_DificultadFacil_Nivel4 <= 0){
                        contador_DificultadFacil_Nivel4 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion5Nivel4);
                }else if(dificultad == 2){
                    if(contador_DificultadMedia_Nivel4 <= 0){
                        contador_DificultadMedia_Nivel4 += 1;
                        puntuacion_Total += 1500;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion6Nivel4);
                }else if(dificultad == 3){
                    if(contador_DificultadDificil_Nivel4 <= 0){
                        contador_DificultadDificil_Nivel4 += 1;
                        puntuacion_Total += 2000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion7Nivel4);
                }

                if(vidas >= 3){
                    if(contador_VidasMayorIgualTres_Nivel4 <= 0){
                        contador_VidasMayorIgualTres_Nivel4 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion8Nivel4);
                }else if(vidas == 2){
                    if(contador_VidasIgualDos_Nivel4 <= 0){
                        contador_VidasIgualDos_Nivel4 += 1;
                        puntuacion_Total -= 200;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion9Nivel4);
                }else if(vidas == 1){
                    if(contador_VidasIgualUno_Nivel4 <= 0){
                        contador_VidasIgualUno_Nivel4 += 1;
                        puntuacion_Total -= 500;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion10Nivel4);
                }else if(vidas == 0){
                    if(contador_VidasIgualCero_Nivel4 <= 0){
                        contador_VidasIgualCero_Nivel4 += 1;
                        puntuacion_Total -= 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion11Nivel4);
                }
                renderBitmapString(50,220,0,GLUT_BITMAP_HELVETICA_18,puntuacion12Nivel4);
                glPopMatrix();

                restorePerspectiveProjection();
            }
        }
    }else if(nivel == 5){
        if(pelotasDestruidas == 30){
            in5g += 1;
            nivel4Terminado = false;
            nivel5Terminado = true;
            if(in5g >= 20){
                inicioJuego = false;
                botonVueltaMenuInicial = true;

                recuadroProximoNivel.draw();
                marcoProximoNivel1.draw();
                marcoProximoNivel2.draw();
                marcoProximoNivel3.draw();
                marcoProximoNivel4.draw();

                recuadroVueltaMenuInicial.draw();
                marcoVueltaMenuInicial1.draw();
                marcoVueltaMenuInicial2.draw();
                marcoVueltaMenuInicial3.draw();
                marcoVueltaMenuInicial4.draw();

                sprintf(siguienteNivel_Mundo5,"PROXIMO NIVEL");
                sprintf(volverMenuInicial,"MENU INICIAL");
                sprintf(puntuacion1Nivel5,"MUNDO 1-4 COMPLETADO!!!");
                sprintf(puntuacion2Nivel5,"---------------------------");
                sprintf(puntuacion3Nivel5,"|           PUNTUACION TOTAL         |");
                sprintf(puntuacion4Nivel5,"---------------------------");
                sprintf(puntuacion5Nivel5,"Puntuacion extra en dificultad facil: +1000");
                sprintf(puntuacion6Nivel5,"Puntuacion extra en dificultad media: +1500");
                sprintf(puntuacion7Nivel5,"Puntuacion extra en dificultad dificil: +2000");
                sprintf(puntuacion8Nivel5,"Puntuacion extra por mantener 3 o mas vidas: +1000");
                sprintf(puntuacion9Nivel5,"Pierdes puntos por perder una vida: -200");
                sprintf(puntuacion10Nivel5,"Pierdes puntos por perder dos vidas: -500");
                sprintf(puntuacion11Nivel5,"Pierdes puntos por perder todas las vidas: -1000");
                sprintf(puntuacion12Nivel5,"Puntuacion Total: %d",puntuacion_Total);

                setOrthographicProjection();

                glPushMatrix();
                glLoadIdentity();
                glColor3f(1.0, 0.7, 0.0);
                renderBitmapString(270,50,0,GLUT_BITMAP_HELVETICA_18,puntuacion1Nivel5);
                glColor3f(0.0, 0.0, 0.0);
                renderBitmapString(510,475,0,GLUT_BITMAP_HELVETICA_18,siguienteNivel_Mundo5);
                renderBitmapString(160,475,0,GLUT_BITMAP_HELVETICA_18,volverMenuInicial);
                renderBitmapString(50,120,0,GLUT_BITMAP_HELVETICA_18,puntuacion2Nivel5);
                renderBitmapString(50,140,0,GLUT_BITMAP_HELVETICA_18,puntuacion3Nivel5);
                renderBitmapString(50,160,0,GLUT_BITMAP_HELVETICA_18,puntuacion4Nivel5);
                if(dificultad == 1){
                    if(contador_DificultadFacil_Nivel5 <= 0){
                        contador_DificultadFacil_Nivel5 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion5Nivel5);
                }else if(dificultad == 2){
                    if(contador_DificultadMedia_Nivel5 <= 0){
                        contador_DificultadMedia_Nivel5 += 1;
                        puntuacion_Total += 1500;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion6Nivel5);
                }else if(dificultad == 3){
                    if(contador_DificultadDificil_Nivel5 <= 0){
                        contador_DificultadDificil_Nivel5 += 1;
                        puntuacion_Total += 2000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion7Nivel5);
                }

                if(vidas >= 3){
                    if(contador_VidasMayorIgualTres_Nivel5 <= 0){
                        contador_VidasMayorIgualTres_Nivel5 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion8Nivel5);
                }else if(vidas == 2){
                    if(contador_VidasIgualDos_Nivel5 <= 0){
                        contador_VidasIgualDos_Nivel5 += 1;
                        puntuacion_Total -= 200;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion9Nivel5);
                }else if(vidas == 1){
                    if(contador_VidasIgualUno_Nivel5 <= 0){
                        contador_VidasIgualUno_Nivel5 += 1;
                        puntuacion_Total -= 500;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion10Nivel5);
                }else if(vidas == 0){
                    if(contador_VidasIgualCero_Nivel5 <= 0){
                        contador_VidasIgualCero_Nivel5 += 1;
                        puntuacion_Total -= 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion11Nivel5);
                }
                renderBitmapString(50,220,0,GLUT_BITMAP_HELVETICA_18,puntuacion12Nivel5);
                glPopMatrix();

                restorePerspectiveProjection();
            }
        }
    }else if(nivel == 6){
        if(hexagonosDestruidos == 14){
            contador_nivel_6_Win += 1;
            nivel5Terminado = false;
            nivel6Terminado = true;
            if(contador_nivel_6_Win >= 20){
                inicioJuego = false;
                botonVueltaMenuInicial = true;

                recuadroProximoNivel.draw();
                marcoProximoNivel1.draw();
                marcoProximoNivel2.draw();
                marcoProximoNivel3.draw();
                marcoProximoNivel4.draw();

                recuadroVueltaMenuInicial.draw();
                marcoVueltaMenuInicial1.draw();
                marcoVueltaMenuInicial2.draw();
                marcoVueltaMenuInicial3.draw();
                marcoVueltaMenuInicial4.draw();

                sprintf(siguienteNivel_Mundo6,"PROXIMO NIVEL");
                sprintf(volverMenuInicial,"MENU INICIAL");
                sprintf(puntuacion1Nivel6,"MUNDO 1-4 COMPLETADO!!!");
                sprintf(puntuacion2Nivel6,"---------------------------");
                sprintf(puntuacion3Nivel6,"|           PUNTUACION TOTAL         |");
                sprintf(puntuacion4Nivel6,"---------------------------");
                sprintf(puntuacion5Nivel6,"Puntuacion extra en dificultad facil: +1000");
                sprintf(puntuacion6Nivel6,"Puntuacion extra en dificultad media: +1500");
                sprintf(puntuacion7Nivel6,"Puntuacion extra en dificultad dificil: +2000");
                sprintf(puntuacion8Nivel6,"Puntuacion extra por mantener 3 o mas vidas: +1000");
                sprintf(puntuacion9Nivel6,"Pierdes puntos por perder una vida: -200");
                sprintf(puntuacion10Nivel6,"Pierdes puntos por perder dos vidas: -500");
                sprintf(puntuacion11Nivel6,"Pierdes puntos por perder todas las vidas: -1000");
                sprintf(puntuacion12Nivel6,"Puntuacion Total: %d",puntuacion_Total);

                setOrthographicProjection();

                glPushMatrix();
                glLoadIdentity();
                glColor3f(1.0, 0.7, 0.0);
                renderBitmapString(270,50,0,GLUT_BITMAP_HELVETICA_18,puntuacion1Nivel6);
                glColor3f(0.0, 0.0, 0.0);
                renderBitmapString(510,475,0,GLUT_BITMAP_HELVETICA_18,siguienteNivel_Mundo6);
                renderBitmapString(160,475,0,GLUT_BITMAP_HELVETICA_18,volverMenuInicial);
                renderBitmapString(50,120,0,GLUT_BITMAP_HELVETICA_18,puntuacion2Nivel6);
                renderBitmapString(50,140,0,GLUT_BITMAP_HELVETICA_18,puntuacion3Nivel6);
                renderBitmapString(50,160,0,GLUT_BITMAP_HELVETICA_18,puntuacion4Nivel6);
                if(dificultad == 1){
                    if(contador_DificultadFacil_Nivel6 <= 0){
                        contador_DificultadFacil_Nivel6 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion5Nivel6);
                }else if(dificultad == 2){
                    if(contador_DificultadMedia_Nivel6 <= 0){
                        contador_DificultadMedia_Nivel6 += 1;
                        puntuacion_Total += 1500;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion6Nivel6);
                }else if(dificultad == 3){
                    if(contador_DificultadDificil_Nivel6 <= 0){
                        contador_DificultadDificil_Nivel6 += 1;
                        puntuacion_Total += 2000;
                    }
                    renderBitmapString(50,180,0,GLUT_BITMAP_HELVETICA_18,puntuacion7Nivel6);
                }

                if(vidas >= 3){
                    if(contador_VidasMayorIgualTres_Nivel6 <= 0){
                        contador_VidasMayorIgualTres_Nivel6 += 1;
                        puntuacion_Total += 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion8Nivel6);
                }else if(vidas == 2){
                    if(contador_VidasIgualDos_Nivel6 <= 0){
                        contador_VidasIgualDos_Nivel6 += 1;
                        puntuacion_Total -= 200;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion9Nivel6);
                }else if(vidas == 1){
                    if(contador_VidasIgualUno_Nivel6 <= 0){
                        contador_VidasIgualUno_Nivel6 += 1;
                        puntuacion_Total -= 500;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion10Nivel6);
                }else if(vidas == 0){
                    if(contador_VidasIgualCero_Nivel6 <= 0){
                        contador_VidasIgualCero_Nivel6 += 1;
                        puntuacion_Total -= 1000;
                    }
                    renderBitmapString(50,200,0,GLUT_BITMAP_HELVETICA_18,puntuacion11Nivel6);
                }
                renderBitmapString(50,220,0,GLUT_BITMAP_HELVETICA_18,puntuacion12Nivel6);
                glPopMatrix();

                restorePerspectiveProjection();
            }
        }
    }
    /*else if(nivel == 8){
        if(hexagonosDestruidos == 14){
            contador_nivel_8_Win += 1;
            if(contador_nivel_8_Win >= 20){
                cout << endl << endl << "                    --------------------------------------" << endl;
                cout <<                 "                    |         NIVEL 8 COMPLETADO!!       |" << endl;
                cout <<                 "                    --------------------------------------" << endl << endl;
                cout << "--------------------------------------" << endl;
                cout << "|           PUNTUACION TOTAL         |" << endl;
                cout << "--------------------------------------" << endl;
                if(dificultad == 1){
                    cout << endl << "Puntuacion extra en dificultad facil: +1000" << endl;
                    puntuacion_Total += 1000;
                }else if(dificultad == 2){
                    cout << endl << "Puntuacion extra en dificultad media: +1500" << endl;
                    puntuacion_Total += 1500;
                }else if(dificultad == 3){
                    cout << endl << "Puntuacion extra en dificultad dificil: +2000" << endl;
                    puntuacion_Total += 2000;
                }
                if(vidas >= 3){
                    cout << "Puntuacion extra por mantener 3 o mas vidas: +1000" << endl;
                    puntuacion_Total += 1000;
                }else if(vidas == 2){
                    cout << "Pierdes puntos por perder una vida: -200" << endl;
                    puntuacion_Total -= 200;
                }else if(vidas == 1){
                    cout << "Pierdes puntos por perder dos vidas: -500" << endl;
                    puntuacion_Total -= 500;
                }else if(vidas == 0){
                    cout << "Pierdes puntos por perder todas las vidas: -1000" << endl;
                    puntuacion_Total -= 1000;
                }
                cout << endl << "Puntuacion Total: " << puntuacion_Total << endl << endl;
                exit(0);
            }
        }
    }
    */

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
        if(jugador1.getDibujado() != false){
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
        if(jugador1.getDibujado() != false){
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
        if(jugador1.getBufoDobleDisparo() == true && jugador1.getDibujado() != false){
            disparoJugador.push_back(new Disparo{0.012, xd1, yd1, 0.08, -0.005, {1.0, 0.0, 0.0}});
            disparoJugador.push_back(new Disparo{0.012, xd2, yd2, 0.08, 0.005, {1.0, 0.0, 0.0}});
        }else if(jugador1.getDibujado() != false){
            disparoJugador.push_back(new Disparo{0.012, xd, yd, 0.08, 0, {1.0, 0.0, 0.0}});
        }
        break;
    }
}

void mouseButton(int button, int state, int x, int y){
    if(x >= 277 && x <= 528 && y <= 290 && y >= 262 && inicioMenu == true && state == GLUT_UP){
        inicioMenu = false;
        tipoDeJuego = true;
    }
    if(x >= 277 && x <= 528 && y <= 354 && y >= 327 && inicioMenu == true && state == GLUT_UP){
        inicioMenu = false;
        dificultades = true;
    }
    if(x >= 277 && x <= 528 && y <= 420 && y >= 390 && inicioMenu == true && state == GLUT_DOWN){
        inicioMenu = false;
        Explicacion_Versiones = true;
    }
    if(x >= 277 && x <= 528 && y <= 484 && y >= 456 && inicioMenu == true && state == GLUT_DOWN){
        inicioMenu = false;
        Explicacion_controles = true;
    }
    if(x >= 277 && x <= 528 && y >= 521 && y <= 549 && inicioMenu == true && state == GLUT_DOWN){
        exit(0);
    }
    if(x >= 645 && x <= 757 && y >= 650 && y <= 678 && Explicacion_Versiones == true && state == GLUT_DOWN){
        Explicacion_Versiones = false;
        inicioMenu = true;
    }
    if(x >= 645 && x <= 757 && y >= 650 && y <= 678 && dificultades == true && state == GLUT_DOWN){
        dificultades = false;
        inicioMenu = true;
    }
    if(x >= 65 && x <= 256 && y >= 327 && y <= 355 && dificultades == true && state == GLUT_DOWN){
        dificultad = 1;
    }
    if(x >= 305 && x <= 496 && y >= 327 && y <= 355 && dificultades == true && state == GLUT_DOWN){
        dificultad = 2;
    }
    if(x >= 545 && x <= 736 && y >= 327 && y <= 355 && dificultades == true && state == GLUT_DOWN){
        dificultad = 3;
    }
    if(x >= 645 && x <= 757 && y >= 650 && y <= 678 && tipoDeJuego == true && state == GLUT_DOWN){
        tipoDeJuego = false;
        inicioMenu = true;
    }
    if(x >= 645 && x <= 757 && y >= 650 && y <= 678 && Explicacion_controles == true && state == GLUT_DOWN){
        Explicacion_controles = false;
        inicioMenu = true;
    }
    if(x >= 305 && x <= 497 && y >= 327 && y <= 355 && tipoDeJuego == true && state == GLUT_DOWN){
        tipoDeJuego = false;
        tipoJuego = 2;
        inicioJuego = true;
    }
    if(x >= 305 && x <= 497 && y >= 262 && y <= 290 && tipoDeJuego == true && state == GLUT_DOWN){
        tipoDeJuego = false;
        tipoJuego = 1;
        tipoJuegoTourMode = true;
    }
    if(x >= 645 && x <= 757 && y >= 650 && y <= 678 && tipoJuegoTourMode == true && state == GLUT_DOWN){
        tipoJuegoTourMode = false;
        tipoDeJuego = true;
    }
    if(x >= 185 && x <= 297 && y >= 230 && y <= 258 && tipoJuegoTourMode == true && state == GLUT_DOWN){
        tipoJuegoTourMode = false;
        nivel = 1;
        inicioJuego = true;
    }
    if(x >= 345 && x <= 457 && y >= 230 && y <= 258 && tipoJuegoTourMode == true && state == GLUT_DOWN){
        tipoJuegoTourMode = false;
        nivel = 2;
        inicioJuego = true;
    }
    if(x >= 505 && x <= 618 && y >= 230 && y <= 258 && tipoJuegoTourMode == true && state == GLUT_DOWN){
        tipoJuegoTourMode = false;
        nivel = 3;
        inicioJuego = true;
    }
    if(x >= 185 && x <= 297 && y >= 293 && y <= 323 && tipoJuegoTourMode == true && state == GLUT_DOWN){
        tipoJuegoTourMode = false;
        nivel = 4;
        inicioJuego = true;
    }
    if(x >= 345 && x <= 457 && y >= 293 && y <= 323 && tipoJuegoTourMode == true && state == GLUT_DOWN){
        tipoJuegoTourMode = false;
        nivel = 5;
        inicioJuego = true;
    }
    if(x >= 505 && x <= 618 && y >= 293 && y <= 323 && tipoJuegoTourMode == true && state == GLUT_DOWN){
        tipoJuegoTourMode = false;
        nivel = 6;
        inicioJuego = true;
    }
    if(x >= 457 && x <= 709 && y >= 456 && y <= 484 && nivel1Terminado == true){
        nivel = 2;
        inicioJuego = true;
        resetBalls(0);
        resetNivelTerminado();
        resetContadoresWins();
        resetPosicionJugador();
    }
    if(x >= 457 && x <= 709 && y >= 456 && y <= 484 && nivel2Terminado == true){
        nivel = 3;
        inicioJuego = true;
        resetBalls(0);
        resetBallsNivel2(0);
        resetNivelTerminado();
        resetContadoresWins();
        resetPosicionJugador();
    }
    if(x >= 457 && x <= 709 && y >= 456 && y <= 484 && nivel3Terminado == true){
        nivel = 4;
        inicioJuego = true;
        resetBalls(0);
        resetBallsNivel2(0);
        resetBallsNivel3();
        resetNivelTerminado();
        resetContadoresWins();
        resetPosicionJugador();
    }
    if(x >= 457 && x <= 709 && y >= 456 && y <= 484 && nivel4Terminado == true){
        nivel = 5;
        resetBalls(0);
        resetBallsNivel2(0);
        resetBallsNivel3();
        resetNivelTerminado();
        resetContadoresWins();
        resetPosicionJugador();
        inicioJuego = true;
    }
    if(x >= 457 && x <= 709 && y >= 456 && y <= 484 && nivel5Terminado == true){
        nivel = 6;
        resetBalls(0);
        resetBallsNivel2(0);
        resetNivelTerminado();
        resetContadoresWins();
        resetPosicionJugador();
        inicioJuego = true;
    }
    if(x >= 457 && x <= 709 && y >= 456 && y <= 484 && nivel6Terminado == true){
        inicioJuego = false;
        nivel = 0;
        inicioMenu = true;
        resetBalls(0);
        resetBallsNivel2(0);
        resetBallsNivel3();
        resetContadoresWins();
        resetContadoresPuntuacion();
        resetNivelTerminado();
        resetVidas();
        resetPosicionJugador();
        puntuacion_Total = 0;
    }
    if(x >= 457 && x <= 709 && y >= 456 && y <= 484 && panicModeTerminado == true){
        inicioJuego = true;
        resetBalls(0);
        resetBallsNivel2(0);
        resetHexagonosParte1(0);
        resetHexagonosParte2(0);
        resetVidas();
        resetBarraNivel();
        resetBarraNivel2();
        resetBarraNivelHexagonoGrande1();
        resetBarraNivelHexagonoGrande2();
        resetPanicMode();
        resetPosicionJugador();
        resetDibujadoBarraNivel();
        puntuacion_Total = 0;
    }
    if(x >= 277 && x <= 529 && y >= 294 && y <= 323 && juegoPerdido == true){
        inicioJuego = false;
        inicioMenu = true;
        juegoPerdido = false;
        resetBalls(0);
        resetBallsNivel2(0);
        resetHexagonosParte1(0);
        resetHexagonosParte2(0);
        resetVidas();
        resetNivelTerminado();
        resetContadoresPuntuacion();
        resetContadoresWins();
        resetPanicMode();
        resetBarraNivel();
        resetBarraNivel2();
        resetBarraNivelHexagonoGrande1();
        resetBarraNivelHexagonoGrande2();
        resetPosicionJugador();
        resetDibujadoBarraNivel();
        puntuacion_Total = 0;
    }
    if(x >= 97 && x <= 348 && y >= 456 && y <= 484 && botonVueltaMenuInicial == true){
        inicioJuego = false;
        inicioMenu = true;
        resetBalls(0);
        resetBallsNivel2(0);
        resetHexagonosParte1(0);
        resetHexagonosParte2(0);
        resetVidas();
        resetNivelTerminado();
        resetContadoresPuntuacion();
        resetContadoresWins();
        resetPanicMode();
        resetBarraNivel();
        resetBarraNivel2();
        resetBarraNivelHexagonoGrande1();
        resetBarraNivelHexagonoGrande2();
        resetPosicionJugador();
        resetDibujadoBarraNivel();
        puntuacion_Total = 0;
    }
}

void ProcessNormalKeys(unsigned char key, int xx, int yy){
    switch(key){
    case 27:
        exit(0);
        break;
        /*
    case 'f' :
        glutFullScreen();
        break;
    case 'r' :
        glutReshapeWindow(800,800);
        */
    }
}

void changeSize(int ww, int hh){
    h = hh;
    w = ww;

    if(h == 0) h = 1;

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glViewport(0, 0, w, h);

    gluOrtho2D(-1, 1, -1.2, 1);

    //gluOrtho2D(1.0, -1.0, 1.0, -1.0); asi es para poner la pantalla al reves.

    glMatrixMode(GL_MODELVIEW);
}

void timer(int x){
    glutTimerFunc(1000/60,timer,0);
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    //FRAMES PARA EL MARCO DEL JUEGO
    frames.push_back(new Frame{0.0, 0.1, -1.0, 0.9, 1.0, 0.9, 1.0, 0.85, -1.0, 0.85, {0.0, 0.5, 1.0}});
    frames.push_back(new Frame{0.0, -0.1, -1.0, -0.85, 1.0, -0.85, 1.0, -0.9, -1.0, -0.9, {0.0, 0.5, 1.0}});
    frames.push_back(new Frame{0.0, 0.0, 0.95, 1.0, 1.0, 1.0, 1.0, -1.0, 0.95, -1.0, {0.0, 0.5, 1.0}});
    frames.push_back(new Frame{0.0, 0.0, -1.0, 1.0, -0.95, 1.0, -0.95, -1.0, -1.0, -1.0, {0.0, 0.5, 1.0}});

    //FRAMES PARA LA BARRA DE NIVEL
    framesNivel.push_back(new Frame{0.0, -1.1, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {0.5, 0.5, 0.5}});
    framesNivel.push_back(new Frame{0.0, -1.17, -0.32, 0.005, 0.33, 0.005, 0.33, -0.005, -0.32, -0.005, {0.5, 0.5, 0.5}});
    framesNivel.push_back(new Frame{-0.021, -1.103, -0.31, 0.005, -0.30, 0.005, -0.30, -0.07, -0.31, -0.07, {0.5, 0.5, 0.5}});
    framesNivel.push_back(new Frame{0.651, -1.103, -0.31, 0.005, -0.32, 0.005, -0.32, -0.07, -0.31, -0.07, {0.5, 0.5, 0.5}});

    //VARIABLES THUNDERBOLT PARA EL NIVEL 5 DEL TOUR MODE
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, -0.8, -0.85, -0.75, -0.85, -0.75, -0.9, -0.8, -0.9, {0.0, 0.0, 1.0}, 1});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, 0.1, -0.85, 0.15, -0.85, 0.15, -0.9, 0.1, -0.9, {0.0, 0.0, 1.0}, 1});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, 0.8, -0.85, 0.75, -0.85, 0.75, -0.9, 0.8, -0.9, {0.0, 0.0, 1.0}, 2});
    thunderBolt.push_back(new ThunderBolt{0.0, -0.1, -0.1, -0.85, -0.15, -0.85, -0.15, -0.9, -0.1, -0.9, {0.0, 0.0, 1.0}, 2});

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(800,800);
    glutCreateWindow("PANG");

    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutKeyboardFunc(ProcessNormalKeys);
    glutSpecialFunc(processSpecialKeys);
    glutMouseFunc(mouseButton);
    glutTimerFunc(1000/60,timer,0);

    init();

    glutMainLoop();

    return 0;
}
