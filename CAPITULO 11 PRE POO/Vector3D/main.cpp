#include <iostream>
#include "vector.h"
using namespace std;

//https://es.acervolima.com/como-devolver-un-puntero-de-una-funcion-en-c/
//https://www.delftstack.com/es/howto/cpp/return-a-pointer-in-cpp/


int main()
{
    Vector vec1(1.0,45.7,9.6);
    Vector vec2(-111.0,72.98,9.6), vec3(1.0,45.7,9.6);

    //if( vec1.son_iguales(vec3) ){
    //if( vec1.son_iguales_v2(&vec2) ){
    if( vec1.son_iguales_v3(vec3) ){
        cout <<"Los vectores: ";
        vec1.mostrar_vector();
        cout <<"km y ";
        vec3.mostrar_vector();
        cout <<"km SI son iguales"<<endl<<endl;
    }else{
        cout <<"Los vectores: ";
        vec3.mostrar_vector();
        cout <<"km y ";
        vec3.mostrar_vector();
        cout <<"km NO son iguales"<<endl<<endl;
    }


    //vec1.mostrar_vector(); cout << " = "<<vec1.pitagorazo()<<endl;


    return 0;
}
