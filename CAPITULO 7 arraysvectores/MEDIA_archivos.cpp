#include <iostream>
#include <cstdlib>
#include <fstream>
#include <array>
using namespace std;
const int MAX = 100;

double media(const array<double, MAX>& arr, int contador);

double media_arrCLASIC(const double arr[], int contador);


int main() {
  array <double, MAX> arr = {};
  double arr_clasic[MAX] = {};

  int contador = 0;
  double  valor, med, med_clasic;
  ifstream archivo_lec;
  archivo_lec.open("LISTA.txt",ios::in);

  if( archivo_lec.is_open() ){

    archivo_lec >> valor;
    while( (valor!=-1)&&(contador < MAX) ){

        arr_clasic[contador] = valor;
        arr.at(contador) = valor;
        contador++;

        archivo_lec >> valor;
    }
    archivo_lec.close();

    med = media(arr, contador);
    med_clasic = media_arrCLASIC(arr_clasic, contador);

    cout <<"La media de los elementos del array <moderno>: "<<med<<endl<<endl;
    cout <<"La media de los elementos del array <clasico>: "<<med_clasic<<endl<<endl;

  }else{
    cout <<"NO SE PUDO ABRIR EL ARCHIVO"<<endl<<endl;
  }


  return 0;
}

double media(const array<double, MAX>& arr, int contador){
  double total = 0;
  for(int i = 0; i < contador; i++){
    total += arr.at(i);
  }
  return total/contador;
}//fin de la funcion media


double media_arrCLASIC(const double arr[], int contador){
  double total = 0;
  for(int i = 0; i < contador; i++){
    total += arr[i];
  }
  return total/contador;

}//fin de la funcion media_arrCLASIC
