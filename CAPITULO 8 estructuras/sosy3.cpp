#include <iostream>
#include <cstdlib>
using namespace std;

struct EMPLEADO{
  string nombre;
  double sueldoMensual;
  double comision;

};

void Ingresar_trabajadores(EMPLEADO gente[]);//esta funcion es para ingresar los datos de los trbajadores
void Mostrar_trabajadores(EMPLEADO gente[]);//esta funcion es para mostrar los trabajadores

int main() {
EMPLEADO trabajadores[4];
Ingresar_trabajadores(trabajadores);

system("pause");
system("cls");

Mostrar_trabajadores(trabajadores);

  return 0;
}


void Ingresar_trabajadores(EMPLEADO gente[]){
  for(int i = 0; i < 4; i++ ){
    cout <<"|Empleado: "<<i+1<<" |"<<endl<<endl;
    cout <<"Ingrese el nombre del empleado: "<<i+1<<endl;
    getline(cin,gente[i].nombre);
    cout <<"\nIngrese el sueldo mensual del empleado: "<<i+1<<endl;
    cin >> gente[i].sueldoMensual;
    cin.ignore();
    gente[i].comision = gente[i].sueldoMensual * (10.0/100);
    cout <<endl<<endl;
  }


}//FIN DE LA FUNCIÓN Ingresar_trabajadores


void Mostrar_trabajadores(EMPLEADO gente[]){

  for(int i = 0; i < 4; i++){
    cout <<"|Empleado: "<<i+1<<" |"<<endl<<endl;
    cout <<"|Nombre: "<<gente[i].nombre<<" |"<<endl;
    cout <<"|Sueldo Mensual: "<<gente[i].sueldoMensual<<" |"<<endl;
    cout <<"|Comision: "<<gente[i].comision<<" |"<<endl;
    cout <<"\n<----------------------------------------->"<<endl<<endl;
  }

}//FIN DE LA FUNCION Mostrar_trabajadores
