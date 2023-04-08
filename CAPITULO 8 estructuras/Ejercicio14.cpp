#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

struct NUM_COMPLEJO{
  float x_real;
  float y_imaginaria;

};

int MenuComplejos();

int main() {

NUM_COMPLEJO numero_complex, numero_complex2;
cout <<"|Ingrese el primer numero complejo|"<<endl;
cout <<"Ingrese la parte real del numero complejo: "<<endl;
cin >> numero_complex.x_real;

cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
cin >> numero_complex.y_imaginaria;


cout <<"\n\n|Ingrese el segundo numero complejo|"<<endl;
cout <<"Ingrese la parte real del numero complejo: "<<endl;
cin >> numero_complex2.x_real;

cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
cin >> numero_complex2.y_imaginaria;

cout <<endl<<endl;

float parte_real = numero_complex.x_real + numero_complex2.x_real;

float parte_imaginaria = numero_complex.y_imaginaria + numero_complex2.y_imaginaria;

cout <<"la suma es: ";
if(parte_imaginaria >= 0){
  cout << parte_real <<" + "<<parte_imaginaria<<"i"<<endl;
}else if(parte_imaginaria < 0){
  cout << parte_real <<" "<<parte_imaginaria<<"i"<<endl;
}


parte_real = numero_complex.x_real - numero_complex2.x_real;
parte_imaginaria = numero_complex.y_imaginaria - numero_complex2.y_imaginaria;
cout <<"\nla diferencia es: ";
if(parte_imaginaria >= 0){
  cout << parte_real <<" + "<<parte_imaginaria<<"i"<<endl;
}else if(parte_imaginaria < 0){
  cout << parte_real <<"  "<<parte_imaginaria<<"i"<<endl;
}


parte_real = (numero_complex.x_real*numero_complex2.x_real)-(numero_complex.y_imaginaria * numero_complex2.y_imaginaria);
parte_imaginaria = (numero_complex.x_real*numero_complex2.y_imaginaria)+(numero_complex.y_imaginaria*numero_complex2.x_real);
cout <<"\nel producto es: ";
if(parte_imaginaria >= 0){
  cout << parte_real <<" + "<<parte_imaginaria<<"i"<<endl;
}else if(parte_imaginaria < 0){
  cout << parte_real <<"  "<<parte_imaginaria<<"i"<<endl;
}


  return 0;
}


int MenuComplejos(){
  short int opcion;
  cout <<"OPERACIONES CON N"<<char(233)<<"MEROS COMPLEJOS"<<endl<<endl; //alt + 233 = Ú
  cout <<"1) Suma"<<endl;
  cout <<"2) Resta"<<endl;
  cout <<"3) Multiplicaci"<<char(162)<<"n"<<endl;// alt + 162 = ó
  cout <<"4) Divisi"<<char(162)<<"n"<<endl;
  cin >> opcion;

    return opcion;
}//fin dela funcion MenuComplejos
