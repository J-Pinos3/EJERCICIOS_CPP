#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {

srand(static_cast<unsigned int>( time(0) ) );

const int TAMANIO = 7;
int frecuencia[TAMANIO] = {};

for(int tiro = 1; tiro <= 6000000; tiro++){
  frecuencia[1 + rand() % 6]  = frecuencia[1 + rand() % 6]  + 1;
}

cout <<"Cara"<<setw(13)<<"Frecuencia"<<endl;

for(int cara = 1; cara < TAMANIO; cara++){
  cout << setw(4)<< cara <<setw(13)<<frecuencia[cara]<<endl;

}



system("pause");
system("cls");


default_random_engine motor(static_cast<unsigned int> ( time(0) ) );
uniform_int_distribution<unsigned int> intAleatorio(1,6);

const size_t tamanioArreglo = 7;
array<unsigned int, tamanioArreglo> frecuenciaA = {};

for(unsigned int tiro1 = 1; tiro1 <= 6000000; tiro1++){
  ++frecuenciaA[intAleatorio(motor)];
}

cout <<"Cara"<<setw(13)<<"Frecuencia"<<endl;
for(size_t cara1 = 1; cara1 < frecuenciaA.size(); cara1++ ){
  cout << setw(4)<< cara1 <<setw(13)<<frecuenciaA[cara1]<<endl;
}



    return 0;
}
