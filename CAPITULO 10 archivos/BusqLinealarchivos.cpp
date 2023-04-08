#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {

  ofstream archivo_esc;
  ifstream archivo_lec;
  string texto;
  int dato, index_i = 0;
  bool confirma = false;
  int arr[5] = {};

  archivo_esc.open("BusqLineal.txt",ios::out); //********


cout <<"Ingresa los elementos del array"<<endl;
for(int i = 0; i < 5; i++){
  cout <<"["<<i<<"] : ";
  cin >> arr[i];


}

  for(int i = 0; i < 5 ; i++){
      archivo_esc << "{"<<arr[i]<<"} ";
  }


  cout <<endl<<endl;
  archivo_esc <<endl<<endl;


  cout <<"Ingrese el elemento a buscar: ";
  cin >> dato;

  cout <<"Buscando el elemento en el array con Busqueda Lineal... "<<endl<<endl;
  for(int i = 0; i < 5; i++){
      if(arr[i] == dato){
        confirma = true;
        index_i = i;
      }
  }


  if(confirma == true){
    archivo_esc << "Elemento: "<<dato<<" encontrado en la posicion "<<index_i+1<<endl;
  }else{
    archivo_esc << "Elemento: "<<dato<<"NO encontrado :("<<endl;
  }



  archivo_esc.close();//********




    //LECTURA DEL ARCHIVO

    archivo_lec.open("BusqLineal.txt", ios::in);
    if( archivo_lec.fail() ){
        cout <<"El archivo no se pudo leer, o este no existe"<<endl;
    }else{

      while( !archivo_lec.eof()){

        getline(archivo_lec, texto);
        cout <<texto<<endl;
      }



    }

    archivo_lec.close();



  return 0;
}
