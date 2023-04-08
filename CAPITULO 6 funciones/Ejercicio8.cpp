#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
(Números aleatorios) Escriba instrucciones que
asignen enteros aleatorios a la variable n en los siguientes
rangos:

*/

int main(){
  int n;

srand( static_cast<unsigned int>( time( 0 ) ) );

cout <<"a) 1 <= n <= 2 "<<endl;

for(int i = 1; i <= 2; i++){
  cout << 1 + rand() % 2<<endl;
}


system("pause");
system("cls");

cout <<"b) 1 <= n <= 100 "<<endl;

for(int i = 1; i <= 100; i++){
  cout << 1 + rand() % 100<<endl;
}



system("pause");
system("cls");

cout <<"c) 0 <= n <= 9 "<<endl;

for(int i = 1; i <= 10; i++){
  cout << 0 + rand() % 9<<endl;
}



system("pause");
system("cls");

cout <<"d) 1000 <= n <= 1112 "<<endl;

for(int i = 1; i <= 112; i++){
  cout << 1000 + rand() % 1112<<endl;
}



system("pause");
system("cls");

cout <<"e) -1 <= n <= 1 "<<endl;

for(int i = 1; i <= 3; i++){
  cout << -1 + rand() % 4<<endl;
}



system("pause");
system("cls");

cout <<"f) -3 <= n <= 11 "<<endl;

for(int i = 1; i <= 15; i++){
  cout << -3 + rand() % 15<<endl;
}


/*



numero = valorDesplazamiento + rand() % factorEscala;
en donde valorDesplazamiento es igual al primer número en el rango deseado de enteros consecutivos
y factorEscala es igual a la amplitud del rango deseado de enteros consecutivos.








*/









    return 0;
}
