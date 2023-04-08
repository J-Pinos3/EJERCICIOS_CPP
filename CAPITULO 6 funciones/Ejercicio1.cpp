#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

unsigned int GirarDados();



int main() {

// ENUMARACIÓN CON CONSTANTES QUE REPRESENTAN EL ESTADO DEL JUEGO
            // 0         1      2 los valores de estas constantes empiezan en 0 a menos que se indique lo contrario
enum Estado {CONTINUAR, GANO, PERDIO }; //variable de tipo enum (enumeración)
// las mayusculas son CONSTANTES

//generador de semillas con la hora actual
srand( static_cast<unsigned int>( time( 0 ) ) );


unsigned int misPuntos = 0;
//estadoJuego es una variable de tipo Estado
Estado estadoJuego = CONTINUAR; // puede CONTINUAR, GANO O PERDIO
unsigned int Suma_Dados = GirarDados(); // PRIMER TIRO DEL DADO


  switch (Suma_Dados) {
    case 7: // con 7 y 11 gana en el primer tiro
    case 11:
        estadoJuego = GANO;
    break;


    case 2: // PIERDE EN EL PRIMER TIRO
    case 3: // PIERDE EN EL PRIMER TIRO
    case 12: // PIERDE EN EL PRIMER TIRO
        estadoJuego = PERDIO;
    break;


    default: // no ganó ni perdió ES PUNTO AL JUGADOR
        estadoJuego = CONTINUAR;
        misPuntos = Suma_Dados; // almacena el punto XQ NO GANÓ NI PERDIÓ
        cout <<"El punto es: "<<misPuntos<<endl;
    break;

  }// FIN SWITCH
system("pause");
system("cls");


while(estadoJuego == CONTINUAR){ // NO GANÓ NI PERDIÓ
    Suma_Dados = GirarDados(); // girar los dados de nuez

      if (Suma_Dados == misPuntos){
            estadoJuego = GANO;

      }else if(Suma_Dados == 7){
            estadoJuego = PERDIO;
      }

} //FIN DEL WHILE


if(estadoJuego == GANO){
  cout <<"|"<<setw(25)<<"El jugador gana"<<setw(10)<<"|"<<endl;
}else{
  cout <<"|"<<setw(25)<<"El jugador pierde"<<setw(10)<<"|"<<endl;
}





    return 0;
}



unsigned int GirarDados(){
  unsigned int dado1 = 1 + rand()%6;
  unsigned int dado2 = 1 + rand()%6;

  unsigned int suma = dado1 + dado2;
  cout <<"Los dados fueron: "<<dado1<<" y "<<dado2;
  cout <<" la suma fué: "<< suma<<endl;

  return suma;
} // FIN FUNCIÓN DE GIRAR LOS DADOS
