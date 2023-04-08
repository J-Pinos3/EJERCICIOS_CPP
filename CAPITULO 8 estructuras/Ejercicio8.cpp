#include <iostream>
#include <cstdlib>
using namespace std;

struct EMPLEADO{
  string nombre_empleado;
  float salario;
}empleados[4];

//REFERENCIA CONSTANTE const EMPLEADO& empleados
void ingresarDatos(EMPLEADO empleados[]);
void ordenarDatos(EMPLEADO empleados[]);
void mostrarDatos(const EMPLEADO empleados[] );

int main() {

cout <<"Ingrese los datos de los empleados"<<endl<<endl;
ingresarDatos(empleados);
cout <<endl<<endl;
ordenarDatos(empleados);
mostrarDatos(empleados);
  return 0;
}

void ingresarDatos(EMPLEADO empleados[]){
  for(int i = 0; i < 4; i++){
    cout <<"| Empleado: "<<i+1<<" |"<<endl<<endl;

    cout <<"Nombre: ";
    getline(cin,empleados[i].nombre_empleado);

    cout <<"\nSueldo: ";
    cin >>empleados[i].salario;

    cin.sync();
    cout<<"\n\n<-------------------------->\n\n";
  }


}//FIN DE LA FUNCION ingresarDatos


void ordenarDatos(EMPLEADO empleados[]){
  string auxNombre;
  float auxSueldo;

  //SE APLICARÁ ORDENAMIENTO BURBUJA DE MAYOR A MENOR
  for(int i = 0; i < 4; i++){
      for(int j = i+1; j < 4; j++){
              //        1-2                     0-1
            if(empleados[j].salario > empleados[i].salario ){
                auxNombre = empleados[i].nombre_empleado;
                empleados[i].nombre_empleado = empleados[j].nombre_empleado;
                empleados[j].nombre_empleado = auxNombre;

                auxSueldo = empleados[i].salario;
                empleados[i].salario = empleados[j].salario;
                empleados[j].salario = auxSueldo;
            }
      }
  }


}//FIN DE LA FUNCIÓN ordenarDatos


void mostrarDatos(const EMPLEADO empleados[]){
  for(int i = 0; i < 4; i++){
    cout <<"Empleado: "<<i+1<<endl;
    cout <<"Nombre: "<<empleados[i].nombre_empleado<<endl;
    cout <<"Sueldo: "<<empleados[i].salario<<endl;
    cout <<"\n{*************************************}"<<endl<<endl;
  }


}//FIN DE LA FUNCION mostrarDatos
