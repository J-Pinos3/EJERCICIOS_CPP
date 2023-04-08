#include <iostream>
#include <cmath>
using namespace std;

int main(){
float exponencial = 0, factorial = 1;
int x, terminos, i = 0, j; //i = 0
cout <<"Ingrese el exponente de x: ";
cin >> x;

cout <<"Ingrese el numero de términos de la suma: ";
cin >> terminos;

while (i <= terminos){

    j = 1;
    factorial = 1;
    while(j <= i){
      factorial = factorial * j;
      j++;
    }
    exponencial = exponencial + pow(x,i)/factorial;

    i++;


}

cout <<"e^"<<x<<"\t-----> "<<exponencial<<endl;




    return 0;
}
