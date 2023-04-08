#include <iostream>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
/*
(Números aleatorios) Escriba una sola instrucción
 que imprima un número al azar de cada uno de los si
 guientes conjuntos:
 a) 2, 4, 6, 8, 10.  +2
 b) 3, 5, 7, 9, 11.  +2
 c) 6, 10, 14, 18, 22.  +4
*/


int main() {
int opcion;

srand( static_cast<unsigned int>( time( 0 ) ) );

/*
cout <<"Elija el conjunto numerico"<<endl;
cout <<" 1) 2, 4, 6, 8, 10"<<endl;
cout <<" 2) 3, 5, 7, 9, 11"<<endl;
cout <<" 3) 6, 10, 14, 18, 22"<<endl;

cin >> opcion;
*/


for(int k= 1; k <= 2; k++ ){

  cout <<"Elija el conjunto numerico"<<endl;
  cout <<" 1) 2, 4, 6, 8, 10"<<endl;
  cout <<" 2) 3, 5, 7, 9, 11"<<endl;
  cout <<" 3) 6, 10, 14, 18, 22"<<endl;

  cin >> opcion;





  if(opcion == 1){

  int i = 2 + rand () % 9;
        if( (i % 2) == 0){
            cout << i<<endl;
        }


        system("pause");
        system("cls");


  }else if(opcion == 2){

  int i = 3 + rand () % 9;
        if( (i % 2) != 0){
            cout <<i<<endl;
        }


        system("pause");
        system("cls");



  }else if(opcion == 3){

  int i =  6 + rand() % 16;

        if( (i % 2) == 0){
            cout << i<<endl;
        }


        system("pause");
        system("cls");

  }







}// FIN DEL FOR















    return 0;
}
