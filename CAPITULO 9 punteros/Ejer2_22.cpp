/*
Escribir un programa que decida si una matriz de números reales es simétrica. Utilizar: 1, una función de tipo bool que re-
ciba como entrada una matriz de reales, así como el número de filas y de columnas,y decida si la matriz es simétrica; 2,otra

función que genere la matriz de 10 filas y 10 columnas de números aleatorios de 1 a 100; 3, un programa principal que rea-
lice llamadas a las dos funciones. Nota: usar la transmisión de matrices como parámetros punteros y la aritmética de pun-
teros para la codificación.
*/

#include <iostream>
#include <ctime>
#include <random>
using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;

void generarMatriz(int (*p)[10]);
bool esSimetrica(int (*matr)[10], void (*func) (int (*p)[10]) );



int main(int argc, char const *argv[])
{
    int tabla[FILAS][COLUMNAS] = {};

    //generarMatriz(tabla);


    if( esSimetrica(tabla, generarMatriz ) ){
        cout <<"La matriz ingresada con valores: ";
        for(int i = 0; i < FILAS; i++){
            for(int j = 0; j < COLUMNAS; j++){
                cout << tabla[i][j] << " ";
            }
        cout <<endl;
        }

        cout <<endl<<"Es simetrica"<<endl;
    }else{
        cout <<"no es simetrica"<<endl;
    }

    
    return 0;
}


void generarMatriz(int (*p)[10]){
    default_random_engine motor( static_cast< unsigned int >( time(0) ) );
    uniform_int_distribution <unsigned int> valor(10,20);

    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            p[i][j] = valor(motor);
        }
    }
}

bool esSimetrica(int (*matr)[10], void (*func) (int (*p)[10]) ){

    bool sime = true;

    func(matr);
    int matriz2[FILAS][COLUMNAS] = {};

    cout <<"Dada la matriz: ";
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            cout << matr[i][j] << " ";
        }
        cout <<endl;
    }
    cout <<endl<<endl;

    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            matriz2[i][j] = matr[j][i];
        }
    }

    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            if( !(matriz2[i][j] == matr[i][j]) ){
                sime = false;
            }
        }
    }

    return sime;
}