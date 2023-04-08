#include <iostream>
#include <cstdlib>
using namespace std;
/*
Crear un programa que:
Almacene nombre, dirección y teléfono de 3 empleados
Pedir al usuario que ingrese nombre y dirección de 2 clientes
*/
struct EMPLEADOS{
  string nombre;
  string direccion;
  string telefono;
}empleado1, empleado2, empleado3;

struct CLIENTES{
  string nombre;
  string direccion;
}cliente1, cliente2;

int main() {
char opcion;

empleado1.nombre = "José";
empleado1.direccion = "La Patria";
empleado1.telefono = "0962151117";

empleado2.nombre = "Martín";
empleado2.direccion = "La Concordia";
empleado2.telefono = "0963551917";

empleado3 = {"Cami",
"Calderon",
"0995873014"
};



cout <<" 1)Ver Datos de Empleados\n 2)Ingresar y Ver Datos de Clientes"<<endl<<endl;
cin >> opcion;
if(opcion == '1'){
  cout <<"EMPLEADO 1"<<endl;
  cout <<empleado1.nombre<<endl;
  cout <<empleado1.direccion<<endl;
  cout <<empleado1.telefono<<endl<<endl<<endl;

  cout <<"EMPLEADO 2"<<endl;
  cout <<empleado2.nombre<<endl;
  cout <<empleado2.direccion<<endl;
  cout <<empleado2.telefono<<endl<<endl<<endl;

  cout <<"EMPLEADO 3"<<endl;
  cout <<empleado3.nombre<<endl;
  cout <<empleado3.direccion<<endl;
  cout <<empleado3.telefono<<endl<<endl<<endl;

}else if(opcion == '2'){
  cin.ignore();
cout <<"Cliente 1"<<endl;
cout <<"Ingrese el nombre del primer cliente"<<endl;
getline(cin,cliente1.nombre);
cout <<"Ingrese la direccion del primer cliente"<<endl;
getline(cin,cliente1.direccion);
cout <<endl<<endl;
cout <<"Cliente 2"<<endl;
cout <<"Ingrese el nombre del segundo cliente"<<endl;
getline(cin,cliente2.nombre);
cout <<"Ingrese la direccion del segundo cliente"<<endl;
getline(cin,cliente2.direccion);
cout <<endl;
system("pause");
system("cls");

cout <<"CLIENTE 1"<<endl;
cout <<"| Nombre: "<<cliente1.nombre<<" |"<<endl;
cout <<"| Dirreccion: "<<cliente1.direccion<<" |"<<endl<<endl<<endl;

cout <<"CLIENTE 2"<<endl;
cout <<"| Nombre: "<<cliente2.nombre<<" |"<<endl;
cout <<"| Dirreccion: "<<cliente2.direccion<<" |"<<endl<<endl<<endl;

}


  return 0;
}
