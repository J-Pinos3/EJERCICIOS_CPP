#include <iostream>
#include <cstdlib>
using namespace std;
/*
1) Crear un arreeglo de estructuras con ID y nombre para 2 empleados
2) ingresar los datos por el teclado
3) Validar que el ID sólo tenga números y seis dígitos
*/

struct EMPLEADO{
  string id_empleado;
  string nombre;
}empleados[2];


int main() {
  bool esNumero = true; //para confirmar que los dígitos del ID son números
  cout <<"| Ingrese los datos de los empleados |"<<endl;
  cout <<"Nota: el ID de los empleados sólo puede conterner 6 numeros."<<endl;
cout <<endl<<endl;


for(int i = 0; i < 2; i++){ //i < 2 xq son 2 empleados

    regresa:
    cout <<"Ingrese el ID del empleado: "<<i+1<<endl;
    getline(cin, empleados[i].id_empleado);//TODO ESTO ES EL ID
    esNumero = true;

    for(int j = 0; j < 6; j++){ //este for valida los 6 dígitos del ID

      if( (empleados[i].id_empleado[j]=='0')||(empleados[i].id_empleado[j]=='1')||(empleados[i].id_empleado[j]=='2')||(empleados[i].id_empleado[j]=='3')||(empleados[i].id_empleado[j]=='4')||(empleados[i].id_empleado[j]=='5')||(empleados[i].id_empleado[j]=='6')||(empleados[i].id_empleado[j]=='7')||(empleados[i].id_empleado[j]=='8')||(empleados[i].id_empleado[j]=='9') ){
          esNumero = true;
      }else{
        esNumero = false;
        goto regresa;
      }

      //FORMA 2 DE VALIDAR
      /*
      if( (int(empleados[i].id_empleado[j])<=47)||(int(empleados[i].id_empleado[j])>=58)  ){
        esNumero = false;
        cout <<"Error, ingrese el ID  de nuevo. "<<endl;
        goto regresa;
      }
      */

    }
    cout <<"Ingrese el nombre del empleado: "<<i+1<<endl;
    getline(cin, empleados[i].nombre);//TODO ESTO ES EL NOMBRE
    cout <<endl;

}

for(int i = 0; i < 2; i++){
  cout <<"| Nombre: "<<empleados[i].nombre<<" |"<<endl;
  cout <<"| ID: "<<empleados[i].id_empleado<<" |"<<endl;
  cout <<endl<<endl;
}



    return 0;
}
