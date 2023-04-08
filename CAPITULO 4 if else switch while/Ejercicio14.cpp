#include <iostream>
#include <iomanip>


using namespace std;


int main(){


int Numero_Cuenta;
double Saldo_Inicial, ToT_articulos, ToT_creditos, Limite_credito;

double saldo_Final;

cout <<"Introduzca el número de cuenta (-1 para salir): ";
cin >> Numero_Cuenta;

while (Numero_Cuenta != -1){

  if(Numero_Cuenta != -1){
    cout <<"Ingrese el saldo inicial: ";
    cin >> Saldo_Inicial;

    cout <<"Ingrese los cargos totales (artículos cargador por el cliente): ";
    cin >> ToT_articulos;

    cout <<"Ingrese los créditos totales: ";
    cin >> ToT_creditos;

    cout <<"Ingrese el límite de crédito: ";
    cin >> Limite_credito;
    cout <<endl;
    saldo_Final = Saldo_Inicial +  ToT_articulos - ToT_creditos;

    cout <<"El nuevo saldo es: "<<saldo_Final<<endl;
    if(saldo_Final > Limite_credito){
      cout <<"Cuenta: "<<setw(20)<<Numero_Cuenta<<endl;
      cout <<"Límite de crédito: "<<setw(20)<<Limite_credito<<endl;
      cout <<"Saldo: "<<setw(20)<<saldo_Final<<endl;
      cout <<"Se excedió el límite de su crédito"<<endl<<endl;
    }else{
      cout <<"El nuevo saldo es: "<<setw(10)<<saldo_Final<<endl;
    }


  }//FIN DEL IF


  cout <<"Introduzca el número de cuenta (-1 para salir): ";
  cin >> Numero_Cuenta;


}//FIN DEL WHILE




    return 0;
}
