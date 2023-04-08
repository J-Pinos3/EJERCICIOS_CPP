#include <iostream>
using namespace std;

void serieFibo(int a);

int main() {

for (int k = 0; k <= 10; k++ ){
  serieFibo(k);
  cout <<endl<<endl;
}






      return 0;
}

//*********************

void serieFibo(int a){

//a es el numero de elementos


int x = 0, y = 1, z = 1;


cout <<"0 1 ";
for(int i = 1; i < a; i++){
    z = x + y;
    cout << z <<" ";
    x = y;
    y = z;
}








}// FIN FUNCIÓN serieFibo
