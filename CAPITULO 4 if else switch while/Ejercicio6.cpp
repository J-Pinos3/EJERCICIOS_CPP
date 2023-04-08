#include <iostream>
using namespace std;

int main (){
  int ano;
  bool confirmaOE;

  //FORMA 1
cout <<"Ingrese un año"<<endl;
cin >> ano;

if(ano % 4 == 0 ){
confirmaOE = true;
}else{
  confirmaOE = false;
}

if( (ano % 400 == 0)or(ano % 100 != 0)  ){
  confirmaOE = true;
}else{
  confirmaOE = false;
}


if(confirmaOE == true){
  cout << "El año "<<ano<<" Es bisiesto"<<endl;
}

cout<<endl<<endl<<endl;


// FORMA 2
//VOY A BUSCAR LOS QUE NO SON BISIESTOS

int fecha = 1600;
bool bisiesto;

if( (fecha % 4 !=0) || ( (fecha % 100 == 0) && (fecha % 400 != 0) ) ) {
  cout <<" NO ES BISIESTO"<<endl;

}else{
  cout <<" ES BISIESTO"<<endl;
}



  return 0;
}
