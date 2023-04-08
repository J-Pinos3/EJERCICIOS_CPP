#include <iostream>
using namespace std;

void llenar_matriz(int **A);
void mostrar_matriz(int **A);


int main(int argc, char const *argv[])
{
    int *matriz[3];
    for(int i = 0; i < 4; i++){//matriz de 3 x 4
        matriz[i] = new int[4];
    }

    llenar_matriz(matriz);

    cout << endl << endl;

    mostrar_matriz(matriz);

    for(int i = 0; i < 4; i++){
        delete[] matriz[i];
    }
    
    return 0;
}


void llenar_matriz(int **A){
    cout <<"Ingrese los valores de la matriz: "<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout <<"["<<i<<"]["<<j<<"]: ";
            cin >> A[i][j];
        }
    }
}
void mostrar_matriz(int **A){
    cout <<"Los valores de la matriz son: "<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << *(*(A+i)+j) << "  ";
        }
        cout << endl;
    }
}