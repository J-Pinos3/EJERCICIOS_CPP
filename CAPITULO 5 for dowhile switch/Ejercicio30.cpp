#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {


  double limite, velocidad, muy_rapido;

  cout <<"Velocidad :>";
  cin >> velocidad;

  cout <<"Limite :>";
  cin >> limite;
/*  SI INGRESO UNA LETRA SE TERMINA
while(cin >> limite){
  cout <<" > "<<limite<<endl;
}
*/

double mayor_valor = (velocidad > limite ? velocidad : limite);
//cout <<"El mayor valor ingresado es: " << (velocidad > limite ? "La velocidad":"El limite" )<<endl;
cout <<"El mayor valor ingresado fue el "<<mayor_valor<<endl<<endl;

if( (muy_rapido=velocidad-limite) < 10){
    cout <<"Tienes suerte hijo"<<endl;
}else if(muy_rapido <20){
    cout <<"Hijo, tu multa es de: 40$"<<endl;
}else if(muy_rapido < 30){
    cout <<"Hijo, tu multa es de: 80$"<<endl;
}else{
    cout <<"Hijo, entregame tu licencia"<<endl;
}





  return 0;
}
