#include <iostream>
using namespace std;

void imprime(int a, int b);
int devuelve_valor(int a);

int main(int argc, char const *argv[]) {



imprime(devuelve_valor(5),devuelve_valor(10));











  return 0;
}

void imprime(int a, int b){

    cout <<"a + b = "<< a + b<<endl;
}


int devuelve_valor(int a){

    return a;
}
