#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <random>
using std::cin;
using std::cout;
using std::array;
using std::default_random_engine;
using std::time;
using std::uniform_int_distribution;

const int FILAS = 5;
const int COLUMNAS = 7;

void buscar(
    int valor,int &fila, int &columna,
    const array<array<int, COLUMNAS>, FILAS> &matriz);


void llenarMatriz(array<array<int, COLUMNAS>, FILAS> &matriz);


void mostrarMatriz(const array<array<int, COLUMNAS>, FILAS> &matriz);


int main(){

    int elementoABuscar = 0, f = 0, c = 0; 
    array<array<int, COLUMNAS>, FILAS> matriz{};
    
    llenarMatriz(matriz);
    mostrarMatriz(matriz);

    cout <<"Ingrese el valor a buscar: ";       cin >> elementoABuscar;

    buscar(elementoABuscar, f, c, matriz);
    cout << "Posicion del elemento y su valor: "
        << "f = " << f  
        << "\nc = " << c 
        << "matriz[i][j] = "<< matriz[f][c];
    return 0;
}


void buscar(
    int valor,int &f, int &c,const array<array<int, COLUMNAS>, FILAS> &matriz){
    f = 0, c = 0;
    //para evitar errores, primero se comprueba 
    //el rango de los elementos f < matriz.size()
    //while( (f < matriz.size())&&(valor!=matriz[f][c]) ){ //correcto
    while( (valor!=matriz[f][c])&&(f < matriz.size()) ){   //INCORRECTO
        c++;//iteramos en las columnas
        if(c >= matriz[f].size()){
            c=0;//vuelve a la columna 0
            f++;
        }
    }
}


void llenarMatriz(array<array<int, COLUMNAS>, FILAS> &matriz){
    default_random_engine motor (static_cast<unsigned int>(  time(0) ));
    uniform_int_distribution<unsigned int> intAleatorio(0,20);

    for(auto &fila: matriz){
        for(auto &elem: fila){
            elem = intAleatorio(motor);
        }
    }
}


void mostrarMatriz(const array<array<int, COLUMNAS>, FILAS> &matriz){
    cout << "\n";
    for(const auto &fila: matriz){
        for(const int elem: fila){
            cout << elem << "  ";
        }
        cout << std::endl;
    }
}