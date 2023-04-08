#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
/*
UNa persona invierte $1000.00 en una cuenta de ahorro que produce el 5%
de interés suponiendo que todo el interés se deposita en la cuenta
calcule e imprima el monto de dinero en la cuenta al final de cada
a{o durante  10 años
modificar la tasa con un bucle for de 5,6,7,8,9 y 10 %

*/

int main (){
//calculo de interés compuesto
double monto; //monto a depositar al final de cada año
double principal = 1000.0; // monto inicial antes del interes
double tasa = 0.0; // tasa de interés anual
short contador = 1;
cout <<"Año"<<setw(25)<<"Monto de depósito"<<endl;
cout << fixed << setprecision(2); // para  n de decimales

for (contador = 1; contador <= 6; contador++){

      if(contador == 1){
        tasa = 0.05;
      }else if(contador == 2){
        tasa = 0.06;
      }else if(contador == 3){
        tasa = 0.07;
      }else if(contador == 4){
        tasa = 0.08;
      }else if(contador == 5){
        tasa = 0.09;
      }else if(contador == 6){
        tasa = 0.1;
      }


      //for(short int year = 0; year < 10; year++)
      for(short int year = 1; year <= 10; year++){

        monto = principal * pow(1.0 + tasa, year);
        cout <<setw(4)<<year<<setw(21)<<monto<<endl; // original

      }
      system("pause");
      system("cls");


} // FOR QUE VARÍA LA TASA














    return 0;
}
