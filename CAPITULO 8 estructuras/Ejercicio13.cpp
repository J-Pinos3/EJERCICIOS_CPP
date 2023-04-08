#include <iostream>
#include <cstdlib>
using namespace std;

struct fechaNACIMIENTO{
  int dia, mes, anio;

};

struct PERSONA{
  string nombre_Persona;
  int edad;
  float altura, peso;
  struct fechaNACIMIENTO dia_NACIMIENTO;
};

struct personaEMPLEADO{
  struct PERSONA datosPersona;
  float salario;
  short int horas_Trabajadas;
};

void leerEmpleado(personaEMPLEADO &humano);
void escribirEmpleado(personaEMPLEADO &humano);


int main() {
personaEMPLEADO humano;
leerEmpleado(humano);

cout <<"\n\n<------------------------------------------>"<<endl<<endl;

escribirEmpleado(humano);

  return 0;
}


void leerEmpleado(personaEMPLEADO &humano){
cout <<"Humano, ingresa los datos del empleado"<<endl;
cout <<"\nIngrese el nombre del empleado: ";
getline(cin, humano.datosPersona.nombre_Persona);
//cin.sync();
cout <<"\nIngrese la edad del empleado: ";
cin >> humano.datosPersona.edad;
//cin.sync();
cout <<"\nIngrese la altura del empleado: ";
cin >> humano.datosPersona.altura;
//cin.sync();
cout <<"\nIngrese el peso del empleado: ";
cin >> humano.datosPersona.peso;
//cin.sync();
cout <<"\n| Ingrese la fecha de nacimiento |"<<endl;
cout <<"d"<<char(161)<<"a: ";//alt + 161 í
cin >> humano.datosPersona.dia_NACIMIENTO.dia;
//cin.sync();
cout <<"\nmes: ";
cin >> humano.datosPersona.dia_NACIMIENTO.mes;
//cin.sync();
cout <<"\na"<<char(164)<<"o: ";
cin >> humano.datosPersona.dia_NACIMIENTO.anio;
//cin.sync();
cout <<"\nIngrese el salario del empleado"<<endl;
cin >> humano.salario;
//cin.sync();
cout <<"\nIngrese las  horas trabajadas: ";
cin >> humano.horas_Trabajadas;
//cin.sync();
}//fin de la funcion leerEmpleado


void escribirEmpleado(personaEMPLEADO &humano){

cout <<"|Nombre: "<<humano.datosPersona.nombre_Persona<<" |"<<endl;
cout <<"|Edad: "<<humano.datosPersona.edad<<" |"<<endl;
cout <<"|Altura: "<<humano.datosPersona.altura<<" |"<<endl;
cout <<"|Peso: "<<humano.datosPersona.peso<<" |"<<endl;
cout <<"Fecha de Nacimiento"<<endl;
cout <<"dia: "<<humano.datosPersona.dia_NACIMIENTO.dia<<" mes: "<<
humano.datosPersona.dia_NACIMIENTO.mes<<" a"<<char(164)<<"o: "<<humano.datosPersona.dia_NACIMIENTO.anio<<endl;
cout <<"|Salario: "<<humano.salario<<"$ |"<<endl;
cout <<"|Horas trabajadas: "<<humano.horas_Trabajadas<<"h |"<<endl;

}//fin de la funcion escribirEmpleado
