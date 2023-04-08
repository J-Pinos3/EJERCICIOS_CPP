#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main (){

int nota,total = 0 ,contador = 1;
float media;
while (contador <= 4){
cout <<"ingrese la nota" << contador <<endl;
cin >> nota;
total = total + nota;
  contador ++;
}//fin del while
media = total / 4.00;

if (media >= 90){
  cout<<setw(11)<<"A"<<endl;

}else if( (media >= 80)and(media < 90) ){
  cout<<setw(11)<<"B"<<endl;

}else if( (media >= 70)and(media < 80)){
  cout<<setw(11)<<"C"<<endl;

}else if( (media >= 60)and(media < 70) ){
  cout<<setw(11)<<"D"<<endl;

}else if(media < 60){
  cout<<setw(11)<<"D"<<endl;

}
system("PAUSE");
system("cls");


  return 0;
}
