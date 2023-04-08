#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
short int num1, num2, num3;
string pal1, pal2, pal3;
/*
cout <<">";
cin >> pal1;

cout <<"num>";
cin >> num1;

cout <<">";
//getline(cin,pal3);  este getline almacena el enter que queda pendiente de ingresar num1 debería poner cin.ignore()
cin >> pal3;  //no hay problema y puedo ingresar otro dato

cout <<"num>";
cin >> num2;

getline(cin,pal1);//no me deja ingresar este pal1 xq se almacena el anterior <enter>
cout <<"num>";
cin >> num2;

cout << pal1 << pal2 << pal3<<" - "<<num1<<num2<<endl;
*/
//SI PONGO ESPACIOS EN BLANCO Y TABULADORES o enter ANTES de ingresar un numero o palabra
//cin los ignora, si hay espacios o tabuladores luego de la palabra o numero PERO NO HAY NADA MÁS
//QUE ESOS ESPACIOS, entonces cin los eliminar y puedo ingresar otros valores
cout <<"\tCASO 1"<<endl<<endl;
cout << "num1: ";
cin >> num1;
cout << "num2: ";
cin >> num2;
cout << "num3: ";
cin >> num3;

cout <<endl;

cout <<"pal1: ";
cin >> pal1;
cout <<"pal2: ";
cin >> pal2;
cout <<"pal3: ";
cin >> pal3;

cout <<"\npal1: "<<pal1<<endl;
cout <<"pal2: "<<pal2<<endl;
cout <<"pal3: "<<pal3<<endl;
cout <<"num1: "<<num1<<endl;
cout <<"num2: "<<num2<<endl;
cout <<"num3: "<<num3<<endl;



cout <<"\n\n\n\n\tCASO 2"<<endl<<endl;
cout <<"pal1: ";
cin >> pal1;
cout <<"pal2: ";
cin >> pal2;
cout <<"pal3: ";
cin >> pal3;

cout <<endl;

cout << "num1: ";
cin >> num1;
cout << "num2: ";
cin >> num2;
cout << "num3: ";
cin >> num3;

cout <<"\npal1: "<<pal1<<endl;
cout <<"pal2: "<<pal2<<endl;
cout <<"pal3: "<<pal3<<endl;
cout <<"num1: "<<num1<<endl;
cout <<"num2: "<<num2<<endl;
cout <<"num3: "<<num3<<endl;




cout <<"\n\n\n\n\tCASO 3"<<endl<<endl;

cout << "num1: ";
cin >> num1;
cout <<"pal1: ";
cin >> pal1;

cout << "\nnum2: ";
cin >> num2;
cout <<"pal2: ";
cin >> pal2;

cout << "\nnum3: ";
cin >> num3;
cout <<"pal3: ";
cin >> pal3;

cout <<"\npal1: "<<pal1<<endl;
cout <<"pal2: "<<pal2<<endl;
cout <<"pal3: "<<pal3<<endl;
cout <<"num1: "<<num1<<endl;
cout <<"num2: "<<num2<<endl;
cout <<"num3: "<<num3<<endl;



cout <<"\n\n\n\n\tCASO 4"<<endl<<endl;

cout <<"pal1: ";
cin >> pal1;  //ingreso juan pablo
cout <<"pal2: ";
cin >> pal2;  //no puedo ingresar nada, pero se almacena pablo, queda pendiente el enter
cout <<"pal3: ";
getline(cin,pal3);//se almacena el enter que estaba pendiente, si o si usar cin.ignore, incluso si pongo todo bien, se almacena
//el enter de pal3

cout << "num1: ";
cin >> num1;
cout << "num2: ";
cin >> num2;
cout << "num3: ";
cin >> num3;

cout <<"\npal1: "<<pal1<<endl;
cout <<"pal2: "<<pal2<<endl;
cout <<"pal3: "<<pal3<<endl;
cout <<"num1: "<<num1<<endl;
cout <<"num2: "<<num2<<endl;
cout <<"num3: "<<num3<<endl;

/*
si en el caso 4 en pal1 ingreso: jose alejandro pinos, en pal1 se almacena jose, lo demás
luego del espacio queda pendiente, pal2 almacena alejandro y pal3 almacena (_)pinos, en los numeros no pasa nada

en el caso 5 no puedo ingresar pal1 xq se almacena el enter de pal3 del caso 4
*/
cout <<"\n\n\n\n\tCASO 5"<<endl<<endl;

cout <<"pal1: ";
getline(cin,pal1);
cout <<"pal2: ";
getline(cin,pal2);
cout <<"pal3: ";
getline(cin,pal3);

cout << "num1: ";
cin >> num1;
cout << "num2: ";
cin >> num2;
cout << "num3: ";
cin >> num3;

cout <<"\npal1: "<<pal1<<endl;
cout <<"pal2: "<<pal2<<endl;
cout <<"pal3: "<<pal3<<endl;
cout <<"num1: "<<num1<<endl;
cout <<"num2: "<<num2<<endl;
cout <<"num3: "<<num3<<endl;




  return 0;
}
