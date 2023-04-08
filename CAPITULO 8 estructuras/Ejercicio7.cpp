#include <iostream>
#include <cstdlib>
using namespace std;

struct DATOS{
  string nombres, direccion;
};

struct ALUMNOS{
  struct DATOS dat;
  int curso, edad;
  int notas[5];
};

struct PROFESORES{
  int cargo;
  struct DATOS dat;
  string asignaturas[4];
};


//FUNCIONES
void leer_datos(DATOS &dat);
void leer_alumno(ALUMNOS &a);
void leer_profesor(PROFESORES &p);

int main() {
ALUMNOS a;
PROFESORES p;

leer_alumno(a);
cout <<"\n\n\n<----------------------------------------------------->\n\n\n";
leer_profesor(p);

  return 0;
}

void leer_datos(DATOS &dat){
  cout <<"Ingrese nombres y apellidos"<<endl<<endl;
  getline(cin, dat.nombres);
  cout <<"Ingrese la direccion"<<endl;
  getline(cin, dat.direccion);


}//FIN DE LA FUNCIÓN LEER DATOS


void leer_alumno(ALUMNOS &a){
cout <<"Datos del alumno"<<endl<<endl;

leer_datos(a.dat);
cout <<"\nCurso: ";
cin >> a.curso;
cin.ignore();
cout <<"\nEdad: ";
cin >> a.edad;
cin.ignore();

cout <<"\n\nNotas del alumno: "<<endl<<endl;
for(int i = 0; i < 5; i++){
  cout <<"Nota "<<i+1<<": ";
  cin >> a.notas[i];
}


}// FIN DE LA FUNCIÓN LEER ALUMNOS


void leer_profesor(PROFESORES &p){
cout <<"Datos del profesor"<<endl<<endl;
cin.ignore();
leer_datos(p.dat);
cout <<"\nCargo: ";
cin >> p.cargo;
cin.ignore();

cout <<"\n\nAsignaturas del docente: "<<endl<<endl;
for(int i = 0; i < 4; i++){
  cout <<"Asignatura "<<i+1<<": ";
  getline(cin,p.asignaturas[i]);
}

}//FIN DE LA FUNCION LEER PROFESORES
