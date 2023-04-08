#include <iostream>
#include <iomanip>

using namespace std;


int main (){
//YEAR =AÑO
int year;
cout<<setw(29)<<"| Ingrese un año |" <<endl;
cin >> year;

int A = year % 19;
int B = year % 4;
int C = year % 7;

int D = (19*A + 24) % 30;
int E = (2*B + 4*C + 6*D + 5) % 7;
int N = (22 + D + E);

//cout <<"El numero del día es -----> "<<N<<endl;

if(N <= 30){
cout <<N<<" de Marzo de "<<year<<endl;

}else if(N >= 31){
      cout <<N -31<<" de abril de "<<year<<endl;

      }



  return 0;
}
