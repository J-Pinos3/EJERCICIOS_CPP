#include <iostream>

using namespace std;
/*

6.32 (Puntos de calidad para calificaciones numéricas) Escriba una función llamada puntosCalidad que reciba
como entrada el promedio de un estudiante
y devuelva 4 si el promedio se encuentra entre 90 y 100,
 3 si el promedio se encuentra entre 80 y 89, 2 si el promedio se encuentra entre 70 y 79,
 1 si el promedio se encuentra entre 60 y
69, y 0 si el promedio es menor de 60.


*/

int promedio();

int puntosCalidad (int a);

//*************************
int main(){

//promedio();

int A = promedio();
cout <<endl<<endl;
cout <<"La nota del alumno es: "<<puntosCalidad(A)<<endl;



    return 0;
}
//*************************

int promedio(){
int nota, total = 0, suma = 0 ;
cout <<"Ingrese las 5 notas del alumno para el promedio "<<endl;

while(total < 5){ // total (0,1,2,3,4)
  cout <<"nota: ";
  cin >>nota;
  suma = suma + nota;

  total++;
}

  return  suma/total;
}// FIN FUNCIÓN PROMEDIOS


int puntosCalidad (int a){
if( (a >= 90)and(a <= 100) ){
  return 4;

}else if( (a >= 80)and(a <= 89) ){
  return 3;

}else if( (a >= 70)and(a <= 79) ){
  return 2;

}else if( (a >= 60)and(a <= 69) ){
  return 1;

}else if( (a < 60) ){
  return 0;
}



}// FIN FUNCIÓN PUNTOS CALIDAD
