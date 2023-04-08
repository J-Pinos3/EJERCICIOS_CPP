// recursive.cpp
// Demonstrates the principle of recursion by a
// function, which reads a line from the keyboard
// and outputs it in reverse order.
// ----------------------------------------------------
//REFRENCIA A CAP 5 EJERCICIO 2
#include <iostream>
#include <cstdlib>
using namespace std;

void getput(void);

int main(){
cout << "Please enter a line of text:\n";
getput();
cout << "\nBye bye!" << endl;

system("pause");
system("cls");

char k;
char letra = ' ';// los que pasa esque ingreso un texto y el cin.get compara cada caracter de lo ingresado con EOF
while( ( letra = cin.get() ) != EOF){ //EOF = ctrl z
  cout <<letra<<" ";
}




return 0;
}

void getput(){
char c;

if( cin.get(c) && c != '\n')
getput();
cout.put(c);

}
