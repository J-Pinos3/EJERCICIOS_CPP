#include <iostream>
#include <string>
using namespace std;

void hacerAlgo(int a);
string tocar_x_Pelotas(string msg1);

int main(int argc, char const *argv[]) {

    int a = 9;
    string nombre = "Miguel";

//LA FUNCION Y EL PUNTERO ASIGNADOS DEBEN TENER EL MISMO TIPO DE RETORNO Y LISTA DE PARÁMETROS O SE GENERARÁ ERROR
//la dirección de una función es su nombre
void (*Ptr_func)(int k);// Ptr_func es un puntero a una funcion de tipo void(valor de retorno) y tiene una lista de parámetros (int k)
Ptr_func = hacerAlgo;
Ptr_func(a);


string (*Ptr_func2)(string ms);//Ptr_func2 es un puntero a una funcion de tipo string(valor de retorno) y tiene una lista de parámetros (string ms)
Ptr_func2 = tocar_x_Pelotas;
cout <<Ptr_func2(nombre);

  return 0;
}


void hacerAlgo(int a){
    int b = 8 + a;
    cout <<"b: "<<b<<endl;
}// fin de hacerAlgo


string tocar_x_Pelotas(string msg1){

    return msg1 + " tocate las pelotas";
}//cansado de que te toquen las pelotas???????
