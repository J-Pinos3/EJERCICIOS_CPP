#include <iostream>
using namespace std;

const int TAMANIO = 10;
void ingresar_valores(int *arr);
void ordenar_array(int *arr);
void imprimir_array(const int *arr);

int main(int argc, char const *argv[]) {
    int arr1[TAMANIO] = {};

    ingresar_valores(arr1);
    ordenar_array(arr1);
    imprimir_array(arr1);

  return 0;
}

void ingresar_valores(int *arr){
  cout <<endl<<"INGRESE LOS VALORES DEL ARREGLO"<<endl<<endl;
    for(int i = 0; i < TAMANIO; i++){
        cout <<"arr["<<i+1<<"]: ";
        cin >> *(arr+i);
    }
}//FIN DE INGRESAR VALORES


void ordenar_array(int *arr){
  int aux;
  cout <<"\n\nOrdenando el array..."<<endl;
  for(int i = 0; i < TAMANIO; i++){
      for(int j = i +1; j < TAMANIO; j++){
          if( *(arr+i) < *(arr+j) ){

              aux = *(arr+i);
              *(arr+i) = *(arr+j);
              *(arr+j) = aux;

          }
      }
  }

}//FIN DE ORDENAR


void imprimir_array(const int *arr){
    cout <<endl<<"LOS ELEMENTOS DEL ARREGLO SON"<<endl<<endl;
    for(int i = 0; i < TAMANIO; i++){
      cout <<"["<<*(arr+i)<<"] ";
    }
  cout <<endl<<endl;
}//FIN DE IMPRIMIR
