//ref a ejercicio 43 captiulo 6
#include <iostream>
#include <cstdlib>
using namespace std;
/*
7.13. Escribir un programa que lea un te xto de la entr ada y cuente:
 el número de palabras leídas; número de líneas y vocales
(letras a; letras e; letras i; letras o; letras u).
 El final de la entrada de datos viene dado por control + Z.



*/

int main() {
int npalabras = 0, nlineas = 0;
int contador[5] = {};
char letra = ' ';

cout <<"Ingrese un texto"<<endl;
cin.ignore();

// MI VERSIÓN
while( (letra=cin.get() ) != EOF ){


      if( (letra == 'a')or(letra == 'A') ){
        contador[0]=contador[0]+1;

      }else if( (letra == 'e')or(letra == 'E') ){
        contador[1]=contador[1]+1;

      }else if( (letra == 'i')or(letra == 'I') ){
        contador[2]=contador[2]+1;

      }else if( (letra == 'o')or(letra == 'O') ){
        contador[3]=contador[3]+1;

      }else if( (letra == 'u')or(letra == 'U') ){
        contador[4]=contador[4]+1;
      }
      if( (letra == '\t')or(letra = ' ') ){
        npalabras++;
      }else if(letra == '\n'){
        nlineas++;
      }


}//fin del while que lee cada letra del texto





cout <<"Palabras: "<<npalabras<<endl;
cout <<"Lineas: "<<nlineas<<endl;
cout <<"Letras a: "<<contador[0]<<endl;
cout <<"Letras e: "<<contador[1]<<endl;
cout <<"Letras i: "<<contador[2]<<endl;
cout <<"Letras o: "<<contador[3]<<endl;
cout <<"Letras u: "<<contador[4]<<endl;

    return 0;
}
