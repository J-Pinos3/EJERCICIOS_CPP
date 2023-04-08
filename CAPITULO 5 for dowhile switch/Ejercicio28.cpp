#include <iostream>
#include <cstdlib>
using namespace std;

int main() {


for(int i = 97; i < 123; i++ ){
  cout << (char)i << "\t<->\t " << (char)(i-32)<<endl;
}



short int valor= 30;
short int nota = 8;
bool aprobado;
//                       ACCION VERDADERA         ACCION FALSA    DEPENDE DE LA CONDICIÓN DEL '?'
//valor > 50 ? cout <<"valor es mayor que 50": cout << "valor es menor que 50";  imprime "valor es menor que 50"
cout << (valor > 50 ?"valor es mayor que 50": "valor es menor que 50");

cout <<endl<<endl;
nota >= 7?  aprobado = true: aprobado = false;

if(aprobado == true){
  cout <<"FELICIDADES, APROBASTE"<<endl;
}else{
  cout <<"QUE MAL,NO APROBASTE"<<endl;
}

  return 0;
}
