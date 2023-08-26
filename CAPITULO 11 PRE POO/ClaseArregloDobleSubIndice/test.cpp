#include <iostream>
#include "arreglo_doble.h"
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 5;

int main(){

    Array_Doble matriz1(FILAS,COLUMNAS);
    Array_Doble matrizCeros;

    cout << "El tamaño de la matriz1 es: " << matriz1.getTamanio() << endl << endl; 

    cout << "Ingrese " << FILAS * COLUMNAS << " elementos para su matriz1: "<< endl;
    cin >> matriz1;

    cout << "Los elementos ingresados fueron:\n" << matriz1 <<endl;



    cout << "\n\n-------------------\n\n";
    
    cout << "El tamaño de la matrizCeros es: " << matrizCeros.getTamanio() << endl << endl; 

    cout << "Los elementos de matrizCeros son:\n" << matrizCeros <<endl;

    if( matriz1 != matrizCeros ){
        cout << "Matriz1 y MatrizCeros son diferentes.\n";
    }


    cout << "\n\n-------------------\n\n";

    //ALLISON
    cout <<"Asignando -158 a matriz1[2]"<<endl;
    matriz1[2] = -158;
    cout  <<"matriz1[2] = " << matriz1[2]<< endl << endl;

    cout <<"matriz1(2,3) = " << matriz1(2,3) << endl;

    return 0;
}