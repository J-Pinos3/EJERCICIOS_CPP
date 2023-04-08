#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main (){
/*
  string palabra = " hola como estás ";
  // cout <<" hola " + "como estas"<<endl; ME DA ERROR
 cout <<palabra + "Jose"<<endl;
 cout <<palabra<<"Jose"<<endl;
*/
double peso;
string NombrePlaneta;

cout <<"Introduzca su peso"<<endl;
cin >> peso;
if( peso < 0 ){
  cout <<"Error inténtelo de nuevo"<<endl;
    while(peso < 0){
      cout << "Peso: ";
      cin >> peso;
    }

}

cin.sync();
cout <<"Introduzca el nombre de un planeta"<<endl;
cout <<"Ejemplo (Mercurio, Venus)"<<endl;
getline(cin, NombrePlaneta);

system("pause");
system("cls");


if(NombrePlaneta == "Mercurio"){
  const double merc = 0.4155;
  peso = peso * merc;

}else if(NombrePlaneta == "Venus"){
  const double venu = 0.8975;
  peso = peso * venu;

}else if(NombrePlaneta == "Tierra"){
  const double tierr = 1.0;
  peso = peso * tierr;

}else if(NombrePlaneta == "Luna"){
  const double luna = 0.166;
  peso = peso * luna;

}else if(NombrePlaneta == "Marte"){
  const double mart = 0.3507;
  peso = peso * mart;

}else if(NombrePlaneta == "Jupiter"){
  const double jupi = 2.5374;
  peso = peso * jupi;

}else if(NombrePlaneta == "Saturno"){
  const double satu = 1.0677;
  peso = peso * satu;

}else if(NombrePlaneta == "Urano"){
  const double uran = 0.8947;
  peso = peso * uran;

}else if(NombrePlaneta == "Neptuno"){
  const double nept = 1.1794;
  peso = peso * nept;

}else if(NombrePlaneta == "Pluton"){
  const double plut = 0.0899;
  peso = peso * plut;

}


cout <<"| Su peso en otro planeta es |"<<endl<<endl;

cout<<"Planeta\t\t\t\tPeso"<<endl;
cout<<NombrePlaneta<<"\t\t\t\t"<<peso<<endl;


    return 0;
}
