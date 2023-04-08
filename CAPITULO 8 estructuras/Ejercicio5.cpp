#include <iostream>
#include <cstdlib>
using namespace std;
/*
PROMEDIO DE CALIFICACIÓN CON ARREGLO DE ESTRUCTURAS
1) CREAR la estructura materia, con el nombre de la materia y la nota  YA
2) inicializar el nombre de la materia YA
3) Pedir al ususario que ingrese la CALIFICACIÓN YA
4) Mostrar un mensaje según la nota del alumno
*/

struct MATERIA{
  string nombre_Materia;
  float nota;
};//total de 6 asignaturas x tanto 6 nombres de materias

int main() {
//MÉTODO 2 DE PROGRAMADOR NOVATO
MATERIA asignaturas[6] = { {"Física",0},
{"Química",0},
{"Estática",0},
{"Música",0},
{"Matemáticas",0},
{"Cálculo",0}
};

float suma = 0, promedio;
cout <<"Ingrese las calificaciones para cada materia"<<endl;
for(int i = 0; i < 6; i++){
  cout <<"CALIFICACIÓN de: "<<asignaturas[i].nombre_Materia<<endl;
  cin >> asignaturas[i].nota;
    while( (asignaturas[i].nota < 0)||(asignaturas[i].nota > 10) ){
      cout <<"Nota incorrecta"<<endl;
      cout <<"Inténtelo de nuevo"<<endl;
      cin >> asignaturas[i].nota;
      system("cls");
    }
  suma = suma + asignaturas[i].nota;
}

cout <<endl<<endl<<endl;
cout <<"El promedio de calificaiones es: "<<suma/6<<endl;



//MÉTODO 1
/*
MATERIA asignaturas[6];
asignaturas[0].nombre_Materia = "FISICA";
asignaturas[1].nombre_Materia = "QUIMICA";
asignaturas[2].nombre_Materia = "HISTORIA";
asignaturas[3].nombre_Materia = "MUSICA";
asignaturas[4].nombre_Materia = "CALCULO";
asignaturas[5].nombre_Materia = "MATEMATICAS";

cout <<"Ingrese las notas"<<endl;
for(int i = 0; i < 6; i++ ){
  cout <<"Materia "<<i+1<<endl;
  cin >> asignaturas[i].nota;

    while( (asignaturas[i].nota < 0)||(asignaturas[i].nota > 10) ){
      cout <<"Error, Ingrese la nota de nuevo"<<endl;
      cin >> asignaturas[i].nota;
    }
      cout <<endl;
}

system("pause");
system("cls");

for(int i = 0; i < 6; i++ ){
  cout <<"Materia "<<i+1<<endl;
  cout <<"Nombre de la asignatura: "<<asignaturas[i].nombre_Materia<<endl;
  cout <<"Nota: "<<asignaturas[i].nota<<endl;

  cout <<endl;
}
*/





  return 0;
}
