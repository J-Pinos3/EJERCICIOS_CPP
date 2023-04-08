#include <iostream>
using namespace std;

int main() {


cout <<"Ingrese numeros, una letra para terminar"<<endl<<endl;
int num;
int contador = 0;
while(cin >> num){
  contador++;
}
cout <<"\nDel metodo 1 se ingresaron: "<<contador<<" numeros"<<endl; //con ingresar un caracter o crtl + z se finaliza


/*
cin.ignore();
cin.sync();
cout <<"\n\n\nIngrese numeros, una letra para terminar"<<endl;
char letra;
int contador1 = 0;
while(cin >> letra ){
  contador1++;
}
cout <<"\nDel metodo 2 se ingresaron: "<<contador1<<" letras"<<endl; //con ingresar crtl + z se finaliza, si uso cin.get ese enter cuenta como otro caracter
*/


  return 0;
}
