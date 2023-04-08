#include <iostream>


const int FILAS = 4;
const int COLUMNAS = 5;

int main(int argc, char const *argv[]) {

    int **matr = new int*[FILAS];//se asignan las FILAS

    for(int i = 0; i < FILAS; i++){
       matr[i] = new int[COLUMNAS];//SE INICIALIZAN LAS COLUMNAS
    }


    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            matr[i][j] = i*j + 2;
        }
    }


    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            std::cout << matr[i][j] <<" ";
        }
        std::cout <<std::endl;
    }

    for(int i = 0; i < FILAS; i++){
        delete[] matr[i];
    }

    delete[] matr;
  return 0;
}
