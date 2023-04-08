#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

enum meses_anio {enero = 1, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre,
noviembre, diciembre};

int main() {

              //          2                   7
meses_anio especMes = febrero, especMes_2 = julio;

if(especMes == febrero){
  cout <<"Febrero"<<endl;
}

if(especMes_2 == 7){
  cout <<"Julio"<<endl;
}
//setlocale(LC_ALL,"");
setlocale(LC_CTYPE, "Es");
cout <<"Haló salúd ñ"<<endl;
cout <<sizeof(bool)<<endl;
cout <<sizeof(int)<<endl;

  return 0;
}
