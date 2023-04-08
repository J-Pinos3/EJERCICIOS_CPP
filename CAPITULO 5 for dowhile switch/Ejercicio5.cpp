#include <iostream>
using namespace std;


int main (){

  //FACTORIAL

  int num;
  int factorial = 1;
  int contador = 0;
  /*
  cout <<"INGRESE EL NÚMERO PARA CALCULAR EL FACTORIAL"<<endl;
  cin >> num;
  */
int i = 1;


for (i = 1; i <= 5 ; i++){

int factor = 1;
int numero = i;

  while(0 < numero){
  factor = factor * (numero);
  numero--;
  }

cout <<"| "<<i<<"!= "<<" |"<<"\t\t"<<factor<<endl;



} // FIN DEL FOR


    return 0;
}
