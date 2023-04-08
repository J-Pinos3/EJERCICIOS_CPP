#include <iostream>
#include <new>
using namespace std;

void llenar(int *m, const int &filas, const int &columnas);
void mostrar(const int *m, const int &filas, const int &columnas);

int main()
{
    int fila = 0, columnas = 0;

    cout <<"Ingrese el número de filas y de columnas: ";
    cin >> fila >> columnas;

    int * tabla = new int[fila * columnas];

    llenar(tabla, fila, columnas);

    cout << endl;

    mostrar(tabla, fila, columnas);
    
    delete[] tabla;
    
    return 0;
}

void llenar(int *m, const int &filas, const int &columnas){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            *(m+i*columnas+j) = i*10+j;
        }
    }
}

void mostrar(const int *m, const int &filas, const int &columnas){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << *(m+i*columnas+j) << " ";
        }
        cout << endl;
    }
}