#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void A_mayusculas(string &pal1);

int main(int argc, char const *argv[]) {

  string texto = "Hola josé como vas";
  A_mayusculas(texto);
  cout <<texto<<endl;



  return 0;
}

void A_mayusculas(string &pal1){
  int longitud = pal1.length();
    for(int i = 0; i < longitud; i++){
        pal1[i] = toupper(pal1[i]);
    }

}
