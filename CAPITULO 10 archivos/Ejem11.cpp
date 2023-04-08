#include <iostream>
#include <fstream>
using namespace std;

int main() {

ofstream archivo_escritura;
ifstream archivo_lectura;
string nombreArchivo;

cout <<"Ingrese el nombre del archivo:";
getline(cin,nombreArchivo);
                    //Proble1.txt
archivo_lectura.open(nombreArchivo.c_str(), ios::in);

if( archivo_lectura.is_open() ){

  string texto;
   while( !archivo_lectura.eof() ){
      getline(archivo_lectura, texto);
      cout <<"Contenido del archivo: "<<texto<<endl;
   }

}else{
  cout <<"Creando un nuevo archivo..."<<endl;
  archivo_escritura.open(nombreArchivo.c_str(), ios::out|ios::app);
  archivo_escritura<<"Hola mundo"<<endl;
}



archivo_lectura.close();
archivo_escritura.close();


  return 3;
}
