#include <iostream>
#include <cstdlib>

using namespace std;
/*

6.30 (Dígitos inversos) Escriba una función que reciba un valor entero y
devuelva el número con sus dígitos invertidos.
Por ejemplo, para el número 7631, la función debe regresar 1367.

*/

// función 1
void invertir(int a);


// función 2
int invierte_cifras(int a);

int main(){
int num;
cout <<"Ingrese el numero a invertir: ";
cin >> num;
cout<<endl<<endl;
invertir (num);

system("pause");
system("cls");

cout <<"1236"<<" Invertido "<<invierte_cifras(1236)<<endl;







    return 0;
}

//********************
void invertir(int a){

while (a >= 10) {
    cout << a % 10;
    a /= 10; // a = a /10
}
cout <<a<<endl;



} // FIN FUNCIÓN INVERTIR ENTERO


int invierte_cifras(int a){

int invertido = 0;
  while(a != 0){

    invertido = invertido*10 + a%10;
    a = a/10;
  }


  return invertido;
}// FIN OTRA FUNCIÓN QUE INVIERTE CIFRAS
