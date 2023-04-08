#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
string linea(50,'_');
float val = 5.0;

cout << (val++) - (7.0/2.0)<<endl;
cout <<linea<<endl<<endl;
val = 5.0;
cout << (++val) - (7.0/2.0)<<endl;
cout <<linea<<endl<<endl;

val = 5.0;
val = val + 1;
cout << val<<endl;
cout <<linea<<endl<<endl;

double k = 7.0;
cout <<k++<<endl;
cout <<"ka: "<<k<<endl;// 8
k = 7.0;
cout <<++k<<endl;
cout <<linea<<endl<<endl;

k = 7.0;
//k++; DA 8 v
++k;//LOS DOS ME DAN 8
//cout <<k++<<endl; DA 7
cout <<k<<endl;

system ("pause");
system ("cls");


cout <<"Ingrese enteros (una letra para salir)"<<endl;
int x, suma = 0;

while(cin >> x){
 suma = suma + x;

}
cout <<"suma: "<<suma<<endl;



system ("pause");
system ("cls");



















  return 0;

}
