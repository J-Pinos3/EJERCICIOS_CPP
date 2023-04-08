#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
/*

6.8. Escribir una función para calcular las coordenadas x e y de la trayectoria de un proyectil
de acuerdo a los parámetros ángulo de inclinación alfa y velocidad inicial v a intervalos de 0.1 s.

*/

float PI = 3.141592654;
double gravedad = 9.8;

void coordenadas(double a, double b);


int main() {

double Vinicial, Angulo_Lanz;
cout <<"Ingrese la velocidad inicial del proyectil: ";
cin >> Vinicial;

cout <<"Ingrese el angulo de lanzamiento: ";
cin >> Angulo_Lanz;

cout <<"Calculando posiciones para intervalos de 0.1s......"<<endl<<endl;
system("pause");
system("cls");

coordenadas(Angulo_Lanz, Vinicial);


    return 0;
}

//***********************

void coordenadas(double a, double b){

// a = angulo de lanzamiento
// b = modulo de velocidad inicial

// cos(a)=Vx/Vo   Vx = Vo * cos(a)
double velocidad_INI_X =  b * cos(a * PI/180.0 );
double velocidad_INI_Y =  b * sin(a * PI/180.0 );


  for(double i = 0.0; i <= 10.0; i = i + 0.1 ){
      cout <<" para t = "<<i<<" la posicion (x , y) del proyectil es: ";
      cout <<"("<<velocidad_INI_X * i<<", "<< (velocidad_INI_Y * i)-(gravedad/2)*pow(i,2)<<")"<<endl<<endl;

  }


} // FIN FUNCIÓN COORDENADAS;




/*


*/
