#include <iostream>
#include <cstdlib>
using namespace std;
/*

6.2. Escribir una función que decida si un n úmero entero es
capicúa. El número 24842 es capicúa. El número 134 no
lo es.

*/

bool capicua(int numero);

int main() {

int numero;


int opcion = 1;

  while (opcion != 0){

    cout <<"Ingresa un numero"<<endl;
    cin >> numero;


    capicua(numero);


    if( capicua(numero) ){
      cout <<"El numero: "<<numero<<" es capicua :)"<<endl;
    }else {
      cout <<"El numero: "<<numero<<" no es capicua :("<<endl;
    }





    cout <<"Desea intentarlo de nuevo? \n1) si -- 0) no"<<endl;
    cin >> opcion;

    system("pause");
    system("cls");

  }





    return 0;
}

//************************
bool capicua(int numero){
  int respaldo = numero;
int invertido = 0;
bool confirmaPE;

  while(numero != 0){
    invertido = invertido*10 + numero%10;
    numero = numero/10;

  }
//creo la variable respaldo xq en algún punto numero se hace 0

  if(respaldo == invertido){
    confirmaPE = true;
  }else if(respaldo != invertido){
      confirmaPE = false;
    }


  return confirmaPE;
}// FIN FUNCIÓN CAPICUA
