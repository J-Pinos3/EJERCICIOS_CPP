#include <iostream>
#include <cmath>
using namespace std;
/*

6.10. Escribir un programa que lea dos enteros positivos n y b
y mediante una funci ón CambiarBase visualice la
correspondiente representación del número n en la base b.

*/


int Pasar_Decimal(int num, int base);

int main() {

int n , b;
cout <<"INGRESA UN NUMERO"<<endl;
cin >> n;

cout <<"INGRESA LA BASE"<<endl;
cin >> b;


cout <<Pasar_Decimal(n,b);


    return 0;
}

//******************************

int Pasar_Decimal(int num, int base){

int numero = num; // una variable de respaldo del numero ingresado num

int invertido = 0;
  while(num != 0){

    invertido = invertido*10 + num % base;
    num = num / base;

  }

//ahora a invertido lo debo invertir para finalmente tener el # en la base deseada

int contador = 0;
while(invertido != 0){

  contador = contador*10 + invertido % 10;
  invertido = invertido / 10;

}




  return contador;

} // FIN FUNCIÓN A Pasar_Decimal
