#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main(){

int total = 0; // suma de notas ingresadas
int nota = 0 ; // nota ingresada (WARD para terminar)
double contadorNotas = 0.00; // cantidad de notas
string nombre;
cout<<setw(10)<<"["<<"Ingrese el nombre de la institución"<<"]"<<endl;
getline(cin,nombre);
if(nombre.size() <= 25 ){
  cout <<"Nombre: "<<nombre<<endl;
}else{
  cout <<"Se restringió el número de caractéres a  25"<<endl;
  cout <<"Nombre: "<<nombre.substr(0,25)<<endl;
}



cout <<"| HUMANO ingresa las notas |"<<endl;
cout <<"| -1 para salir |"<<endl;

/*
cout<<setw(10)<<"nota: "<<contadorNotas<<endl;
cin >> nota;
con esto tambié se soluciona esa nota demás (-1) en el CONTADOR DE NOTAS */

while (nota != -1){
total = total + nota;
contadorNotas ++;
cout<<setw(10)<<"nota: "<<contadorNotas<<endl;
cin >> nota;

}
int media;
cout <<"El total de notas ingresadas fue: "<<contadorNotas<<endl;
cout <<"contadorNotas -1: "<<contadorNotas -1 <<endl;
cout <<"TOTAL: "<<total<<endl;
cout <<"La media de las notas es: "<<(total)/(contadorNotas-1)<<endl; // con el -1 ignoro que en contador notas este una nota demás (el -1)










  return 0;
}
