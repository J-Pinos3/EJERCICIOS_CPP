#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double raiz_cuadrada(int z);

unsigned long factorial(unsigned long int a);

int main(){

char itilde = 161;
cout <<"Ra"<<itilde<<"ces cuadradas"<<endl<<endl;

for(int i = 1; i <= 20; i++){
  cout <<"Ra"<<itilde<<"z de "<<i<<": "<<raiz_cuadrada(i)<<endl<<endl;


}//FIN DEL FOR



system("pause");
system("cls");


cout <<"| FACTORIAL CON RECURSIVIDAD |"<<endl<<endl;
//cout <<"factorial de 4: "<<factorial(4)<<endl;
for(int contador = 0; contador <= 10; contador++){ //EMPIEZA CON FACTORIAL DE 0;
  cout <<contador<<"! ="<<"\t"<<factorial(contador)<<endl<<endl;
}



    return 0;
}


//******************************
double raiz_cuadrada(int z){

double valor = sqrt(z);// MESSIRVE
//double valor = pow(z,1.0/2); MESSIRVE

  return valor;
}// FIN FUNCIÓN raiz_cuadrada


//*******************************
unsigned long factorial(unsigned long int a){

if(a <= 1){ // evalúa el caso base
  return 1; // casos base 0! = 1, 1! = 1

}else{  //paso recursivo

  return a * factorial(a-1);
}


} // FIN FUNCIÓN factorial
