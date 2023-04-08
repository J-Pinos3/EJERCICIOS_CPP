#include <iostream>
#include <ctype.h> // SUS FUNCIONES DEVUELVEN UN VALOR DE TIPO BOOL SIRVE PARA TRABAJAR CON CARACTERES
#include <cstdlib>
#include <string>
using namespace std;

int main (){
string line(50,'_');
char resp;

do{
  cout <<"Ingrese S = si, N = no"<<endl;
  cin >> resp;
  resp = toupper(resp); //PASA TODO A MAYÚSCULAS

}while( (resp != 'S')and(resp != 'N') );

cout <<"respuesta: "<<resp<<endl;

cout << line <<endl;

system("pause");
system("cls");

int c = 3;
char k = 'o';
cout <<"int isalpha (int c) ---> true si la letra es mayuscula o minuscula"<<endl;
cout <<"respuesta: "<<isalpha (k)<<" ---> "<<k<<endl;

cout << line <<endl;

int l = 58;// el 9 en codigo ascii es el 57
char d = '1';       //char de 1-9 o int l = 58(pero con codigo ascii)
cout <<"int isdigit (int d) ---> true si es digito"<<endl;
int respuesta = isdigit(d);
cout <<"respuesta: "<<isdigit (d)<<" ---> "<<d<<endl;

cout << line <<endl;

char letra1 = 'A';
cout <<"int islower(c) ---> true si la letra es minuscula"<<endl;
cout <<"respuesta: "<<islower(letra1)<<endl;






    return 0;
}
