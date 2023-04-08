#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
string header =" --- Demonstrates Unformatted Input ---";

int main()
{
string word, rest;
cout << header
<< "\n\nPress <return> to go on" << endl;
cin.get(); // Read the new line
// without saving.

cout << "\nPlease enter a sentence with several words!"
<< "\nEnd with <!> and <return>."
<< endl;
cin >> word; // Read the first word
getline( cin, rest, '!'); // and the remaining text
// up to the character !
cout << "\nThe first word: " << word
<< "\nRemaining text: " << rest << endl;




system("pause");
system("cls");



double x1 = 0.123456, x2 = 23.987, x3 = -123.456;
// a)
cout << left << setw(15) << x1 << endl;
// b)
cout << fixed << setprecision(2) << right << setw(12)
<< x2 << endl;
// c)
cout << scientific << setprecision(4) << x3 << endl;
// Output: -1.2346e+002
// A field width of 12 or more would be convenient!


system("pause");
system("cls");
cout <<"Increment and decrement math operators"<<endl;
cout <<"|"<<setw(20)<<setfill('-')<<"|"<<endl;

int valor1 = 3;
int valor2 = ++valor1;
cout <<"valor 1 (usando ++x [prefijo]) "<<valor2<<endl<<endl;

int valor3 = 3;
int valor4 = valor3++;
cout <<"valor 1 (usando x++ [sufijo]) "<<valor4<<endl<<endl;





system("pause");
system("cls");
cout <<"Increment and decrement math operators 2"<<endl;
cout <<"|"<<setw(20)<<setfill('-')<<"|"<<endl;
int num1 = 3;
int num2 = 3;

cout << "++num1:"<<++num1<<endl<<endl;
cout << "num2++:"<<num2++<<endl<<endl;






system("pause");
system("cls");


int j = 1;
while (j <= 20){
  cout <<"j: "<<j<<endl;
  j++;
}

cout <<endl<<endl<<endl<<"++k"<<endl;// NO CAMBIA NADA

int k = 1;
while (k <= 20){
  cout <<"k: "<<k<<endl;
  ++k;
}



















return 0;
}
