#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// https://www.cplusplus.com/reference/ctime/ctime/?kw=ctime

// http://www.cplusplus.com/reference/ctime/mktime/

// https://www.youtube.com/watch?v=iInyK-S_ORU

// https://www.cplusplus.com/reference/ctime/ctime/?kw=ctime

// https://www.cplusplus.com/reference/cstring/

int main() {

time_t rawtime;
time (&rawtime);
cout <<"La fecha actual es: "<<ctime(&rawtime)<<endl;

const int MAX = 10;
float array[MAX], x;
int cantidad = 0;
int i;

//se saldrá con una letra
cout <<"Ingrese una letra para salir\n";
for(i = 0; i < MAX && cin >> x; i++){
  array[i] = x;

}
cantidad = i;

cout <<endl<<endl;
for(int i = 0; i < cantidad; i++){
  cout <<"{"<<array[i]<<"} ";
}











    return 0;
}
