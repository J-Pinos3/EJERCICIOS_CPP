#include <iostream>
#include <cstdlib>
using namespace std;
/*

EJEMPLO 7.15. Lectura escritura de un vector con funciones.
El número de elementos del vector es indicado a cada
función en el parámetro n, y el vector se declara en el parámetro con corchetes vacíos.
 El programa declara una constante max para dimensionar los vectores.
 Se codifican las funciones lee, escribe, que leen y escriben respectivamente un vector de n datos
 que reciben como parámetros, así como la función suma que recibe como parámetros dos vectores de n datos,
 y calcula el vector suma almacenado el r esultado en c. El programa principal llama a las funciones
anteriores.

*/
void lee(float a[], int n);
void escribe(float a[], int n);
void suma(float a[], float b[], float c[], int n);

int main() {
const int MAX = 11;

int n = 3;
float a[MAX] = {};
float b[MAX] = {};
float c[MAX] = {};

lee(a, n);
system("cls");
lee(b, n);
system("cls");

cout <<" array a\n";
escribe(a, n);
cout <<endl<<endl;
cout <<" array b\n";
escribe(b, n);

cout <<endl<<endl;
suma(a,b,c,n);
cout <<"array suma \n";
escribe(c, n);



    return 0;
}

//***************
void suma(float a[], float b[], float c[], int n){
  for(int i = 0; i < n; i++ ){
    c[i] = a[i] + b[i];
  }


}//FIN FUNCION suma


void escribe(float a[], int n){
  for(int i = 0; i < n; i++){
    cout <<"["<<a[i]<<"]"<<"  ";
  }

cout <<endl;
}//FIN FUNCIOM escribe


void lee(float a[], int n){

    for(int i = 0; i < n; i++){
      cout <<"Humano ingresa un dato en la posicion i ="<<i+1<<": ";
      cin >> a[i];
      cout <<endl;
    }



}
