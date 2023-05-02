#include <new>
#include <iostream>
using namespace std;

void ingresar_valores(int **p, const int filas, const int columnas);
void mostrar_valores(int **p, const int filas, const int columnas);

int main(int argc, char const *argv[])
{
    //filas        columnas
    int largo = 0, ancho = 0;

    cout <<"Ingrese el numero de filas y columnas: ";
    cin >> largo >> ancho;

    int **pArreglo;
    pArreglo = new int*[largo*ancho];


    for(int i = 0; i < largo; i++){
        pArreglo[i] =new int[ancho];
    }

    ingresar_valores(pArreglo, largo, ancho);
    mostrar_valores(pArreglo, largo, ancho);


    for(int i = 0; i < largo; i++){
        delete[] pArreglo[i]; 
    }

    delete[] pArreglo;

    return 0;
}


void ingresar_valores(int **p, const int filas, const int columnas){

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "elemento["<<i<<"]["<<j<<"]: ";
            cin >> *(*p + i*columnas + j);
        }
    }

}


void mostrar_valores(int **p, const int filas, const int columnas){

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){

            cout <<*(*p + i*columnas + j) << "  ";

        }
        cout << endl;
    }

}

