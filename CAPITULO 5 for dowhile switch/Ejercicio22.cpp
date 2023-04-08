#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

string password;
int contador = 1;
cout <<"Ingrese la contraseña"<<endl;
cin >> password;

while( (password != "xyzyx" )and(contador <= 2) ){
  cout << "contraseña errónea - inténtelo de nuevo" <<endl;
  cin >> password;
  contador++;
}

if(contador == 3){
  cout <<"contraseña ingresada incorrectamente 3 veces "<<
  "saliendo del proograma.."<<endl;
}







    return 0;
}
