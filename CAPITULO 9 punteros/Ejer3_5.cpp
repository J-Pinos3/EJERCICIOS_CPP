#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {

    int i, *v, n, *Ptr_entero;

    Ptr_entero = new int(50);
    cout <<"*Ptr_entero inicializado: " << *Ptr_entero << endl;

    cout <<"Ingrese el tamaño del arreglo: ";     cin >> n;
    v = new int[n];

    for(i = 0; i < n; i++){
        //v[i] = 10*(i+1);
        *(v+i) = 10*(i+1);
    }


    cout << "\nArreglo: "<<endl;
    for(i = 0; i < n; i++){
        cout <<" v[" << i << "] = " << *v++;
    }
    cout <<endl;

    delete Ptr_entero;
    delete[] v;

  return 0;
}
