#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

/*

  int a = 7;
  float b = 12.3;
  char caracter = 'j';
//cout <<sizeof(int)<<endl;
  int *dir_a = nullptr;
  dir_a = &a;
  cout <<"Valor: "<<*dir_a<<endl;
  cout <<"Direccion: "<<dir_a<<endl<<endl;

  *dir_a = 9;
  cout <<"Valor: "<<*dir_a<<endl; //9
  cout <<"a: "<<a<<endl<<endl;//9

  cout <<"Modifique a:";
  cin >> *dir_a;

  cout <<"Valor: "<<*dir_a<<endl; //se modifica el *dir_a
  cout <<"a: "<<a<<endl<<endl;//por lo tanto también se modifica a


  cout <<sizeof(dir_a)<<endl;
  cout <<sizeof(int *)<<endl;
  cout <<sizeof(float *)<<endl;
  cout <<sizeof(char *)<<endl;
  cout <<sizeof(double)<<endl;


  float *dir_b = &b;
  cout <<"Valor (b): "<<*dir_b<<endl;
  cout <<"Direccion (b): "<<dir_b<<endl<<endl;

  char *dir_caracter = nullptr;
  dir_caracter = &caracter;
  //*dir_caracter = 'l';
  cout <<"Valor (caracter): "<<*dir_caracter<<endl;
  cout <<"Direccion (caracter): "<<dir_caracter<<endl<<endl;

*/

int a = 32;
int b = 45;
int *a_ptr = nullptr;

a_ptr = &a;
cout <<"valor: "<<*a_ptr<<endl;
cout <<"Direccion: "<<a_ptr<<endl;
*a_ptr = b;//todavía apunta a (a)
cout <<"valor: "<<*a_ptr<<endl;
cout <<"Direccion: "<<a_ptr<<endl;
cout <<"a: "<<a<<endl;//se modifica al igual que *a_ptr


system("pause");
system("cls");


int num = 15;
int *num_ptr = nullptr;
num_ptr = &num;
cout <<"num: "<<num<<endl;
cout <<"*num_ptr: "<<*num_ptr<<endl;
cout <<"direc num: "<<num_ptr<<endl;
cout <<"TODO VA A AUMENTAR EN: "<<sizeof(int)<<" BYTES"<<endl;
cout <<"num_ptr +1"<<num_ptr+1<<endl;
cout <<"num_ptr +2"<<num_ptr+2<<endl;
cout <<"num_ptr +3"<<num_ptr+3<<endl;
cout <<"num_ptr +4"<<num_ptr+4<<endl;
cout <<"num_ptr +5"<<num_ptr+5<<endl;
cout <<"num_ptr +6"<<num_ptr+6<<endl<<endl<<endl<<endl;





int numerito = 11;
// PUNTERO NO CONSTANTE A DATOS CONSTANTES, es un puntero que se puede modificar y apuntar a cualquier dato apropiado
//pero los datos a los que apunta no se pueden modificar a través del apuntador
const int *numer_ptr = nullptr;
numer_ptr = &numerito;
//*numerito = 12; no se puede modificar xq numerito se vuelve una constante
cout <<"numerito modificado?: "<<*numer_ptr<<endl;
cout <<"Direc numerito: "<<numer_ptr<<endl;




// PUNTERO CONSTANTE A DATOS NO CONSTANTES, es un puntero que siempre apunta a la misma ubicación de memoria;
//los datos en esa ubicación se pueden modificar a través del puntero
//los punteros constantes deben inicializarse
cout <<"\n\n\n<------------------>"<<endl;
int x = 2, y = 6;
cout <<"x: "<<x<<endl;
int *const punterito_ptr = &x;
*punterito_ptr = 11;
cout <<"*punterito_ptr (apunta a x): "<<*punterito_ptr<<endl<<endl<<endl<<endl;
//punterito_ptr = &y; NO SE PUEDE MODIFICAR UN ELEMENTO CONSTANTE, EN ESTE CASO EL PUNTEROS




//PUNTERO CONSTANTE A DATOS CONSTANTES, siempre apunta a la misma dirección de memoria
//y los datos de esa ubicación no se pueden medificar mediante el uso del puntero
const int *const punter_ptr = &x;
cout << "*punter_ptr:"<<*punter_ptr<<endl;
//*punter_ptr = 8;  LAS DOS LÍNEAS DAN ERROR AL MODIFICAR CONSTANTES
//punter_ptr = &y;
  return 0;
}
