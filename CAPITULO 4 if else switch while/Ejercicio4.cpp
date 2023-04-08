#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double SEMIperimetro(double a, double b, double c);


int main (){
int a, b, c;
cout<<setw(25)<<"Ingrese los lados del triángulo"<<endl;
cin >> a >> b >> c;

  if( (a + b < c)||(a + c < b)||(b + c < a) ){
    cout <<"Los lados ingresados no representan un tríangulo"<<endl;

  } else {
    cout <<"El área de un triángulo de lados a: "
    << a <<" b: "<< b <<" c: "<< c <<" es:"<<endl;

  cout << SEMIperimetro(a, b, c);

    }

  return 0;
}


double SEMIperimetro(double a, double b, double c){

double p = (a + b + c)/2.00; // semperímetro

double area = sqrt(p*(p-a)*(p-b)*(p-c));

  return area;
} // FIN FUNCIÓN SEMIperimetro
