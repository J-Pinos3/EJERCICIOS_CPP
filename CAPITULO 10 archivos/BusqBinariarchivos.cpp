//PARA EL ALGORITMO DE BÚSQUEDA Lineal
//EL ARREGLO DEBE ESTAR  ORDENADO Y SIN ELEMENTOS REPETIDOS
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void Ordenamiento_Bubble(int array[]);

int main() {

  ofstream archivo_esc;
  ifstream archivo_lec;
  string texto;
  int dato;
  bool confirma = false;
  int arr[5] = {};

  archivo_esc.open("BusqBinaria.txt",ios::out); //********


cout <<"Ingresa los elementos del array"<<endl;
for(int i = 0; i < 5; i++){
  cout <<"["<<i<<"] : ";
  cin >> arr[i];


}



  cout <<endl<<endl;
  Ordenamiento_Bubble(arr);

  for(int i = 0; i < 5 ; i++){
      archivo_esc << "{"<<arr[i]<<"} ";// me imprime en el archivo los elementos del array ya ordenados
  }
  archivo_esc <<endl<<endl;

  cout <<"Ingrese el elemento a buscar: ";
  cin >> dato;


  cout <<"Buscando el elemento en el array con Busqueda Binaria... "<<endl<<endl;
int i_I = 0; //POSICION (indice) INICIAL DEL ARRAY
int j = 4; // n-1 donde n es el numero de elementos POSICION (indice) FINAL DEL ARRAY
int k; //es el punto medio del array

    do{

      k = (i_I+j)/2;

      if(arr[k] <= dato){
          i_I = k+1;
      }

      if(arr[k] >= dato){
          j = k-1;
      }

    }while( i_I <= j);

    if(arr[k] == dato){
      archivo_esc<<"Elemento :"<<dato<<" encontrado en la posicion: "<<k+1<<endl;
    }else{
      archivo_esc<<"Elemento :"<<dato<<" NO encontrado"<<endl;
    }





  archivo_esc.close();//********




    //LECTURA DEL ARCHIVO

    archivo_lec.open("BusqBinaria.txt", ios::in);
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


void Ordenamiento_Bubble(int array[]){
int aux;
  for(int i = 0; i < 5; i++){
      for(int j = i+1; j < 5; j++){
          if(array[j] < array[i]){
              aux = array[i];
              array[i] = array[j];
              array[j] = aux;
          }
      }
  }



}//FIN DE LA FUNCION Ordenamiento_Bubble
