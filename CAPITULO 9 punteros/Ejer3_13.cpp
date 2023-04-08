#include <iostream>
#include <new>
using namespace std;

struct PUNTO{
    float x_cord;
    float y_cord;

};

void crear_coordenada(PUNTO *p);
void mostrar_coordenada(const PUNTO *p);
void leer_arreglo(PUNTO *arr, int n);
void mostrar_Arreglo(PUNTO *arr, int n);


int main(int argc, char const *argv[])
{
    int n = 0;
    cout <<"Ingrese el número de puntos cartesianos: ";
    cin >> n;
    PUNTO *puntos = new PUNTO[n];
    
    leer_arreglo(puntos, n);

    cout << endl << "---------------" << endl;

    mostrar_Arreglo(puntos, n);

    delete[] puntos;

    return 0;
}


void crear_coordenada(PUNTO *p){
    cout << "coordenadas X e Y: ";
    cin >> p->x_cord >> p->y_cord;
}
void mostrar_coordenada(const PUNTO *p){
    cout << "(" <<p->x_cord << ", " << p->y_cord<<")" << endl;
}

void leer_arreglo(PUNTO *arr, int n){
    for(int i = 0; i < n; i++){
        crear_coordenada(arr+i);
    }
}
void mostrar_Arreglo(PUNTO *arr, int n){
    for(int i = 0; i < n; i++){
        mostrar_coordenada(arr+i);
    }
}