#include <iostream>
using namespace std;

int *devuelve_Puntero();
int a = 45;


int main(int argc, char const *argv[]) {

  cout <<"&a = " << &a<<endl;
  int *ptr1 = devuelve_Puntero();
  cout << ptr1 <<" \t " << *ptr1<<endl;

  return 0;
}

int *devuelve_Puntero(){

  //if a  is here, when the function ends, the a variable is destroyed and the function returns 0 as adress
    return &a;

}
