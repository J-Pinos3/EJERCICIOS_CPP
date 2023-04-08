#include <iostream>
#include <array>
#include <cstdlib>
#include <iomanip>
using namespace std;

void muestra_Nombre(array<string, 5> arr);

int main() {

array<string,5> arr_nombres = {};

for(int i = 0; i < arr_nombres.size(); i++){
  cout <<"nombre ["<<i<<"]: ";
  cin >> arr_nombres[i];
}

//cout <<"Los nombres ingresados fueron"<<endl<<endl;
/*  cout << "\n\nNOMBRE"<<"\tID"<<endl<<endl;
  for(int i = 0; i < arr_nombres.size(); i++){
      cout <<arr_nombres.at(i)<<"\t"<<i+1<<endl;
  }
  */

muestra_Nombre(arr_nombres);

  return 0;
}

void muestra_Nombre(array<string, 5> arr){

  cout << "\n\nNOMBRE"<<"\tID"<<endl<<endl;
  for(int i = 0; i < arr.size(); i++){
      cout <<arr.at(i)<<"\t"<<i+1<<endl;
  }


}//fin de la funcion muestra_Nombre
