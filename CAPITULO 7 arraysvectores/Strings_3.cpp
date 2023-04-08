#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]) {

    long int segundo;
    time(&segundo);//lee la hora actual en segundos

    string tm = ctime(&segundo); //converte los segundos a string
    cout <<"Fecha y hora actual: "<<tm<<endl;

    string horas(tm, 11, 2);
    string saludo("Ten un lindo ");

    if(horas < "10"){
        saludo += "dia";
    }else if(horas < "17"){
        saludo = "Ten una linda tarde";
    }else{
       saludo = "Ten una linda noche";
    }

    cout <<endl<<endl<<saludo<<endl<<endl;


  return 0;
}
