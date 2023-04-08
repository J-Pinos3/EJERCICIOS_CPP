#include <iostream>
using namespace std;

void llenar_Matriz(int **A);
void mostrar_Matriz(int **A);

int main(int argc, char const *argv[])
{
    
    int matriz[3][3] = {{},{},{}};

    int *a = &matriz[0][0];
    llenar_Matriz(&a);

    cout <<endl <<endl;

    mostrar_Matriz(&a);

    return 0;
}

void llenar_Matriz(int **A){

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            cout <<"["<<i<<"]["<<j<<"]: "; 
            cin >> *(*A +i*3 + j);
        }
    }

}


void mostrar_Matriz(int **A){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << (*A +i*3)[j] <<" ";
        }
        cout <<endl;
    }
}


/*
LIBRO DE LUIS JOYANES Y CHAT GPT
Sí, lo que se afirma en el texto es correcto en C++. Un array bidimensional en C++ se almacena en memoria
como una secuencia contigua de elementos, donde cada fila se almacena de manera consecutiva una después de la otra.

Para acceder a un elemento de una matriz, el compilador necesita saber la dirección de la fila y la columna correspondiente.
En lugar de almacenar cada dirección de cada elemento en la matriz, el compilador de C++ considera que un array bidimensional
es en realidad un array de punteros a los arrays que forman sus filas.

Por lo tanto, para apuntar a un array bidimensional como tal, se necesita un puntero doble o puntero a puntero, que contendrá
la dirección del primer puntero del array de punteros a cada una de las filas del array bidimensional o matriz.
*/

/*

INT (*A)[3] dice que: A es un puntero a un arreglo de 3 elementos tipo int
INT *B[3] dice que: B es un arreglo de punteros (un arreglo de 3 elementos (punteros) a enteros)

AQUÍ SE USA UN PUNTERO A UN ARREGLO DE 3 ELEMENTOS
#include <iostream>
using namespace std;

void llenar_Matriz(int (*A)[3]);
void mostrar_Matriz(int (*A)[3]);

int main(int argc, char const *argv[])
{
    
    int matriz[3][3] = {{},{},{}};

    //int *a = &matriz[0][0];
    llenar_Matriz(matriz);

    cout <<endl <<endl;

    mostrar_Matriz(matriz);

    return 0;
}

void llenar_Matriz(int (*A)[3]){

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            cout <<"["<<i<<"]["<<j<<"]: "; 
            cin >> A[i][j];
        }
    }

}


void mostrar_Matriz(int (*A)[3]){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            //cout << A[i][j] <<" ";
            cout << (*A +i*3)[j] <<" ";
        }
        cout <<endl;
    }
}


*/


/*
USANDO UN PUNTERO

#include <iostream>
using namespace std;

void llenar_Matriz(int *puntero_matriz);
void mostrar_Matriz(int *puntero_matriz);

int main(int argc, char const *argv[])
{
    int matriz[3][3] = {0};

    llenar_Matriz(&matriz[0][0]);

    cout << endl << endl;

    mostrar_Matriz(&matriz[0][0]);

    return 0;
}

void llenar_Matriz(int *puntero_matriz)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> *(puntero_matriz + i*3 + j);
        }
    }
}

void mostrar_Matriz(int *puntero_matriz)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << *(puntero_matriz + i*3 + j) << " ";
        }
        cout << endl;
    }
}
*/