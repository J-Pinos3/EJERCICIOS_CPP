#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/*
UNa persona invierte $1000.00 en una cuenta de ahorro que produce el 5%
de interés suponiendo que todo el interés se deposita en la cuenta
calcule e imprima el monto de dinero en la cuenta al final de cada
a{o durante  10 años


*/

int main (){
//calculo de interés compuesto
double monto; //monto a depositar al final de cada año
double principal = 1000.0; // monto inicial antes del interes
double tasa = 0.05; // tasa de interés anual
cout <<"Año"<<setw(25)<<"Monto de depósito"<<endl;
cout << fixed << setprecision(2); // para  n de decimales

//for(short int year = 0; year < 10; year++)
for(short int year = 1; year <= 10; year++){

  monto = principal * pow(1.0 + tasa, year);

  cout <<setw(4)<<year<<setw(21)<<monto<<endl; // original

}


    return 0;
}
