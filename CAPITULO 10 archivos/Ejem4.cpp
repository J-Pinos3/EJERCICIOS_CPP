#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

int n, suma = 0, c = 0;

while(cin >> n){
  suma += n;
  c++;
}

cout <<"La media parcial es: "<<(float)suma/c<<endl;
cin.clear();//si no pongo esta línea, no puedo ingresar otro cin

while(cin >> n){
  suma += n;
  c++;
  //cout <<"Dentro del ultimo while"<<endl;
}
cout <<"La media total es: "<<(float)suma/c<<endl;
cout <<"numeros ingresados: "<<c<<endl;
  return 0;
}
