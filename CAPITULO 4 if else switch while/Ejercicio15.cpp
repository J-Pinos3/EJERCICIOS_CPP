#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main(){
int horas;
double tarifaXhoras = 0;

double salario;

cout <<"Introduzca las horas trabajadas (-1 para terminar)"<<endl;
cin >> horas;

while(horas != -1){
cout <<"Introduzca la tarifa por horas del empleado"<<endl;
cin >> tarifaXhoras;

salario = horas * tarifaXhoras;
//    cout<<"El salario es de: "<<setw(25)<<salario<<endl;
double aug = tarifaXhoras/2;

if(horas > 40){
  cout<<"El salario es de: "<<setw(25)<<salario + aug<<endl;
}else {
  cout<<"El salario es de: "<<setw(25)<<salario<<endl;
}
system("pause");
system("cls");

cout <<"Introduzca las horas trabajadas (-1 para terminar)"<<endl;
cin >> horas;


}// fin del while


    return 0;
}
