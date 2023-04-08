#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main (){
double kilometros = 0,km = 0, litros = 0, lt = 0;
double kpl;
double total = 0;

cout <<"Ingrese los kilómetros recorridos (-1 para terminar):";
cin >> kilometros;

cout <<endl;
cin.get();
//cin.ignore();

cout <<"Ingrese los litros:";
cin >> litros;


while (kilometros != -1){
  cout <<endl;
  km = km + kilometros;
  lt = lt + litros;
  kpl = kilometros/litros; // kilometros y litros son los datos ingresador x el usuario
  cout <<"KPL en este reabastecimiento"<<setw(11)<< kpl<<endl;
  total = km/lt;
  cout <<"total KPL"<<setw(11)<<total<<endl;
  cout<<endl;
  cout <<"Ingrese los kilómetros recorridos (-1 para terminar):";
  cin >> kilometros;

  cout <<endl;
  //cin.get();
  //cin.ignore();

    if(kilometros == -1){
      cout <<"Salida"<<endl;
      exit(1);
    }


  cout <<"Ingrese los litros:";
  cin >> litros;

  cout <<endl;
  cin.get();
  //cin.ignore();

}



  return 0;
}
