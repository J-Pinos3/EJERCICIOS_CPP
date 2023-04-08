#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

int cantidad, hor, min, seg;

cout <<"Ingrese la cantidad de segundos: ";
cin >> cantidad;

hor = cantidad/3600;
cantidad = cantidad %3600;//resto de segundos

min = cantidad/60;
cantidad = cantidad % 60;

seg = cantidad;


cout <<"Seguntos totales ingresados: "<<cantidad<<endl<<endl;
cout <<"Horas: "<< hor <<endl<<endl;
cout <<"Minutos: "<< min <<endl<<endl;
cout <<"Segundos: "<< seg <<endl<<endl;


  return 0;
}
