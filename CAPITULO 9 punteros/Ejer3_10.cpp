#include <iostream>
#include <new>
using namespace std;

void ingresar_datos(int **arr);
void mostrar_datos(int **arr);

int main(int argc, char const *argv[])
{
    int **arreglo;
    arreglo = new int *[4];
    
    for(int i = 0; i < 4; i++){
        arreglo[i] = new int[4];
    }

    ingresar_datos(arreglo);

    cout << endl << "------------------------------------------" << endl;

    mostrar_datos(arreglo);


    for(int i = 0; i < 4; i++){
        delete[] arreglo[i];
    }

    delete[] arreglo;

    return 0;
}

void ingresar_datos(int **arr){

    cout <<"Ingrese los valores de la matriz"<<endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "arr["<<i<<"]["<<j<<"]: ";
            //*(*(a+i)+j)
            cin >> *(*(arr+i)+j);
        }
    }
}


void mostrar_datos(int **arr){
    cout <<"Los valores de la matriz son: "<<endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}