#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){

for(int i = 1; i <= 10; i++){
    for(int j= 1; j <= 10; j++){
      cout << i * j <<" ";
    }

  cout <<endl;
}

system("pause");
system("cls");

cout <<" Write a C++ program that reads an integer between 0 and 65535 from the keyboard and uses it to seed a random number generator Then output 20 random numbers between 1 and 100 on screen "<<endl;
int semilla;
cout <<"Ingrese un valor entre 0 y 65535"<<endl;
cin >> semilla;

srand(semilla);


for (int i = 1; i <= 20; i++){
  cout<<"i: "<<i<<"\t"<< rand()%(100+1)<<endl<<endl;
}




system("pause");
system("cls");















    return 0;
}
