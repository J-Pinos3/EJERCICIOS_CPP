#include <iostream>
using namespace std;

const int TAM = 10;

void mostrar_arreglo(int arr[], const int TAM);
void mostrar_arreglo_punteros(int *arr2[], const int TAM);

int main(int argc, char const *argv[])
{
    
    int arr1[TAM] = {2,4,6,8,10,12,14,16,18,20};
    int *Ptr_arr1[TAM];

    for (int i = 0; i < TAM; i++)
    {
        *(Ptr_arr1+i) = arr1+i;
    }
    
    cout <<"Se muestra el arreglo original: "<<endl;
    mostrar_arreglo(arr1,TAM);
    
    cout <<endl<<"Se muestra el arreglo de punteros: "<<endl;
    mostrar_arreglo_punteros(Ptr_arr1, TAM);

    return 0;
}


void mostrar_arreglo(int arr[], const int TAM){
    for(int i = 0; i < TAM; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}

void mostrar_arreglo_punteros(int *arr2[], const int TAM){
    for(int i = 0; i < TAM; i++){
        //cout << **(arr2+i) << " ";
        cout << *( *(arr2+i) ) << " ";
    }
    cout <<endl;
}