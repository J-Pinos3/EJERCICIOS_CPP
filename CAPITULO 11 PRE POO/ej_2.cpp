#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class empleado{

    char *nombre;
    char *direccion;
    float sueldo = 0.0;

    public:
        empleado(){
            nombre = new char[0]; nombre =(char *)"";
            direccion = new char[0]; direccion =(char *)"";
            sueldo = 0;

        }

        void Poner_nombre(char *s){nombre = s;}
        void Poner_direccion(char *s){direccion = s;}
        void Poner_sueldo(float s){sueldo = s;}
        char *Obtener_nombre(){return nombre;}
        char *Obtener_direccion(){return direccion;}
        float Obtener_sueldo(){return sueldo;}
        void leerdatos();
        void mostrardatos();
        ~empleado(){}
};//fin de la clase empleado


void empleado::leerdatos(){
  char nombre[60], *s;
  float su;

  cout <<"Ingrese el nombre del empleado: ";
  cin.getline(nombre,59);
  s = new char(strlen(nombre)+1);
  strcpy(s,nombre);
  Poner_nombre(s);

  cout <<"Ingrese la direcci"<<char(162)<<"n del empleado: ";
  cin.getline(nombre,59);
  s = new char(strlen(nombre)+1);
  strcpy(s,nombre);
  Poner_direccion(s);

  cout <<"Ingrese el sueldo del empleado: ";
  cin >> su;
  cin.get();
  Poner_sueldo(su);
}


void empleado::mostrardatos(){
    cout <<"Nombre: "<<Obtener_nombre()<<endl;
    cout <<"Direcci"<<char(162)<<"n: "<<Obtener_direccion()<<endl;
    cout <<"Sueldo: "<<Obtener_sueldo()<<endl;
}







int main(int argc, char const *argv[]) {

empleado Empleados[3];
int i = 0;

for(i = 0; i < 3; i++){
  Empleados[i].leerdatos();
}

cout <<endl<<endl<<endl;


for(i = 0; i < 3; i++){
  Empleados[i].mostrardatos();
}
cout <<endl;
  return 0;
}
