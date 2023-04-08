#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int num = 0;
  int *numPtr = nullptr;

  numPtr = &num;
cout <<"> "<<num<<endl;

  cout <<"Ingrese un n"<<char(163)<<"mero: ";
  cin >> *numPtr;
cout <<"> "<<num<<endl;
  if( *numPtr % 2 == 0){
      cout<<*numPtr<<" es par y su direcci"<<char(162)<<"n es: "<<numPtr;
  }else{
      cout<<*numPtr<<" es impar y su direcci"<<char(162)<<"n es: "<<numPtr;
  }

  return 0;
}
