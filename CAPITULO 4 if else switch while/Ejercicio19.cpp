#include <iostream>
#include <cstdlib>
using namespace std;


int main (){
//PITE DE TEORÍA
/*
  bool confirmaPE = true; // = 0

  if(confirmaPE ){
    cout <<"El valor de confirma es 0 ";
    cout <<"No!, es uno";
  }
// porque no entró al if?

Para el compilador una expresión es verdadera(true)
si da como resultado un numero distinto de zero o si se evalúa en un numero != 0
Y es falso si la expresión devuelve un cero o si se evalua en un numero  = 0
confirmaPE = false = 0

if(1) if(3) if(-1) if(.1) -->Hará que siempre se ejecute lo que está en el cuerpo del if

if(0) -->Hará que lo que esté en el cuerpo del if nunca se ejecute
*/

string user1, user2;
int clave1, clave2;
short int contador = 0;


cout <<"INICIAR SESIÓN"<<endl;
cout<<"Ingrese su nombre de usuario"<<endl;
getline(cin,user1);
cout <<"Ingrese su contraseña"<<endl;
cin >> clave1;
while( clave1 != 1234 ){
cout <<"error inténtelo de nuevo"<<endl;
cout <<"clave: ";
cin >> clave1;
}

system("pause");
system("cls");
cin.sync();
cout <<"INICIAR SESIÓN"<<endl;
cout<<"Ingrese su nombre de usuario"<<endl;
getline(cin,user2);
cout <<"Ingrese su contraseña"<<endl;
cin >> clave2;
while( clave2 != 5678 ){
cout <<"error inténtelo de nuevo"<<endl;
cout <<"clave: ";
cin >> clave2;
}



if ( (user1 == "josePinos")and(clave1 == 1234) ){
  cout <<"| BIENVENIDO | "<<user1<<endl;
}
system("pause");
system("cls");

if ( (user2 == "jeremytoSosa")and(clave2 == 5678) ){
  cout <<"| BIENVENIDO | "<<uppercase<<user2<<endl;
}


    return 0;
}
