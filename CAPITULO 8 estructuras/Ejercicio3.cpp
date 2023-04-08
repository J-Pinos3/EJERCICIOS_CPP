#include <iostream>
#include <cstdlib>
using namespace std;

struct DIRECCION{
  string provincia;
  string ciudad;
  string calle;
};

struct EMPLEADOS{
  string nombre;
  string telefono;
  struct DIRECCION direc_Empleados;
};

struct CLIENTES{
  string nombre;
  string telefono;
  struct DIRECCION direc_Clientes;
};



int main() {
char opcion;
EMPLEADOS empleado_1;
CLIENTES cliente_1;

cout <<"Ingrese los datos del empleado 1\n\n";
cout <<"Ingrese el nombre del primer empleado"<<endl;
getline(cin, empleado_1.nombre);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese el telefono del primer empleado"<<endl;
getline(cin, empleado_1.telefono);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese la provincia origen del empleado"<<endl;
getline(cin, empleado_1.direc_Empleados.provincia);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese la ciudad origen del empleado"<<endl;
getline(cin, empleado_1.direc_Empleados.ciudad);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese la calle del empleado"<<endl;
getline(cin, empleado_1.direc_Empleados.calle);
cout <<endl;
system("pause");
system("cls");

cout <<"Ingrese los datos del cliente 1\n\n";
cout <<"Ingrese el nombre del primer cliente"<<endl;
getline(cin, cliente_1.nombre);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese el telefono del primer cliente"<<endl;
getline(cin, cliente_1.telefono);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese la provincia del cliente"<<endl;
getline(cin, cliente_1.direc_Clientes.provincia);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese la ciudad del cliente"<<endl;
getline(cin, cliente_1.direc_Clientes.ciudad);
cout <<"\n<--------------------------------------------->"<<endl;
cout <<"Ingrese la calle del cliente"<<endl;
getline(cin, cliente_1.direc_Clientes.calle);

cout <<endl;
system("pause");
system("cls");

cout <<"Ver datos de empleados: (1)\nVer datos de clientes: (2)"<<endl<<endl;
cin >> opcion;
cout <<endl<<endl;
if(opcion == '1'){
  cout <<"EMPLEADO 1"<<endl;
  cout <<"Nombre: "<<empleado_1.nombre<<endl;
  cout <<"Telefono: "<<empleado_1.telefono<<endl;
  cout <<"Provincia: "<<empleado_1.direc_Empleados.provincia<<endl;
  cout <<"Ciudad: "<<empleado_1.direc_Empleados.ciudad<<endl;
  cout <<"Calle: "<<empleado_1.direc_Empleados.calle<<endl;

}else if(opcion == '2'){
    cin.ignore();
  cout <<"CLIENTE 1"<<endl;
  cout <<"Nombre: "<<cliente_1.nombre<<endl;
  cout <<"Telefono: "<<cliente_1.telefono<<endl;
  cout <<"Provincia: "<<cliente_1.direc_Clientes.provincia<<endl;
  cout <<"Ciudad: "<<cliente_1.direc_Clientes.ciudad<<endl;
  cout <<"Calle: "<<cliente_1.direc_Clientes.calle<<endl;


}else{
  cout <<"Opción no válida, cerrando el programa...";
}



  return 0;
}
