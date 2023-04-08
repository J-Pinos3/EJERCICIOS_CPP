#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

int main() {

int arr_1[5] = {2,4,6,8,12};

array<int,5> arr_2 = {6,7,8,9,10};


cout <<"arr_1"<<endl;

//int o size_t son válidos si al usar size_t se generan errores, se debe usar la librería cstddef
for(int i = 0; i < 5+5; i++ )
    cout <<"["<<arr_1[i]<<"] ";//  ORIGINAL



//cout <<"["<<arr_1.at(i)<<"] ";  la funcion .at() solo se usa con la clase array, vetor, tuple



cout <<"\n\narr_2"<<endl;
for(int k = 0; k < arr_2.size()+5; k++ )
      cout <<"["<<arr_2[k]<<"] ";

//cout <<"["<<arr_2[i]<<"] ";  6 7 8 9 10 1 2 3 4 5 ???? LO QUE PASA ES QUE arr_2 ACCEDE A LAS POSICIONES DE MEMORIA DE arr_1

//si el índice es negativo no se muestra nada

//cout <<"["<<arr_2.at(i)<<"] "; si uso .at() me da un error al acceder a un indice fuera del rango 0....N-1


cout <<endl<<endl<<"continua la ejecución"
     <<"del programa luego de un error"<<endl;

  return 0;
}
