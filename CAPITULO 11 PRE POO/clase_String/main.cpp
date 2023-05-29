#include <iostream>
#include <string>
using namespace std;



int main(int argc, char const *argv[])
{
    
    string s1 = "feliz";
    string s2{" cumpleaños"};    
    string s3;

    cout <<"s1 es \"" << s1 << "\"; s2 es \"" << s2 
         <<"s3 es \"" << s3 <<"\""
         <<"\n\nLos resultados de comparar s2 y s1 son: "
         <<"\ns2 == s1 produce " << (s2 == s1 ? "true": "false")
         <<"\ns2 != s1 produce " << (s2 != s1 ? "true": "false")
         <<"\ns2 > s1 produce " << (s2 > s1 ? "true": "false")
         <<"\ns2 < s1 produce " << (s2 < s1 ? "true": "false")
         <<"\ns2 >= s1 produce " << (s2 >= s1 ? "true": "false")
         <<"\ns2 <= s1 produce " << (s2 <= s1 ? "true": "false");


    cout <<"\n\nPrueba de uso de s3.empty()"<<endl;
    if(s3.empty()){
        cout <<"s3 esta vacíaa, se asignó s1 a s3"<<endl;
        s3 = s1;
        cout << "s3 es \"" << s3 << "\"";
    }


    s1 += s2;
    cout << "\n\ns1 += s2 produce: s1 = " << s1;

    s1 += " a ti";
    cout << "\n\ns1 += \" a ti\" produce: s1 = " << s1;


    cout <<"\n\nLa subcadena de s1 que empieza en la ubicación 0 para\n"
    <<"17 caracteres, s1.substr(0,17), es: \n"
    <<s1.substr(0,17);


    cout <<"\n\nLa subcadena de s1 que empieza en la ubicación 18\n"
    <<"s1.substr(18), es: \n"
    <<s1.substr(18);


    //constructor de copia
    string s4{s1};
    cout <<"\ns4 = " << s4 << endl <<endl;

    cout <<"Asignando s4 a s4"<<endl;
    s4 = s4;
    cout <<"\ns4 = " << s4 << endl <<endl;


    s1[0] = 'F';
    s1[6] = 'C';
    cout << "s1 despues de s1[0] = 'F' y s1[6] = 'C' es: " << s1 << "\n\n";


    try{
        cout <<"El intento de asignar 'd' a s1.at(30): " <<endl;
        s1.at(30) = 'd';
    }catch(out_of_range ex){
        cout <<"Error: " << ex.what() << "\nFuera de los límites del array\n";
    }



    return 0;
}
