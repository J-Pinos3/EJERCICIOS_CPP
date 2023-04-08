/*
4.9. Escribir un programa que calcule los ángulos agudos
 de un triángulo rectángulo a partir de las longitudes de los catetos.
  */
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(){
const double PI = 3.141592654;

double a, b, c;
cout <<"Ingrese los lados del triángulo"<<endl;

cin >> a >> b >>c;

if ( (a < 0)||(b < 0)||(c < 0) ){
  cout <<"Error inténtelo de nuevo"<<endl;
  while( (a < 0)||(b < 0)||(c < 0) ){
    cout <<"INgrese los lados a, b y c";
    cin>> a >> b >> c;
  }

}

//el lado que está a la izq del == es la hipotenusa
if ( a == sqrt(pow(b,2)+pow(c,2)) ){
cout<<"El ángulo 1 es: "<<asin(b/a)*180/PI<<endl;
cout <<"El otro ángulo es: "<< 90 - asin(b/a)*180/PI;

}else if ( b == sqrt(pow(a,2)+pow(c,2))  ){
cout<<"El ángulo 1 es: "<<asin(a/b)*180/PI<<endl;
cout <<"El otro ángulo es: "<< 90 - asin(a/b)*180/PI;

}else if ( c == sqrt(pow(a,2)+pow(b,2)) ){
cout<<"El ángulo 1 es: "<<asin(a/c)*180/PI<<endl;
cout <<"El otro ángulo es: "<< 90 - asin(a/c)*180/PI;

}





















  return 0;
}
