#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

  //SEGÚN EL LIBRO
  char car, Comienzo = 'Z';
  for (Comienzo = 'Z'; Comienzo >= 'A'; Comienzo --)
  {
    for ( car = Comienzo; car >= 'A'; car--)
      cout <<car << ' ';
  cout << endl;
  }

system("pause");
system("cls");
cout <<"FORMA 2"<<endl;
system("pause");
system("cls");



int i=90; //Z
int j =65; //A
char a = i;


// también funciona
for(i = 90; i >= 65;i-- ){

    for(a = i; a >= j ;a--){
      cout <<a<<" ";
    }


  cout <<endl;
}



system("pause");
system("cls");








/*
cout<<endl<<endl<<endl;

for(i = 65; i <= 90; i++ ){

    for(j = 90; j >= i ;j--){
      a = j;
      cout <<a<<" ";
    }


  cout <<endl;
}

*/
















    return 0;
}
