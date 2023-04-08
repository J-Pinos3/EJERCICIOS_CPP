#include <iostream>
#include <iomanip>

using namespace std;

int main (){


int A,B,C;
bool confirmaPE;

cout <<"INgrese los 3 números"<<endl;
cin >> A >> B >> C;

confirmaPE = (A > B);
confirmaPE = (confirmaPE)and(B>C);

if(confirmaPE == true){
cout <<"-------------------------"<<endl;
cout <<setw(5)<<"ORDENADOS"<<endl;
cout <<"-------------------------"<<endl;

}else{
  cout <<"_________________________"<<endl;
  cout <<setw(5)<<"DESORDENADOS"<<endl;
  cout <<"_________________________"<<endl;

}



  return 0;
}
