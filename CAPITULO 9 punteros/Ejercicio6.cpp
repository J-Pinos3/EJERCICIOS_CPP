#include <iostream>
#include <cstdlib>
using namespace std;

/*
PARA PASAR PUNTEROS POR REFERENCIA SE USA EL OPERADOR DE INDIRECCIÓN/desreferencia (*) al momento de declarar la funcións
AL MOMENTO DE LLAMAR LA FUNCIÓN DEBO PASARLE LA DIRECCIÓN DEL A VARIABLE CON &
*/

void Cubo(int *nptr);

int main() {

int num = 3;
cout <<"num: "<<num<<endl;
Cubo(&num);//LA FUNCIÓN Cubo recibe como parámetro una dirección Y POR ESO SU PARAÁMETRO DEBE SEER UN PUNTERO
cout <<"num luego de la funcion cubo: "<<num<<endl<<endl;

int *ptr_num = nullptr;
ptr_num = &num;
*ptr_num = 7;
cout << "*ptr_num:"<<*ptr_num<<endl;
cout << "ptr_num +1:"<<ptr_num+1<<endl;
cout << "ptr_num +2:"<<ptr_num+2<<endl;
cout << "ptr_num +3:"<<ptr_num+3<<endl;


  return 0;
}

void Cubo(int *nptr){

  *nptr = (*nptr) * (*nptr) * (*nptr);
}//FIN DE LA FUNCIÓN CUBO POR REFERENCIA
