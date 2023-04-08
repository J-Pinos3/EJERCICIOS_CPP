#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
/*
6.13. La ley de probabilidad de que ocurra el suceso r veces de la distrib ución de Poisson de media m viene dado por:
Probabilidad(X = r) = e–m
Escribir un programa que calcule mediante un menú el valor de:
a) El suceso ocurra exactamente r veces.
b) El suceso ocurra a lo sumo r veces.
c) El suceso ocurra por lo menos r veces.


*/

void poisson (int r, float m, float &x_igual_r, float &x_menor_r);
int menu();


int main() {

int opcion;
float m, fx, sx, valor;
int r, i;
bool fin = false;

cout <<" numero de pruebas m : ";
cin >> m;

do{
cout <<" valor de r : ";
cin >> r;

}while( r < 0);

poisson(r,m,fx,sx);

while(!fin){
  opcion = menu();
  cout <<"m = "<<m<<" r = "<<r<<endl;

    switch(opcion){

      case 1:{
        valor = fx;
        cout <<valor<<endl;
      }
      break;


      case 2:{
        valor = sx;
        cout <<valor<<endl;
      }
      break;


      case 3:{
        valor = 1- sx + fx;
        cout <<valor<<endl;
      }
      break;


      case 4:{

        fin = true;
      }
      break;





    }



}




    return 0;
}

//******************************

void poisson (int r, float m, float &x_igual_r, float &x_menor_r){
float valor, acu, a;
acu= exp(-m);
valor = acu;
  for(int i = 1; i <= r; i++){
    valor = valor * m/i;
    acu = acu + valor;
  }

  x_igual_r = valor;
  x_menor_r = acu;

}// FIN FUNCIÓN POISON


int menu(){

int i;

cout <<"1. probabilidad = i"<<endl;
cout <<"2. probabilidad <= i"<<endl;
cout <<"3. probabilidad >= i"<<endl;
cout <<"4. fin"<<endl;

do{
  cout <<"opcion: ";
  cin >> i;
  cout <<endl;
  cin.get();
}while( (i < 0)||(i > 4) );

  return i;

} // FIN FUNCION menu
