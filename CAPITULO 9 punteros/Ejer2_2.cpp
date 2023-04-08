#include <iostream>
using namespace std;

void imprimir_array(const int* arreglo, int tamanio);

int main(int argc, char const *argv[]) {

    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};

    imprimir_array(&arr1[0], 5);
    imprimir_array(arr1, 5);

  return 0;
}
                        //arreglo recibe: &arr1[0]
void imprimir_array(const int* arreglo, int tamanio){

    for(int i = 0; i < tamanio; i++){
        cout <<"{"<< *(arreglo+i) <<"} ";
    }
    cout <<endl;

}
