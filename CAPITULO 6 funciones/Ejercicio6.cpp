#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
/*
CARGOS DE ESTACIONAMIENTO
*/
double cargos (double x);

int main(){
char o_tilde = 162; //ó
double horas1, horas2, horas3;
double total_Horas = 0;
double total_Cargo = 0;
int i = 1;


while(i <= 3){
    if(i == 1){
      cout <<"Ingrese las horas del autom"<<o_tilde<<"vil "<<i<<": ";
      cin >> horas1;
      total_Horas = total_Horas + horas1;
      total_Cargo = total_Cargo + cargos(horas1);


    }else if( i == 2){
      cout <<"Ingrese las horas del autom"<<o_tilde<<"vil "<<i<<": ";
      cin >> horas2;
      total_Horas = total_Horas + horas2;
      total_Cargo = total_Cargo + cargos(horas2);


    }else if ( i == 3){
      cout <<"Ingrese las horas del autom"<<o_tilde<<"vil "<<i<<": ";
      cin >> horas3;
      total_Horas = total_Horas + horas3;
      total_Cargo = total_Cargo + cargos(horas3);

    }


  i++;
}
system("pause");
system("cls");
cout <<"Autom"<<o_tilde<<"vil"<<setw(20)<<"Horas"<<setw(20)<<"Cargo"<<endl;
cout <<endl;
cout <<"\n 1 "<<setw(20)<<horas1<<setw(20)<<cargos(horas1)<<endl;
cout <<"\n 2 "<<setw(20)<<horas2<<setw(20)<<cargos(horas2)<<endl;
cout <<"\n 3 "<<setw(20)<<horas3<<setw(20)<<cargos(horas3)<<endl;
cout<<"TOTAL "<<setw(20)<<total_Horas<<setw(20)<<total_Cargo<<endl;




    return 0;
}

//****************************
double cargos (double x){
  // x son las horas que pasa cada vehículo y es ingresado por el usuario

double cargo_adicional;

    if(x <= 3){
      return 2.00;

    }else if( (x > 3)and(x < 24) ){

    //ceil redondea al mayor entero mas cercano 1.05->2
    //luego se multiplicar por el cargo de (.50$)
     //se le suma el cargo base de 2
        cargo_adicional = 2 + 0.5*ceil(x-3);

      return cargo_adicional;
    }else if(x == 24)
            return 10.00;






}// FIN FUNCIÓN CARGOS
