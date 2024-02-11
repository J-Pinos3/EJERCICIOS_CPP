#include <iostream>
#include <new>
using namespace std;

int main(int argc, char const *argv[])
{

    int **p_pTickTack = nullptr;

    p_pTickTack = new int *[3]; // un arreglo de punteros

    for (int i = 0; i < 3; i++)
    {
        // creamos un nuevo arreglo de punteros para cada dirección de memoria de lo antes creado
        p_pTickTack[i] = new int[3];
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p_pTickTack[i][j] = (j+1)*(i+1);
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << p_pTickTack[i][j] ;
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++){
        delete[] p_pTickTack[i];
    }

    delete[] p_pTickTack;

    return 0;
}
