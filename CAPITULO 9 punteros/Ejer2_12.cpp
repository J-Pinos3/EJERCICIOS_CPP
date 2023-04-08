#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

int *p = new int(5);

cout << "p = "<< p <<endl;
cout << "*p = "<< *p <<endl;
*p = 77;
cout << "p = "<< p <<endl;
cout << "*p = "<< *p <<endl;
delete p;
//*p = 34; comportamiento indefinido
cout << "p = "<< p <<endl;
cout << "*p = "<< *p <<endl;//valor basura
p = NULL;
/*--------------------------------------------------------------------*/


p = new int(78042);//ahora apunta a otra dirección del monton

cout << "\n\n\np = "<< p <<endl;
cout << "*p = "<< *p <<endl;

double *A_ptr = nullptr;
cout <<"sizeof(A_ptr) = "<< sizeof(A_ptr)<<endl;
cout <<"sizeof(p) = "<< sizeof(p)<<endl;
delete p;
p = NULL;

//int *Q = new int;
//cout << "Q = "<< Q <<endl;
//cout << "*Q = "<< *Q <<endl; VALOR BASURA
  return 0;
}
