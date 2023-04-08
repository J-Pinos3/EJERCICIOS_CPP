#include <iostream>
#include <new>
using namespace std;

void ingresar_valores(int *a[4]);
void mostrar_valores(int *a[4]);


int main(int argc, char const *argv[])
{
    int *array[4];

    for(int i = 0; i < 4; i++){
        array[i] = new int[4];
    }
    
    ingresar_valores(array);

    cout << endl << "------------------------------------------" << endl;

    mostrar_valores(array);

    for(int i = 0; i < 4; i++){
        //array[i] = new int[4];
        delete[] array[i];
    }
    return 0;
}


void ingresar_valores(int *a[4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "a["<< i << "][" <<j<<"]: ";
            cin >> a[i][j];
        }
    }
}


void mostrar_valores(int *a[4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << *(*(a+i)+j) << " ";
        }
        cout << endl;
    }
}