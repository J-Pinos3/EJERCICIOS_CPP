#include <iostream>
#include <string>
using namespace std;

struct PERSONA{
    string nombre;
    string cedula;
};


int main() {
PERSONA P1, *Ptr_p1 = nullptr;
Ptr_p1 = &P1;

cout <<"Ingrese el nombre: ";
getline(cin, (*Ptr_p1).nombre);
cout <<"Ingrese la cedula: ";
cin >> Ptr_p1->cedula;

cout <<endl<<endl;
cout <<"Nombre: "<<(*Ptr_p1).nombre<<endl;
cout <<"C"<<char(130)<<"dula: "<<Ptr_p1->cedula<<endl;

  return 0;
}
