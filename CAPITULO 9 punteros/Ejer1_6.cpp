#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    float v[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    float *P[6];//es un array de punteros y cada elemento es un puntero

    for(int i = 0; i <6 ; i++){
        *(P+i) = v+i;//P+i es la dirección de cada puntero
        //cuendo pongo *(P+i) accedo a lo que está dentro de cada puntero y le asigno la direccion de memoria de cada elemento del arreglo
        //cuando pongo **(P+i) accedo a cada elemento del arreglo
    }

    /*
    for(int i = 0; i < 6; i++){
        cout <<"P + "<<i<<" = "<< P + i <<endl;
    }
    */
    cout <<"[ "<<P+0<<"     "<<*(P+0)<<"     "<<**(P+0)<<" ]"<<endl;
    cout <<"[ "<<P+1<<"     "<<*(P+1)<<"     "<<**(P+1)<<" ]"<<endl;
    cout <<"[ "<<P+2<<"     "<<*(P+2)<<"     "<<**(P+2)<<" ]"<<endl;

    cout <<endl;

    for(int i = 0; i < 6; i++){
        cout <<"v + "<<i<<" = "<< v + i <<" = "<<*(P+i)<<endl;
    }

    cout <<endl;

    for (int i = 0; i< 6; i++) {
        cout <<"v["<<i<<"] = "<< *(v+i)<<" = "<< **(P+i)<<endl;
    }

  return 0;
}
