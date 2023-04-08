#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main() {
cout<<"|Ejercicio 1|"<<endl;

          // 1    <=    99
for (int i = 0; i < 100; i++){
  cout <<i<<" bottles of beer"<<endl;

}

system("pause");
system("cls");



cout<<"|Ejercicio 2|"<<endl;


int opcion;


do{
  cout <<"Producto 1 \nProducto 2 \nProducto 3"<<endl;
  cin >> opcion;

  if( (opcion < 1)||(opcion > 3)){
    cout <<"error inténtelo de nuevo"<<endl;
  }


}while( (opcion < 1)||(opcion > 3) );


//JUMPING INTO C++




system("pause");
system("cls");



cout<<"|Ejercicio 3|"<<endl;
int valor, suma = 0;
cout<<"Suma con do while"<<endl;
do{
    cout <<"Ingrese un valor (0 para terminar): ";
    cin >> valor;
    suma = suma + valor;

}while(valor != 0);
cout <<"La suma es: "<<suma<<endl<<endl;





int dato = 1, sumatoria = 0;
cout<<"Suma con while"<<endl;

while(dato != 0){
cout <<"Ingrese un valor (0 para terminar): ";
cin >> dato;

sumatoria = sumatoria + dato;
}
cout <<"El valor de la sumatoria es: "<< sumatoria<<endl;






system("pause");
system("cls");



cout<<"|Ejercicio 4|"<<endl;

cout <<"n°"<<"\t"<<"n^2"<<endl;
for(int i = 1; i <= 20; i++){
cout <<i<<"\t"<<pow(i,2)<<endl;

}








system("pause");
system("cls");



cout<<"|Ejercicio 5|"<<endl;
int caracter = 219; //█
char letra = caracter;
string pregunta;
int resp, opcion1 = 0, opcion2 = 0, opcion3 = 0;

cout <<"--Ingrese una pregunta--"<<endl;
cin.sync();
getline(cin,pregunta);
cout <<"["<<pregunta<<"]"<<endl;


cout<<"Ingrese su respuesta\n 1) opcion 1\n, 2) opcion 2\n, 3) opcion 3"<<endl;
cout <<"Observación: (0 para terminar)"<<endl;
cin >> resp;
while(resp != 0){
    if(resp == 1){
      opcion1 +=1;
    }else if(resp == 2){
      opcion2 +=1;
    }else if(resp == 3){
      opcion3+=1;
    }
    cout <<"Opcion: "<<endl;
    cin >> resp;

}
system("cls");

cout <<"\nOpcion 1:"<<endl;
cout <<opcion1<<endl;
  for(int i = 1; i <= opcion1; i++){
    cout <<letra;
  }

cout <<endl;
cout <<"Opcion 2:"<<endl;
cout <<opcion2<<endl;
  for(int i = 1; i <= opcion2; i++){
    cout <<letra;
  }

cout <<endl;
cout <<"Opcion 3:"<<endl;
cout <<opcion3<<endl;
  for(int i = 1; i <= opcion3; i++){
    cout <<letra;
  }





  return 0;
}
