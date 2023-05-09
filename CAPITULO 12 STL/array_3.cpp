#include<array>
#include <iostream>
using namespace std;

void asignarElementos(const int arr[], array< int *,5> &a);
void mostrarElementos(const array< int *,5> &arr);

int main(int argc, char const *argv[])
{
    int arr[5] = {6,8,7,9,1};
    array< int *,5> m;

    cout << "Direcciones de memoria del arreglo integrado: "<<endl;
    for( int i = 0; i < m.size(); i++ ){
        cout << arr + i << " " << endl;
    }
    cout << endl << endl;
    asignarElementos(arr, m);
    cout << endl<<endl<<"--------------------------------"<<endl;
    mostrarElementos(m);





    return 0;
}


void asignarElementos(const int arr[], array< int *,5> &a){
    for( int i = 0; i < a.size(); i++ ){
        //*(a+i) //solo es el puntero y almacena la dirección de memoria
        cout << arr+i << endl;
        a[i] = (int *)arr+i;
    }

}
void mostrarElementos(const array< int *,5> &arr){

    for(int i = 0; i < arr.size(); i ++){
        cout << *arr.at(i) << " ";
    }
    cout << endl;
}