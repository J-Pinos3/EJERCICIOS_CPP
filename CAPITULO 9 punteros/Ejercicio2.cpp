#include <iostream>
using namespace std;


int main() {

  //al pasar un arreglo integrado(clásico a una función),
  //el nombre del arreglo se convierte en una dirección al primer elemento del arreglo
  //nombreArray = &nombreArray[0], por eso cuando lo paso a una función
  //ya no uso &



  int arr[] = {1,2,3,4,5}, *direc_arr = nullptr;
  direc_arr = arr;

  for(int i = 0; i < 5; i++){

      cout <<"Numero del array: "<<i<<endl;
      cout <<"Valor: "<<arr[i]<<endl;
      cout <<"Direccion: "<<direc_arr++<<endl;
      if(i != 4){
        cout <<"\n<--------------->"<<endl<<endl;
      }
  }


  return 0;
}
