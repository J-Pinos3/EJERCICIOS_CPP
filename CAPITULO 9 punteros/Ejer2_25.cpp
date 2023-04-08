/*
10.5. Codificar funciones que realicen las siguientes operaciones:
multiplicar una matriz por un número, y rellenar de ceros una
matriz. Nota: usar la aritmética de punteros.
*/

#include <iostream>
using namespace std;

void mulitiplicar_escalar(int *matr, const int k);
void rellenar_ceros(int (*A)[3] );

int main(int argc, char const *argv[])
{

    int tabla[3][3] = {{5,6,7},{0,1,1},{400,300,200}};
    int k = -1;
    mulitiplicar_escalar(&tabla[0][0], k);
    cout <<endl<<endl;
    rellenar_ceros(tabla);

    return 0;
}

void mulitiplicar_escalar(int *matr, const int k){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            *(matr + i*3 + j) *= k;

        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << *(matr + i*3 + j) << " ";

        }
        cout <<endl;
    }
}

void rellenar_ceros(int (*A)[3] ){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           *((*A + i*3 )+j) = 0;

        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout <<*((*A + i*3 )+j) << " ";

        }
        cout <<endl;
    }
}