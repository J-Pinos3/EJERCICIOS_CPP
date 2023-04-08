#include <iostream>
#include <iomanip>
using namespace std;
/*
(Rangos de salarios de vendedores) Utilice un arreglo unidimensional para resolver el siguiente problema.
Una compañía paga a sus vendedores por comisión. Los vendedores reciben $200 por semana más el 9% de sus
ventas totales de esa semana. Por ejemplo, un vendedor que acumule $5000 en ventas en una semana, recibirá $200
más el 9% de $5000, o un total de $650.
Escriba un programa (utilizando un arreglo de contadores) que determine cuántos vendedores
 recibieron salarios en cada uno de los siguientes rangos (suponga que el salario de cada
vendedor se trunca a una cantidad entera)
*/

void IngresarDatos(int arr[]);

int main() {
int n_cubo = 254;
char fig_cubo = n_cubo;

  //solo con 9 empleados por tanto la longitud del array es 9
int frecuencia[9]= {};
int sueldo_semanal[9]= {};
IngresarDatos(sueldo_semanal);

cout <<endl<<endl;

for(int i = 0; i < 9; i++){
  sueldo_semanal[i] = (sueldo_semanal[i] * 9.0/100.0) + 200 ;
  cout <<"-:"<<sueldo_semanal[i]<<endl;
  sueldo_semanal[i] = sueldo_semanal[i]/100;
  cout <<"f-->:"<<sueldo_semanal[i]<<endl;
  ++frecuencia[sueldo_semanal[i] ];
  cout <<"freq:"<<frecuencia[sueldo_semanal[i]]<<endl;
}



cout <<endl<<endl;

int j = 200;
for(int i = 0; i < 9; i++){
  if(i == 0){
    cout << j <<"-"<< j + 99 ;
      //   200        200 + 99
  }else if(i == 8){
    cout <<" 1000 dollars en adelante";

  }else{
    cout << j <<"-"<< j + 99;

  }

  j = j + 100;

  for(int figura = 0; figura < frecuencia[i]; figura++){
    cout <<"*";
  }

cout <<endl;

}// fin del for




    return 0;
}

//*****************************************

void IngresarDatos(int arr[]){
  cout <<"Ingrese los datos del arreglo"<<endl;
  for(int i = 0; i < 9; i++){
    cin >> arr[i];
  }

}// fin funcion ingresar datos
