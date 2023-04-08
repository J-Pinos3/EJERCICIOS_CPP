#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
/*
COLORES
1: AZUL
2: VERDE
3: CYAN
4: ROJO
5: PURPURA
6: AMARILLO OBSCURO
7: BLANCO DEFAULT
8: GRIS
9: AZUL BRILLANTE
10: VERDE BRILLANTE
11: CYAN BRILLANTE
12: ROJO BRILLANTE
13: ROSA, MAGENTE
14: AMARILLO
15: BLANCO BRILLANTE

LUEGO DEL 15 SON COLORES DE FONDO
*/
struct PUNTO_enPLANO{

  float x_coordenada;
  float y_coordenada;
};

float Dist_entre_Puntos(PUNTO_enPLANO x1, PUNTO_enPLANO y1, PUNTO_enPLANO x2, PUNTO_enPLANO y2 );
void Punto_Medio(PUNTO_enPLANO x1, PUNTO_enPLANO y1, PUNTO_enPLANO x2, PUNTO_enPLANO y2);

int main() {
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

PUNTO_enPLANO x1, x2, y1, y2;

SetConsoleTextAttribute(h,2);
cout <<"Ingrese las coordenadas de un punto P1"<<endl;
SetConsoleTextAttribute(h,7);
cin >> x1.x_coordenada;
cin >> y1.y_coordenada;

cout <<endl<<endl;
SetConsoleTextAttribute(h,2);
cout <<"Ingrese las coordenadas de un punto P2"<<endl;
SetConsoleTextAttribute(h,7);
cin >> x2.x_coordenada;
cin >> y2.y_coordenada;

SetConsoleTextAttribute(h,24);
cout <<"\n\nLa distancia entre los puntos es: "<<Dist_entre_Puntos(x1, y1, x2, y2)<<endl;
cout <<endl;
Punto_Medio(x1, y1, x2, y2);

  return 0;
}


float Dist_entre_Puntos(PUNTO_enPLANO x1, PUNTO_enPLANO y1, PUNTO_enPLANO x2, PUNTO_enPLANO y2 ){

float valor = sqrt( pow(x2.x_coordenada-x1.x_coordenada,2) + pow(y2.y_coordenada-y1.y_coordenada,2) );
return valor;

}//FIN DE LA FUNCION Dist_entre_Puntos


void Punto_Medio(PUNTO_enPLANO x1, PUNTO_enPLANO y1, PUNTO_enPLANO x2, PUNTO_enPLANO y2){
float coordenada1, coordenada2;

coordenada1 = (x1.x_coordenada + x2.x_coordenada)/2.0;
coordenada2 =(y1.y_coordenada + y2.y_coordenada)/2.0;

cout <<"El punto medio del segmento que une los puntos ("<<x1.x_coordenada<<", "<<y1.y_coordenada<<") y ("<<x2.x_coordenada<<", "<<y2.y_coordenada<<") es: ("<<coordenada1<<", "<<coordenada2<<")"<<endl;
}//FIN DE LA FUNCION Punto_Medio
