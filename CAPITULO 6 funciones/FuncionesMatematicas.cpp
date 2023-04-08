#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

// 15 12 2021 jefecito

int main(){


cout <<"Raíces cuadradas"<<endl;

double num = 1;
int contador = 0;
while(contador < 2){
cout <<"Ingrese un número"<<endl;
cin >> num;

cout <<"raiz de "<<num<<": "<<sqrt(num)<<endl;
contador++;
} // si el num es negativo el resultado es nan



system("pause");
system("cls");


for(int i = 1; i <= 20; i++){
    cout << setw(10)<<( 1 + rand() % 6 );

      if( (i % 5) == 0 ){
        cout <<endl;
      }


}


system("pause");
system("cls");



/*
El programa tira dados 6 000 000 veces
Y muestra la probabilidada de que salga un numero
*/

unsigned int frecuencia1 = 0, frecuencia2 = 0;
unsigned int frecuencia3 = 0, frecuencia4 = 0;
unsigned int frecuencia5 = 0, frecuencia6 = 0;


for(unsigned int tiro = 1; tiro <= 6000000; tiro++){

    int cara = 1 + rand()%6;

    switch (cara) {
        case 1:{
          ++frecuencia1;
        }
        break;


        case 2:{
          ++frecuencia2;
        }
        break;


        case 3:{
          ++frecuencia3;
        }
        break;


        case 4:{
          ++frecuencia4;
        }
        break;


        case 5:{
          ++frecuencia5;
        }
        break;


        case 6:{
          ++frecuencia6;
        }
        break;


        default:{
          cout <<"Valor inválido \n (Eso no debió haber pasado)"<<endl;
        }
        break;




    }// FIN SWITCH



} //FIN FOR PRINCIPAL CUENTA LOS TIROS


//Forma 1
//int caracter1 = 218; //┌
//char car_1 = caracter1;
//Forma 2
char letra1 = 218; //┌
char letra2 = 196; //─      //REFERENCIA A EJERCICIO 8 CAP 5
char letra3 = 191; //┐
char letra4 = 192; //└
char letra5 = 217; //┘

cout <<letra1<<letra2<<letra2<<letra2<<letra2<<letra3<<setw(10)<<letra1<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra3<<endl;
cout <<" cara "<<setw(21)<<" frecuencia "<<endl;
cout <<letra4<<letra2<<letra2<<letra2<<letra2<<letra5<<setw(10)<<letra4<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra2<<letra5<<endl;

cout <<"| 1"<<setw(22)<<frecuencia1<<" |"<<endl;
cout <<"| 2"<<setw(22)<<frecuencia2<<" |"<<endl;
cout <<"| 3"<<setw(22)<<frecuencia3<<" |"<<endl;
cout <<"| 4"<<setw(22)<<frecuencia4<<" |"<<endl;
cout <<"| 5"<<setw(22)<<frecuencia5<<" |"<<endl;
cout <<"| 6"<<setw(22)<<frecuencia6<<" |"<<endl;




// semilla = 5;
// srand (semilla) almacena la semilla introducida
// y se genera una secuencia distinta de numeros aleatorios
// si la semilla es la misma la secuencia de numeros también será la misma



//Semilla de números aleatorios con la hora actual
//srand( static_cast<unsigned int>( time( 0 ) ) );















  return 0;
}
