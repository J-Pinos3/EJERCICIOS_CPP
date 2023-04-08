#include <iostream>
#include <new>
using namespace std;

void ingresarDatos(int *ptr, int size_);
void mostrarDatos(const int *ptr, int size_);


int main(int argc, char const *argv[])
{
    int n = 0;
    int *arr = nullptr;
    cout <<"Ingrese N datos: ";
    cin >> n;

    arr = new int[n];
    
    ingresarDatos(arr, n);

    cout << endl;
    
    mostrarDatos(arr, n);


    delete[] arr;
    return 0;
}


void ingresarDatos(int *ptr, int size_){
    cout <<"Ingrese valores: "<< endl;
    for(int i = 0; i < size_; i++){
        cout << i + 1 << ": ";
        cin >> ptr[i];
    }

    cout << endl;
}


void mostrarDatos(const int *ptr, int size_){
    cout <<"Los valores ingresados son: " << endl;
    for(int i = 0; i < size_; i++){
        cout << *(ptr+i) << " ";
    }
    cout << endl;
}