#include <iostream>
#include <cstdlib>
using namespace std;
/*
SISTEMA DE CALIFICACIONES
*/

struct ESTUDIANTE{
  string nombre_Materia;
  string nombre_alumno;
  float nota[5] = {};
}alumno[5];

int main() {
char n_conraya = 164;//ñ
alumno[0].nombre_Materia = "Fisica";
alumno[1].nombre_Materia = "Musica";
alumno[2].nombre_Materia = "Calculo";
alumno[3].nombre_Materia = "Programacion";
alumno[4].nombre_Materia = "Matematicas";

cout <<"Ingrese el nombre del alumno y sus calificaciones"<<endl;
for(int i = 0; i < 5 ; i++){
cout <<"| Alumno: "<<i+1<<" |"<<endl<<endl;

cout <<"Nombre: ";
getline(cin, alumno[i].nombre_alumno);

cout <<alumno[0].nombre_Materia<<": ";
cin >> alumno[i].nota[0];
cout <<alumno[1].nombre_Materia<<": ";
cin >> alumno[i].nota[1];
cout <<alumno[2].nombre_Materia<<": ";
cin >> alumno[i].nota[2];
cout <<alumno[3].nombre_Materia<<": ";
cin >> alumno[i].nota[3];
cout <<alumno[4].nombre_Materia<<": ";
cin >> alumno[i].nota[4];
cin.ignore();
//system("cls");
}

cout <<"\n| SISTEMA DE CALIFICACIONES ESCUELA \"ESCUELA MA"<<n_conraya<<"ANITAS\" |"<<endl<<endl;
for(int i = 0; i < 5; i++){
cout <<"Nombre: "<<alumno[i].nombre_alumno<<endl;

cout <<alumno[0].nombre_Materia<<": ";
cout << alumno[i].nota[0]<<endl;
cout << alumno[1].nombre_Materia<<": ";
cout << alumno[i].nota[1]<<endl;
cout << alumno[2].nombre_Materia<<": ";
cout << alumno[i].nota[2]<<endl;
cout << alumno[3].nombre_Materia<<": ";
cout << alumno[i].nota[3]<<endl;
cout << alumno[4].nombre_Materia<<": ";
cout << alumno[i].nota[4];

cout <<"\n\n<----------------------------------------->\n"<<endl;
}


  return 0;
}
