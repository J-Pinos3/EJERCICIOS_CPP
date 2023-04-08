#include <iostream>
using namespace std;


/*
5.1. Escriba un programa que calcule y visualice
1 + 2 + 3 + ... + (n-1) + n, donde n es un valor de un dato positivo.
*/

int main (){
// VERSION 1
/*

int n;
int  total = 0;
cout <<"INGRESE N: ";
cin >> n;

if(n > 100){
  cout <<"NO MAMES WEY"<<endl<<endl;
}

for(int i = 1; i <= n; i++){

  if(i < n-1){
  cout << i <<" + ";

  }else if ( i == (n-1) ){
    cout << "("<< n <<"-1)"<< " + ";

  }else if(i == n){
    cout <<n<<endl;
  }


} // FIN DEL FOR


*/



//SEGÚN EL LIBRO

int n, i = 1, suma = 0;
do
{
cout << " valor de n > 0 "<<endl;
cin >> n;
} while (n <= 0);
while (i <= n)
{
suma += i;
i++;
}
cout << " valor de la suma "<< suma << endl ;





    return 0;
}
