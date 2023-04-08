#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {





  char caracter;
  char *Ptr_caracter;

  Ptr_caracter = &caracter;

  cout <<"\nCARACTERES ASCII"<<endl;
    for( caracter = 'A'; caracter <= 'F'; caracter++){
        cout <<" "<< static_cast<int>(caracter)<<"    "<< *Ptr_caracter<<endl;
    }

  return 0;
}
