#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;


bool esVocal(char c);

int main (){

char caracter;
cout <<"Ingrese un caracter para determinar si es una vocal"<<endl;
cin >> caracter;

cout <<esVocal(caracter)<<endl;



    return 0;
}

//*****************************

bool esVocal(char c){

  if( isalpha(c) ){
    return true;
  }else
    return false;





}//FIN FUNCIÓN esVocal
