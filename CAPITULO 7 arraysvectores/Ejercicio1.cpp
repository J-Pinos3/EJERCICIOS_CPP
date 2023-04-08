#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/*
a) Mostrar el valor del elemento 6 del arreglo de caracteres alfabeto.
b) Recibir un valor y colocarlo en el elemento 4 del arreglo de punto flotante unidimensional llamado
calificaciones.
c) Inicializar con 8 cada uno de los 5 elementos del arreglo entero unidimensional.
d) Sumar el total e imprimir los elementos del arreglo temperaturas de punto flotante con 100 elementos.
e) Copiar el arreglo a en la primera parte del arreglo b. Suponga que ambos arreglos contienen valores
double y que los arreglos a y b tienen 11 y 34 elementos, respectivamente.
f) Determinar e imprimir los valores menor y mayor contenidos en el arreglo w con 99 elementos de
punto flotante
*/
int main() {
srand(static_cast<unsigned int>( time(0) ) );

char alfabeto[26]={};
char letra = ' ';
cout <<"Ingrese las letras del alfabeto \n";
for(int i = 0; i < 26; i++){
  cin >> letra;
  cin.ignore();
  alfabeto[i] = letra;
}

cout <<endl<<endl;
//este for imprime el array alfabeto
for(int i = 0; i < 26; i++){
  cout <<alfabeto[i]<<" ";
}

cout <<"\nla posicion alfabeto[6] es: "<<alfabeto[6]<<endl;


system("pause");
system("cls");


float calificaciones[5] = {}; //se inicializa en 0
float valor1;
cout <<"Ingrese el valor(nota): ";
cin >> valor1;
calificaciones[3] = valor1;
for(int i = 0; i < 5; i++){
  cout <<"calificacion"<<i+1<<": "<<calificaciones[i]<<endl;
}


system("pause");
system("cls");


for(int i = 0; i < 5; i++){
  calificaciones[i] = 8;
  cout <<"calificacion inicial"<<i+1<<": "<<calificaciones[i]<<endl;
}


system("pause");
system("cls");


int letra2 = 167;
char o_subin = letra2;

double total = 0;
double temperaturas[100] = {};
for(int i = 0; i < 100; i++){

  temperaturas[i] = -32 + rand()%70;
  total = total + temperaturas[i];
}

for(int i = 0; i < 100; i++){

    cout <<temperaturas[i]<<o_subin<<endl;
}
cout <<"\n el total de las temperaturas es: "<<total<<endl;


system("pause");
system("cls");



double a[11] = {1.1, 1.2, 1.3, 1.4, 1.5, 2.2, 2.3, 2.4, 2.5, 2.6, 3.5 };
double b[34] = {9.98, 9.82, 9.37, 6.54, 6.01, 6.47, 7.35, 7.14, 7.89, 7.32, 7.11, 8.32, 8.54, 8.11, 8.88, 8.17,
   8.25, 4.01, 4.35,4.98, 0.23, 0.39, 0.54, 0.66, 0.17, 1.25, 1.37, 1.77, 1.00, 1.82, 5.55, 5.67, 5.89, 5.31 };

//lo del array a se copia en el array b
for(int i = 0; i < 11; i++){
  b[i] = a[i];
}

for(int i = 0; i < 34; i++){
  cout << "["<<b[i]<<"] ";
}



system("pause");
system("cls");

double mayor = 0;
double menor = 75;
double w[99] = {};
for(int i = 0; i < 99; i++){

  w[i] = -32 + rand()%70;

  if(w[i] < menor){
    menor = w[i];
  }

  if(w[i] > mayor){
    mayor = w[i];
  }


}

for(int j = 0; j < 99; j++){
  cout << w[j]<<endl;
}

cout <<"\n el mayor de los numeros es: "<<mayor<<endl;
cout <<"\n el menor de los numeros es: "<<menor<<endl;









    return 0;
}
