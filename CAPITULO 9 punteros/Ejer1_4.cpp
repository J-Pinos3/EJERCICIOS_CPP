#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int numero = 50;
    int *Ptr1_num = &numero;
    int **Ptr2 = &Ptr1_num;


    cout <<"numero: "<<numero<<endl;
    cout <<"&numero: "<<&numero<<endl;//DIRECCIÓN DE MEMORIA DE LA VARIABLE NUMERO
    cout <<"*Ptr1_num: "<<*Ptr1_num<<endl;
    cout <<"Ptr1_num: "<<Ptr1_num<<endl;//ALMACENA LA DIRECCION DE MEMORIA DE LA VARIABLE NUMERO
    cout <<"&Ptr1_num: "<<&Ptr1_num<<endl;//DIRECCIÓN DE MEMORIA DE Ptr1_num
    cout <<"Ptr2: "<<Ptr2<<endl;//ALMACENA LA DIRECCIÓN DE MEMORIA DE Ptr1_num
    cout <<"*Ptr2: "<<*Ptr2<<endl;//ALMACENA LA DIRECCIÓN DE MEMORIA DE NUMERO
    cout <<"**Ptr2: "<<**Ptr2<<endl;//ME MUESTRA LO QUE ALMACENA LA VARIABLE NUMERO (50)








  return 0;
}
