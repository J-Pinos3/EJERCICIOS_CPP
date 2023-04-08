#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
//  ifstream lectura
//  ofstream escritura
//  fstream leer y escribir al mismo tiempo
//BIBLIOGRAFÍA 1    ->  https://www2.eii.uva.es/fund_inf/cpp/temas/10_ficheros/ficheros_cpp.html
//REFERENCIA A      ALGORITMOS Y ESTRUCTURAS DE DATOS DESDE LA CLASE 20

int main() {
  ofstream archivoprueba;
  int edad;

    //MODOS DE APERTURA
    //ios::binary ARCHIVO BINARIO
    //ios::in ARCHIVO MODO LECTURA  parecido a cin  obtengo info del archivo
    //ios::out ARCHIVO MODO ESCRITURA  parecido a cout  escrivo info en el archivo
    //ios::app ARCHIVO MODO APPEND --> PERMITE AÑADIR DATOS AL FINAL DE UN ARCHIVO EXISTENTE, Y NO PERDER LA INFO ANTERIOR
    //ios::ate Archivo modo escritura y se desplaza al final del archivo, los datos se pueden escribir en cualquier parte del archivo

    //se crea un nuevo archivo
    //se ingresa donde yo como se llamará el archivo, y el tipo de apertura
    //si solo ingreso el nombre, el archivo se almacenará en el directorio actual

        // ESCRITURA DE ARCHIVOS

  archivoprueba.open("demo1.txt", ios::out);//    ORIGINAL
  //archivoprueba.open("demo1.txt", ios::app);//    PERMITE AÑADIR DATOS AL FINAL DE UN ARCHIVO EXISTENTE, Y NO PERDER LA INFO ANTERIOR
  //archivoprueba.open("C:/Users/Usuario/Desktop/27marzo/demo1.txt", ios::out);//   ALMACENA INFO EN UN ARCHIVO DE UN DIRECTORIO ESPECÍFICO --- el directorio debe existir

  //cout <<"Diego Andrés "; ESTE COUT IMPRIME DIEGO ANDRÉS EN LA TERMINAL el otro lo imprime en el archivo
  archivoprueba << "José ";
  archivoprueba << "Pinos ";
  //archivoprueba << 20<<endl;//  ORIGINAL
  cout <<"Ingrese su edad: ";
  cin >>edad;
  archivoprueba << edad;

  archivoprueba.close();








        // LECTURA DE ARCHIVOS
 ifstream archivolectura;
 string texto;


 archivolectura.open("demo1.txt", ios::in);//TAMBIÉN PUEDO COPIAR LA RUTA COMPLETA DEL ARCHIVO

    if( archivolectura.fail() ){
        cout <<"El archivo no se pudo leer, o este no existe"<<endl;
    }else{
        cout <<"la información del archivo demo1.txt"<<
        "con ruta: C:/Users/Usuario/Desktop/Programacion C++/CAPITULO 10 archivos es:"<<endl<<endl<<endl;


        //sentencia para leer cada caracter del archivo
        while( !archivolectura.eof() ){
            getline(archivolectura, texto);
            cout <<texto<<endl;
        }

    }//fin del else

 archivolectura.close();













    return 0;
}
