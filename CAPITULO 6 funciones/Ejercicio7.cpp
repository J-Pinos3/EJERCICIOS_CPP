#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;




int main() {

double y, x;
cout <<"Ingrese x (-1 para terminar): ";
cin >> x;


while(x != -1){
y = floor(x+0.5);
cout <<"X: "<<x<<setw(10)<<"Y: "<<y<<endl;

system("pause");
system("cls");

cout <<"Ingrese x (-1 para terminar): ";
cin >> x;
  if(x == -1){
    cout <<"Gracias"<<endl;
  }


}







    return 0;
}
