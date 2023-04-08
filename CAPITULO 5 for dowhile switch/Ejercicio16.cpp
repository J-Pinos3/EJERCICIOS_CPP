#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main (){

int digito1, digito2, digito3;
int cociente;

for(int i = 100, num = 100; i <= 999; i++){
  digito1 = num % 10;
  digito2 = (num % 100)/10;
  digito3 = (num % 1000)/100;

  cociente = ( num-(num % 3) )/3;  // D = d*c + r despejando c y como todo es con enteros la division es entera

  int total = pow(digito1,2) + pow(digito2,2) + pow(digito3,2);

    if( total == cociente ){
      cout <<"numero ----> "<<i<<endl;
    }



  num++;
}














    return 0;
}
