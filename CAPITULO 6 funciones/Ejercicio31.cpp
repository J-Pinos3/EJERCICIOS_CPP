#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
6.9. Escribir un programa que mediante funciones calcule:
• Las anualidades de capitalización si se conoce el tiempo, el tanto por ciento y el capital f inal a pagar.
• El capital c que resta por pagar al cabo de t años conociendo la anualidad de capitalización y el tanto por ciento.
• El número de años que se necesitan par a pagar un capital c a un tanto por ciento r.

*/


float cc (float r, float t, float a);
float tt (float r, float a, float c);
float aa (float r, float t, float c);
char menu ();


int main() {

char opcion;
float c, r, t, a;
bool fin = false;

while (!fin){

    opcion = menu();
    switch(opcion){
        case '1':{
            cout <<"Ingresa r, t y c"<<endl;
            cin >> r >>t >> c;
            a = aa(r/100, t, c);
            cout <<"anualidad = "<<a<<endl;

        }
        break;


        case '2':{
            cout <<" Ingresa r, t y a"<<endl;
            cin >> r >> t >> a;
            c = cc(r/100, t, a);
            cout <<"capital = "<<c<<endl;

        }
        break;


        case '3':{
            cout <<"Ingresa r, a y c"<<endl;
            cin >> r >> a>>c;
            t = tt(r/100, a, c);
            cout <<"anios = "<<t<<endl;

        }
        break;


        case '4':{
            fin = true;

        }
        break;


    } // FIN SWITCH

    system("pause");
    system("cls");




}// FIN WHILE PRINCIPAL






    return 0;
}

//*************************

float cc (float r, float t, float a){

    return ( a * ( 1 +  r)*(pow( 1 + r , t)-1) / r  );
}// FIN DE CAPITAL EN t AÑOS


float aa (float r, float t, float c){


    return (  c * r / ( (1 + r)* (pow(1+r,t)-1 ) )  );
}// FIN FUNCIÓN ANUALIDAD DE CAPITALIZACIÓN


float tt (float r, float a, float c){
  float x;
  x = c*r/ ( a * (1+r) );

    return log(1+x)/log(1+r);
}// FIN # DE AÑOS


char menu (){

char c;

cout <<"1. calcular la anualidad A de capitalizacion"<<endl;
cout <<"2. calcular el capital C a cabo de t anios"<<endl;
cout <<"3. calcular el numero de anios"<<endl;
cout <<"4. FIN"<<endl;

do {
  cout <<"opcion: ";
  cin >> c;
} while(  c < '0' or c > '4'  );


  return c;
} // FIN FUNCIÓN MENÚ
