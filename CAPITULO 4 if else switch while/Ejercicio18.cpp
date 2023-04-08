#include <iostream>
using namespace std;


int main (){

//PRODUCTO DE DOS NÚMEROS
/*
int m,n;
int total = 0;
cout <<"Introduzca dos números"<<endl;
cin >> m >> n;

for(int i = 0; i < n; i++){
  // proceso iterativo se acumula "m" al total
  total = total + m;
}

cout << "Producto "<<total<<endl;
*/





//FACTORIAL
/*
int num;
int factorial = 1;
cout <<"INGRESE EL NÚMERO PARA CALCULAR EL FACTORIAL"<<endl;
cin >> num;

for (int i = 1; i <= num; i++){
  factorial = factorial * i;
  cout <<"i.."<<i<<endl;

}
cout <<num<<"! = "<<factorial<<endl;
*/






//DIVISIÓN ENTERA
int dividendo, divisor;
cout <<"Introduzca dividendo y divisor"<<endl;
cin >> dividendo >> divisor;
if(divisor == 0){
  cout <<"El divisor debe ser distinto de cero "<<endl;

  /*
  while (divisor == 0) {
    cout <<"Ingrese el divisor: ";
    cin >> divisor;
  }
  */

}else{
        int resto = dividendo;
        int cociente = 0;
        while (resto >= divisor){
          resto = resto - divisor;
          cociente ++;

        }

        cout << cociente <<" "<<resto <<endl;

    } // fin del else principal






    return 0;
}
