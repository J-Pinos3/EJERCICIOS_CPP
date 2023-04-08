#include <iostream>
#include <cstdlib>

using namespace std;

/*
Escribir un programa que encuentre el v alor mayor, el
valor menor y la suma de los datos de entrada. Obtener
la media de los datos mediante una funci ón.
*/

void operaciones(void);

int main() {


cout <<"| BIENVENIDO |"<<endl;

operaciones();


    return 0;
}

//****************************

void operaciones(void){

double mayor;
double cantidad, total = 0, suma = 0;
cout <<"Ingrese una serie de numeros (01 para terminar) ";
cin >> cantidad;
mayor = cantidad;

  while(cantidad != 01){

    total = total + 1;
    suma = suma + cantidad;

    cout <<"Ingrese una serie de numeros (01 para terminar) ";
    cin >> cantidad;

    if(cantidad > mayor){
      mayor = cantidad;
    }



  }

system("pause");
system("cls");

cout <<"El mayor de los numeros es: "<<mayor<<endl<<endl;
cout <<"La suma de los numeros ingresados es: "<<suma<<endl<<endl;
cout <<"El promedio de los numeros ingresados es: "<<suma/total<<endl<<endl;
cout <<"La cantidad de numeros ingresados fue: "<<total<<endl;




}// FIN FUNCIÓN operaciones
