#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;
/*
(Tirar dados) Escriba un programa para simular el tiro de dos dados. Después debe calcularse la suma
de los dos valores. [Nota: cada dado puede mostrar un valor entero del 1 al 6, por lo que la suma de los valores
variará del 2 al 12, siendo 7 la suma más frecuente, mientras que 2 y 12 serán las sumas menos frecuentes]. En la
figura 7.26 se muestran las 36 posibles combinaciones de los dos dados. Su programa debe tirar los dados 36 000
veces. Utilice un arreglo unidimensional para registrar el número de veces que aparezca cada una de las posibles
sumas. Imprima los resultados en formato tabular. Determine además si los totales son razonables (es decir, hay
seis formas de tirar un 7, por lo que aproximadamente una sexta parte de los tiros deben ser 7).
*/

int main() {
/*
const int TAMANIO = 15;
int arr[TAMANIO] = {1,2,3,4,5,6};
cout <<"longitud de arr: "<<sizeof(arr)/sizeof(arr[0])<<endl;//me da 9 o 15 según el valor de TAMANIO
*/

//FORMA 1
/*
default_random_engine motor( static_cast< unsigned int >( time(0) ) );
uniform_int_distribution< unsigned int > intAleatorio( 1, 6 );

//se pone 7 para ignorar la posicion 0
int dado1[7] = {};
int dado2[7] = {};


for(int i = 0 ; i < 36000; i++){


dado1[ intAleatorio( motor ) ] = dado1[ intAleatorio( motor ) ] + 1;
dado2[ intAleatorio( motor ) ] = dado2[ intAleatorio( motor ) ] + 1;

//++dado1[ intAleatorio( motor ) ];
//++dado2[ intAleatorio( motor ) ];
}

cout <<"valor"<<"<---->"<<"frecuencia"<<endl<<endl;
for(int i = 1; i <= 6; i++){

cout <<" "<<i<<" <----> "<<dado1[i] + dado2[i]<<endl;

}

*/






//FORMA 2  no es lo que se pide
/*
srand(static_cast<unsigned int>( time(0) ) );
//se pone 7 para ignorar la posicion 0
int dado1[7] = {};
int dado2[7] = {};
for(int i = 0 ; i < 36000; i++){


++dado1[ 1 + rand() % 6 ];
++dado2[ 1 + rand() % 6 ];

}


cout <<"valor"<<"<---->"<<"frecuencia"<<endl<<endl;
for(int i = 1; i <= 6; i++){

cout <<" "<<i<<" <----> "<<dado1[i] + dado2[i]<<endl;

}

*/





//FORMA 3 //referencia a ej 6.9 de deitel

srand(static_cast<unsigned int>( time(0) ) );

int dado1;
int dado2;
int suma[11] = {};
int temporal = 0;
for(int i = 0 ; i < 36000; i++){

  dado1 =  1 + rand() % 6 ;
  dado2 =  1 + rand() % 6 ;

temporal = dado1 + dado2;
suma[temporal - 2] = suma[temporal - 2] + 1; //le resto dos a temporal para siempre obtener valores dentro del rango
//del rango de 2 - 12

}


cout <<"valor"<<" <----> "<<"frecuencia"<<endl<<endl;
for(int i = 0; i < 11; i++){

cout <<""<<i+2<<" <----> "<<suma[i]<<endl;

}







    return 0;
}
