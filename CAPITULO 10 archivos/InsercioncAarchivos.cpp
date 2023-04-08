#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {

  ofstream archivo_esc;
  ifstream archivo_lec;
  string texto;
  int arr[5] = {};

  archivo_esc.open("Insercion.txt",ios::out); //********


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


  cout <<"Ordenando arreglo con el algoritmo de Insercion... "<<endl<<endl;

  int aux, p;

  for(int i = 0; i < 5; i++){
      aux = arr[i];
      p = i;

      while(p > 0){
          if(arr[p-1] > aux){
              arr[p] = arr[p-1];
              arr[p-1] = aux;
          }

        p--;
      }


  }






  cout <<"Los elementos ordenados del array son: "<<endl;
  for(int i = 0; i < 5; i++){
    archivo_esc << "{"<<arr[i]<<"} ";
  }


  archivo_esc.close();//********




    //LECTURA DEL ARCHIVO

    archivo_lec.open("Insercion.txt", ios::in);
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
