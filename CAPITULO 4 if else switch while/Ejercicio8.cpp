#include <iostream>
#include <ctime>
using namespace std;
// calcular la edad de un individuo


int main (){
int dia, dia1, mes, mes1, anio, anio1;
/*
cout <<"Ingrese la fecha de nacimiento"<<endl;
cout <<"día: ";
cin >>dia;
cout <<"mes: ";
cin >>mes;
cout <<"año: ";
cin >>anio;
cout<<endl;
cout <<"<--------------------------->"<<endl;

cout <<"Ingrese la fecha de actual"<<endl;
cout <<"día: ";
cin >>dia1;
cout <<"mes: ";
cin >>mes1;
cout <<"año: ";
cin >>anio1;

int ref_anio = anio1 - anio;

cout << ref_anio<<endl;
*/

cout <<endl<<endl<<endl;
//*******************************
// de c plusplus
time_t rawtime;
struct tm * timeinfo;
time (&rawtime);
timeinfo = localtime(&rawtime);
cout <<"La fecha actual es ---> "<<asctime (timeinfo)<<endl;

cout <<endl;




//*******************************
// de https://www.youtube.com/watch?v=iInyK-S_ORU
time_t now = time(0);
tm * time = localtime(&now);
cout <<"DÍA DE LA SEMANA "<< time->tm_wday<<endl;

//*******************************




  return 0;
}



/*



*/
