#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
/*

6.25 (Calcular el número de segundos) Escriba una función que reciba la hora en forma de tres argumentos
enteros (horas, minutos y segundos)
 y devuelva el número de segundos transcurridos desde la última vez que el
reloj “marcó las 12”. Use esta función para calcular el monto de tiempo en segundos entre dos horas, las cuales
deben estar dentro de un ciclo de 12 horas del reloj.

*/



int dar_Segundos(int hor, int min, int sec);


int main() {
  cout <<"| Primera hora |"<<endl;
int hora2, minuto2, segundo2;

int hora, minuto, segundo;
do{
    cout <<"Ingrese las horas: "<<endl;
    cin >> hora;

}while( (hora < 0)or(hora > 12) );

do{
    cout <<"Ingrese los minutos: "<<endl;
    cin >> minuto;

}while( (minuto < 0)or(minuto > 60) );


do{
    cout <<"Ingrese los segundos: "<<endl;
    cin >> segundo;

}while( (segundo < 0)or(segundo > 60) );

//cout <<"El total de segundos desde las 12 es: "<<dar_Segundos(hora,minuto,segundo);

system("pause");
system("cls");


  cout <<"| Segunda hora |"<<endl;
  do{
      cout <<"Ingrese las horas: "<<endl;
      cin >> hora2;

  }while( (hora2 < 0)or(hora2 > 12) );

  do{
      cout <<"Ingrese los minutos: "<<endl;
      cin >> minuto2;

  }while( (minuto2 < 0)or(minuto2 > 60) );


  do{
      cout <<"Ingrese los segundos: "<<endl;
      cin >> segundo2;

  }while( (segundo2 < 0)or(segundo2 > 60) );


  system("pause");
  system("cls");
int diferencia = dar_Segundos(hora,minuto,segundo)-dar_Segundos(hora2,minuto2,segundo2);

cout <<"La diferencia de horas es: "<<abs(diferencia)<<endl;












    return 0;
}


//*****************************
int dar_Segundos(int hor, int min, int sec){

int total_sec = sec + (min*60) + (hor * 3600);



 return total_sec;
}// FUNCIÓN DAR SEGUNDOS
