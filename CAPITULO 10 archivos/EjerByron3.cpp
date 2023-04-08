#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void escribirArchivo();
void leerArchivo();
void leerArchivoF2();

int main() {

escribirArchivo();

system("pause");
system("cls");
system("color 1F");

leerArchivo();
cout <<endl<<endl<<endl;
//leerArchivoF2();

  return 0;
}


void escribirArchivo(){
string nombre;
int edad;
char opcion = 's';
ofstream archivo_escritura;
                                        //out
  archivo_escritura.open("Age1.txt", ios::app);

  while(opcion == 's' || opcion == 'S'){
    cout <<"Ingrese el nombre: ";
    getline(cin, nombre);

    cout <<"Ingrese la edad:";
    cin >> edad;

    archivo_escritura <<nombre<<" "<<edad<<endl;//en el archivo se vería José Pinos 20
    //cin.sync();

    cout <<"Desea Agregar otro usuario?"<<endl;
    cout <<"s --> SI\nn --> NO"<<endl;
    cin >> opcion;
    cout <<endl;
    cin.sync();
  }

  archivo_escritura.close();

}//fin de la función escribir archivo


void leerArchivo(){
//FORMA 1 DE LEER LOS DATOS
string nombre, apellido;
int edad;
ifstream archivo_lectura;
  //LEER DE OTRA MANERA Y CON OTRO ARCHIVO
  archivo_lectura.open("Age1.txt", ios::in);

  if( archivo_lectura.fail() ){
      cout <<"El archivo no se pudo leer, o este no existe"<<endl;
  }else{

      while( !archivo_lectura.eof() ){
            archivo_lectura >> nombre;
            archivo_lectura >> apellido;
            archivo_lectura >> edad;

            if( !archivo_lectura.eof() ){
              cout <<"<----------------------------->"<<endl;
              cout <<"Nombre: "<<nombre<<" "<<apellido<<endl;
              cout <<"Edad: "<<edad<<endl;
              cout <<"<----------------------------->"<<endl;
            }

      }


  }

  archivo_lectura.close();

}//fin de la función leerArchivo




void leerArchivoF2(){
  //FORMA 2 DE LEER LOS DATOS
  string texto;
  ifstream archivo_lectura;

  archivo_lectura.open("Age1.txt", ios::in);

  if( archivo_lectura.fail() ){
      cout <<"El archivo no se pudo leer, o este no existe"<<endl;
  }else{

      while( !archivo_lectura.eof() ){

        getline(archivo_lectura, texto);
        cout <<texto<<endl;
      }


  }

  archivo_lectura.close();
}
