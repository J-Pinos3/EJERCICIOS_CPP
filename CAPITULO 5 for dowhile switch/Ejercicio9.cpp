#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

int main() {



bool a = (5 < 1);

if(5){
  cout <<"Dentro del primer if"<<endl;
}


if(-1){
  cout <<"Dentro del segundo if"<<endl;
}


if(0){
  cout <<"Dentro del tercer if"<<endl;
}


if(0.7){
  cout <<"Dentro del cuarto if"<<endl;
}


if(a){
  // si a es false o 0 entonces no entra al if
  cout <<"Dentro del quinto if"<<endl;
}


int num; // si a es false ya no entra al while
while(a){
  cout <<"Ingrese un numero (-1 para salir)"<<endl;
  cin >> num;
  if(num == -1){
    a = false;
  }

}



/*
char car = ' ';
bool digito_leido = false;
//bool digito_leido = true; no entra al bucle xq al negarlo me da false

  //(negacion de false es true por tanto entra al while)
    while(!digito_leido){
      cout <<"Ingrese un caracter dígito para salir del bucle"<<endl;
      cin >> car;
      digito_leido = isdigit(car);
  // si ingreso un numero  digito_leido se vuelve true,
  //por tanto su negacion es false y se sale del bucle

    }

    cout <<"EL CARACTER FUE ---> "<< car<<endl;
*/
    return 0;
}
