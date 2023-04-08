#include <iostream>
#include <cstdlib>
using namespace std;
/*

6.11. Escribir un programa que solicite del usuario un carácter
y que sitúe ese carácter en el centro de la pantalla. El
usuario debe poder a continuación desplazar el carácter
pulsando las letras A (arriba), B (abajo), I (izquierda),
D (derecha) y F (fin) para terminar.

*/
int main(int argc, char const *argv[]) {

char caracter, A, B, I, D, F, letra;
int contadorA, contadorB, contadorD, contadorI, contadorF;

cout <<"Ingrese un caracter: ";
cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
cin >> caracter;
cout <<"\n\n\n\n\n\n\n"<<endl;

system("pause");
system("cls");

cout <<"Ingrese las direcciones"<<endl;
cout <<"  A (arriba), B (abajo), I (izquierda),D (derecha)  y  F (fin)  terminar "<<endl;
cin >> letra;
  while( letra != 'F'){

        if(letra == 'A'){
          contadorA += 1;
            cout <<"\v";
        }

        if(letra == 'B'){
          contadorB += 1;
          cout <<"\n";
        }

        if(letra == 'I'){
          contadorI += 1;
          cout <<"\b";
        }

        if(letra == 'D'){
          contadorD += 1;
          cout <<"\t";
        }

cout <<caracter;
cout <<"Ingrese las direcciones"<<endl;
cout <<"  A (arriba), B (abajo), I (izquierda),D (derecha)  y  F (fin)  terminar "<<endl;
cin >> letra;


  }// FIN DEL WHILE






    return 0;
}
