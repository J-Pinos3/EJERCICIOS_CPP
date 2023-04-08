#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct PERSONA{
  string nombre;
  int edad;
  string correo_elec;

}gente[5], leergente[5];

int main() {

/*

ofstream archivoescritura("estrucArchivo.txt", ios::out|ios::app);//*********

cout <<"\tIngrese los datos de los contactos"<<endl;
for(int i = 0; i < 5; i++){
  cout <<"-> "<<i+1<<endl;
  cout <<"Nombre: ";
  getline(cin, gente[i].nombre);

  cout <<"\nEdad: ";
  cin >> gente[i].edad;

  cin.ignore();

  cout <<"\nCorreo Electrónico: ";
  getline(cin, gente[i].correo_elec);

  archivoescritura << gente[i].nombre<<endl;
  archivoescritura << gente[i].edad<<endl;
  archivoescritura << gente[i].correo_elec<<endl;
}

archivoescritura.close();//*********

*/



ifstream archivolectura("estrucArchivo.txt", ios::in);//------------

string nombre_lectu,correo_lectu;
int edad_lectu;

  getline(archivolectura, nombre_lectu );
  while( !archivolectura.eof() ){
      cout <<"|Nombre -> "<<nombre_lectu<<endl;

      archivolectura >> edad_lectu;
      cout <<"|Edad -> "<<edad_lectu<<endl;

      archivolectura.ignore();

      getline(archivolectura, correo_lectu );
      cout <<"|Correo Electrónico -> "<<correo_lectu<<endl;

      getline(archivolectura, nombre_lectu );

  }




archivolectura.close();//------------


  return 0;
}
