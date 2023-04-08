#include <iostream>
using namespace std;


int main() {

/*
  char caracter;
  char *ptr_carac = nullptr;
  ptr_carac = &caracter;

cout <<"CARACTERES ASCII"<<endl<<endl;
for(caracter = 'A'; caracter <= 'F'; caracter++){
  cout <<(int)caracter<<"   ->    "<<*ptr_carac<<endl;
}
*/


char *puntero;
char Cadena[81];
cout << "Introduzca cadena a convertir:\n\n";
cin.getline(Cadena, 80);
puntero = Cadena; // puntero apunta al primer carácter de la cadena

while (*puntero){ // mientras puntero no apunte a \0

  if ((*puntero >= 'A') && (*puntero <= 'Z')){
      *puntero++ = *puntero+32; // sumar 32, para convertir en minúscula
  }
  else if ((*puntero >= 'a') && (*puntero <= 'z')){
      *puntero++ = *puntero-32; // restar 32, para convertir en mayúscula
  }
  else{
        puntero++;
  }

}

cout << "La cadena convertida es:\n" << endl;
cout << Cadena << endl;











  return 0;
}
