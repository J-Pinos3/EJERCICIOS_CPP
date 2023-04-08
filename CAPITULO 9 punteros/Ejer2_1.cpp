#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int arr1[5] = {10,20,30,40,50};
    int *vPtr = arr1; // vPtr = &arr1[0]

    for(int i = 0; i < 5; i++){
        cout <<"["<< *(vPtr+i)<<"] ";//si no le pongo *() solo se puestran las direcciones de memoria
    }


    double arr2[10] = {1.3, 152.3, 6.87, 0.47, 98.5, 7.02, 4.336, -12.,98, -20};
    double *v2Ptr = nullptr;
    v2Ptr = arr2;

    cout <<endl<<endl;
    for(int i = 0; i < 10; i++){
        cout <<"<"<< *(v2Ptr+i) <<"> ";
    }
    cout <<endl<<endl;
    //en un puntero se puede ++ Ó -- Ó += (+) Ó -= (-) y son apropiadas couando el puntero
    //apunta a un arreglo
    //si dos punteros apuntan al mismo arreglo
    //se pueden sumar o restar entre ellos x = Ptr2 -+ Ptr1;

  return 0;
}
