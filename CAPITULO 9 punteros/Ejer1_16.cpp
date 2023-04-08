#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  //char *name = "Jose"; prohibidísimo en alabama ISO C++ forbids converting a string constant to 'char'
  char *name = (char *)"Jose Pinos";
  char nombre[] = "Jose";
  //const char *name = "Joe";

  cout << name<<endl;
  cout << nombre<<endl;
  //name = (char *)"Juan Alberto";
  nombre[1] = 'O';
  //name[1] = 'O';no se modifica
  cout << name<<endl;
  cout << nombre<<endl;

int i = 0;
while(name[i] != '\000'){
    i++;
}
cout << i <<endl;







  return 0;
}
