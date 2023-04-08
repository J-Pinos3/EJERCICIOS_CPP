#include <iostream>
using namespace std;

void mostrar_arreglo(int a[]);
void mostrar_puntero_Arr(int *a);

int main(int argc, char const *argv[])
{

    int arr[6] = {1,2,3,4,5,6};
    //int *Ptr_arr = arr;

    mostrar_arreglo(arr);
    mostrar_puntero_Arr(&arr[0]);

    cout <<endl<<endl;
    int *pv = &arr[3]; //apunta al cuarto elemento

    cout << "arr[3] = " << arr[3] << "&arr[3] = " << arr+3 <<endl;
    cout << "*pv = " << *pv << "pv = " << pv <<endl;


    cout <<"índice del cuarto elemento: " << pv - arr;

    cout <<endl<<endl<<"Imprimir los elementos en reversa"<<endl;
    for(pv = arr + 5; pv >= arr; pv--){
        cout << *pv <<" <-> "; 
    }

    return 0;
}

void mostrar_arreglo(int a[]){
    for(int i = 0; i < 6; i++){
        cout << a[i] << " " << a + i << endl;
    }
    cout <<endl;
}

void mostrar_puntero_Arr(int *a){
    for(int i = 0; i < 6 ; i++){
        cout << *(a+i) << " " << a + i << endl;
    }
    cout <<endl;
}