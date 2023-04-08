#include <iostream>
using namespace std;

/*
http://hitmontop-ejerciciosresueltos.blogspot.com/2011/05/deiteljava515.html?showComment=1359472201471#c1872731446980477273

*/
const int TAM = 10; // controla el tamaño de las figuras
int main (){
// este for principal controla el # de renglones o altura de las figuras
for(int i= 1;i <= TAM ; i++){

  for(int j = 1; j <= i; j++)// dibuja la primera figura
    cout<<"*";

  for(int k = i+1; k <= TAM; k++)// dibuja el primer triangulo en blanco
    cout<<" ";

cout<<" ";
cout<<" ";// son los espacios entre cada cuadrado
cout<<" ";
cout<<" ";

  for(int l = 1; l <= TAM + 1 - i; l++) //imprime la figura invertida
    cout<<"*";

  for(int m = TAM - 1 - i; m <= TAM; m++)
    cout<<" ";

cout<<" ";
cout<<" ";
cout<<" ";
cout<<" ";

  for(int n = 1; n < i; n++)
    cout<<" ";

  for(int p = i; p <= TAM; p++)
    cout <<"*";

cout<<" ";
cout<<" ";
cout<<" ";
cout<<" ";


  for(int q = 1; q <= TAM - i; q++)
    cout<<" ";

  for(int r = TAM - i; r < TAM; r++)
    cout<<"*";
    cout<<endl;

} // FIN DEL FOR INICIAL


    return 0;
}
