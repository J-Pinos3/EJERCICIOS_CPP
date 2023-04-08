#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

/*
5.17. Calcular la suma de la serie
 1/1^3 + 1/2^3 + ... + 1/n^3 donde n es un número positivo que se introduce por teclado.
*/

int main(){
cout <<"| EJERCICIO 5.17 |"<<endl;
int n = 6;
double total = 0.0;

for(int i = 1; i <= n; i++){

  total = total + ( 1.0/pow(i,3) );
}

cout <<"La suma con n = "<<n<<" es:"<< total <<endl;


system("pause");
system("cls");





/*
5.18. Calcular la suma de los 20 primeros términos de la serie: 1^2
/3^2 + 2^2
/3^2 + 3^2
/3^3 + ... + n^2/3^n
*/

cout <<"| EJERCICIO 5.18 |"<<endl;
double total1 = 0.0;

for(int i = 1; i <= 20 ;i++){


total1 = total1 + ( pow(i,3)/pow(3,i) );


}
cout <<"El valor de la suma es: "<<total1<<endl;



system("pause");
system("cls");



/*
5.19. Determinar si un número natural
 mayor o igual que la unidad que se lee del teclado es primo.

*/
int i = 163;//ú
char a = i;
int num;

do{
  cout <<"Ingrese un n"<<a<<"mero cualesquier > 1"<<endl;
  cin >> num;

}while(num <= 1 );


int k = 1;
int total2 = 0;
int resultado;

while (k <= num){
resultado = num % k;

  if( resultado == 0){
  total2 = total2 + 1;
  }


k++;
}

//SI UN NUMERO (NUM) ES PRIMO SOLO ES DIVISIBLE PARA NUM Y 1
if(total2 == 2){
cout <<"El n"<<a<<"mero "<<num<<" es primo"<<endl;
}


















    return 0;
}
