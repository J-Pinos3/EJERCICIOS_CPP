#include <iostream>
using namespace std;

int main() {

//cout <<"Un apuntador/puntero contiene la dirección de memoria de una variable,"<<"la cual a su vez contiene un valor/dato específico"<<endl;
//cout <<"El nombre de una variable hace referencia directa a un valor y un puntero hacer referencia indirecta a un valor"<<endl;

  int num = 13;
  int num1 = 15;
  float nume = 3.0;

  /*
  cout <<"Num: "<<num<<endl;
  cout <<"Direcci"<<char(162)<<"n: "<<&num<<endl;
  */

  int *direc = nullptr;
  direc = &num;//SE OBTIENE LA DIRECCIÓN DE MEMORIA 
  cout <<"Num: "<<*direc<<endl;
  cout <<"Direcci"<<char(162)<<"n: "<<direc<<endl;

  direc = &num1;
  cout <<"Num1: "<<*direc<<endl;
  cout <<"Direcci"<<char(162)<<"n: "<<direc<<endl;

  float *direcc = nullptr;
  direcc = &nume;
  cout <<"Nume: "<<*direcc<<endl;
  cout <<"Direcci"<<char(162)<<"n: "<<direcc<<endl<<endl<<endl<<endl;


//*****************************************

//DETERMINAR SI UN NUMERO ES PAR O IMPAR CON PUNTEROS

  int numero, *direc_numero = nullptr;

cout <<"Ingrese un numero par"<<endl;
cin >> numero;
direc_numero = &numero;

  cout <<"\nLa direcci"<<char(162)<<"n de memoria del numero ingresado es: "<<direc_numero<<endl;
  if( (*direc_numero % 2) == 0 ){
    cout <<"El numero es par"<<endl;
  }else{
    cout <<"El numero es impar"<<endl;
  }


  return 0;
}
