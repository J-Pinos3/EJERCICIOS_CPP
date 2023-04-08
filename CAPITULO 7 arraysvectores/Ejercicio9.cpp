#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
Array tridimensional. Se declara un array tridimensional
para almacenar las temperaturas de cada
uno de los 60 minutos de las 24 horas de un mes de 31 días.
*/

int main() {
const int dias = 31;
const int horas = 24;
const int minutos = 60;
srand(static_cast<unsigned int>( time(0) ) );
float Arr[dias][horas][minutos] = {};
float media = 0;

cout <<"Ingrese los valores del array de 3D"<<endl;
for(int i = 0; i < dias; i++){
    for(int j = 0; j < horas; j++){
        for(int k = 0; k < minutos; k++){
          Arr[i][j][k] = -40 + rand() % 100;
        }

    }

}

system("cls");

for(int i = 0; i < dias; i++){
  // se calcula la media de cada día
  media = 0;
    for(int j = 0; j < horas; j++){

          for(int k = 0; k < minutos; k++){
            media = media + Arr[i][j][k];
          }
      cout <<" dia "<< i + 1 <<" "<<media/(horas*minutos)<<endl;
    }

}





    return 0;
}
