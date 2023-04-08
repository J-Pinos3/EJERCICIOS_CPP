#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
/*
Se pidió a veinte estudiantes que calificaran la calidad de la comida en la
cafetería estudiantil, en una escala del 1 al 5,
en donde 1 significa “pésimo” y 5 significa “excelente”.
Coloque las 20 respuestas en un arreglo entero y determine la frecuencia de cada calificación
*/
int main() {

const int TAmanioRespuesta = 20;
const int TAmanioFrecuencia = 6;

const array< unsigned int, TAmanioRespuesta> respuestas =
 {1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5};
array< unsigned int, TAmanioFrecuencia> frecuencia = {};


for(int dato = 0; dato < respuestas.size(); dato++) {
  //cout<<"freq"<<frecuencia[respuestas[dato] ]<<endl;
  ++frecuencia[ respuestas[dato] ];
  cout<<"freq:"<<frecuencia[respuestas[dato] ]<<endl;
}


cout <<"calificación"<<setw(17)<<"frecuencia"<<endl;

for(int nota = 1; nota < frecuencia.size(); nota++){
  cout <<setw(6)<<nota<<setw(17)<<frecuencia[nota]<<endl;
}




    return 0;
}
