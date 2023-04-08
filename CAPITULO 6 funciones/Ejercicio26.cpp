#include <iostream>
#include <cstdlib>

using namespace std;
/*
ir una función que tenga como parámetr o dos números enteros positivos num1 y num2, y
calcule el resto de la división entera del mayor de ellos entre el menor mediante suma y restas.




*/
void restoDIV (int a, int b);

int main (){

int dividendo, divisor;

cout <<"Ingrese el dividendo"<<endl;
cin >> dividendo;

cout <<"Ingrese el divisor"<<endl;
cin >> divisor;

cout <<"el programa ubicará al numero mas grande como el dividendo "<<endl<<endl;

restoDIV(dividendo,divisor);


    return 0;
}

//**************************

void restoDIV (int a, int b){

int mayor = a;
if(b > mayor){
  mayor = b;
}



if(mayor == b){
// cociente = b/a;

int resto = b;
int cociente = 0;
while(resto >= a){
  resto = resto -a;
  cociente ++;
}

cout <<"resto de :"<<b<<"/"<<a<<" ---> "<<resto;


}else if (mayor == a){
//  cociente = a/b;

int resto = a;
int cociente = 0;
while(resto >= b){
  resto = resto -b;
  cociente ++;
}


cout <<"resto de :"<<a<<"/"<<b<<" ---> "<<resto;
}



} // FIN DE LA FUNCIÓN
