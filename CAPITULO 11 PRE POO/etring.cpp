#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {


    string palabra = "Hola como estás, hoy voy a practicar mi guitarra";

    for(int i =0; i < palabra.size(); i++){
        if( palabra.at(i) == 'o' ){
          cout <<"a"<<endl;
        }
    }





  return 0;
}
