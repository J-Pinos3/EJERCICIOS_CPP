#include "iostream"
using namespace std;


int main (){

int cantidad, num, num2;
int menor;
cout <<"Ingrese la cantidad de numeros: ";
cin >> cantidad;

cout <<"numero --> ";
cin >> num2;
menor = num2;

for (int i = 0; i < cantidad - 1; i++){


  cout <<"numero --> ";
  cin >> num;


  if(num < menor){
    menor = num;
  }


}
cout <<"Menor: "<< menor<<endl;

    return 0;
}
