#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
/*

6.26 (Temperaturas en Centígrados y Fahrenheit) Implemente las siguientes funciones enteras:
a) La función centigrados que devuelve la equivalencia en grados Centígrados de una temperatura en
grados Fahrenheit.
b) La función fahrenheit que devuelve la equivalencia en grados Fahrenheit de una temperatura en
grados Centígrados.
c) Utilice estas funciones para escribir un programa que imprima gráficos que muestren los equivalentes
en grados Fahrenheit de todas las temperaturas en grados Centígrados,
 desde 0 hasta 100, y los equivalentes en grados Centígrados de todas las temperaturas en grados Fahrenheit, desde 32 hasta 212.
Imprima los resultados en un formato tabular ordenado que minimice el número de líneas de salida,
al tiempo que permanezca legible.



*/

double a_centigrados(int a);
double a_fahrenheit(int a);

int main(){

cout << fixed <<setprecision(6);

cout <<"|Celcious|"<<setw(6)<<" ---> "<<"|Fahrenheit|"<<endl;

for (int i = 0; i <= 100; i++){

  cout <<i<<setw(25)<<a_fahrenheit(i)<<endl;


}

system("pause");
system("cls");


cout <<"|Fahrenheit|"<<setw(6)<<" ---> "<<"|Celcious|"<<endl;

for (int f = 32; f <= 212; f++){
  cout <<f<<setw(25)<<a_centigrados(f)<<endl;


}










    return 0;
}

//*******************


double a_centigrados(int a){
// RECIBE UN Fahrenheit

  return (a - 32)*(5.0/9.0);

}  // FIN FUNCIÓN A CENTTIGRADOS


double a_fahrenheit(int a){
// RECIBE UN Centigrado

  return (a + 32)*(9.0/5.0);

} //FIN FUNCIÓN A Fahrenheit
