#include <iostream>
#include <string>
using namespace std;

void ingresar_valores(string *arr, const int& tamanio);
void imprimir_nombres(const string* arr, const int& tamanio);

int main(int argc, char const *argv[])
{

    string arrNombres[10] = {};

    ingresar_valores(arrNombres, 10);
    imprimir_nombres(&arrNombres[0],10);








    return 0;
}

void ingresar_valores(string *arr, const int& tamanio){
    for(int i = 0; i < tamanio; i++){
        cout <<"Ingrese el nombre " << i+1 <<": ";
        getline(cin, *(arr+i) );
        cout <<endl;
    }
}

void imprimir_nombres(const string* arr, const int& tamanio){

    for(int i = 0; i < tamanio; i++){
        cout <<" -> "<<*(arr+i)<<endl;
    }

}