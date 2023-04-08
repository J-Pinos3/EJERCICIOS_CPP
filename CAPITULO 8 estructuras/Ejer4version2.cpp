#include <iostream>
#include <cstdlib>
using namespace std;
/*
1) Crear un arreeglo de estructuras con ID y nombre para 2 empleados
2) ingresar los datos por el teclado
3) Validar que el ID sólo tenga números y seis dígitos
ESTA VERSIÓN ES IGUAL QUE LA VERSIÓN PERO PARA VALIDAR QUE EL ID SEA DE 6 DÍGITOS
YA NO USÉ LA SENTENCIA goto
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
//************************************************

for(int i = 0; i < 2; i++){ //i < 2 xq son 2 empleados


    cout <<"Ingrese el ID del empleado: "<<i+1<<endl;
    getline(cin, empleados[i].id_empleado);//TODO ESTO ES EL ID
    esNumero = true;


    for(int j = 0; j < 6; j++){ //este for valida los 6 dígitos del ID

        if( (empleados[i].id_empleado[j]=='0')||(empleados[i].id_empleado[j]=='1')||(empleados[i].id_empleado[j]=='2')||(empleados[i].id_empleado[j]=='3')||(empleados[i].id_empleado[j]=='4')||(empleados[i].id_empleado[j]=='5')||(empleados[i].id_empleado[j]=='6')||(empleados[i].id_empleado[j]=='7')||(empleados[i].id_empleado[j]=='8')||(empleados[i].id_empleado[j]=='9') ){
          esNumero = true;
        }else{//EN ESTE ELSE EL USUARIO DEBE VOLVER A INGRESAR EL ID
                esNumero = false;
             }//fin del else


        if(esNumero == false){//el usuario no ingresó un número
            j = 0; //para volver a validar los números EN EL BUCLE FOR
            cout <<"ANIMAL, ingresa bien el id"<<endl;
            cout <<"Ingrese el ID del empleado: "<<i+1<<endl;
            getline(cin, empleados[i].id_empleado);//TODO ESTO ES EL ID
            cout <<endl<<endl;
        }





    }//fin del for que valida los 6 dígitos

    cout <<"Ingrese el nombre del empleado: "<<i+1<<endl;
    getline(cin, empleados[i].nombre);//TODO ESTO ES EL NOMBRE
    cout <<endl;

    system("cls");
}


//************************************************
for(int i = 0; i < 2; i++){
  cout <<"| Nombre: "<<empleados[i].nombre<<" |"<<endl;
  cout <<"| ID: "<<empleados[i].id_empleado<<" |"<<endl;
  cout <<endl<<endl;
}



    return 0;
}
