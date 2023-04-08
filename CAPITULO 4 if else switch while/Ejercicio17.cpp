#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  // EJERCICIO 1 (MAYOR DE TRES NUMEROS)

  /*
    // DETERMINA EL MAYOR DE TRES NUMEROS INGRESADOS
    int a, b, c;
    cout<<"Ingrese a, b y c"<<endl;
    cin >> a >> b >> c;
    int mayor = a;

    if(b > mayor){
      mayor = b;
    }

    if(c > mayor){
      mayor = c;
    }


    cout <<"Mayor...."<<mayor<<endl;
  */





  // EJERCICIO 2 (NUM PARES DO WHILE)
  int num;

  do{
      cout <<"Ingrese un número par"<<endl;
      cin >> num;
      int i = 6;
  } while( (num % 2) != 0 );

  cout <<"Numero par: "<<setw(12)<<num<<endl;


//-----> solo con while sería así
/*

cout <<"Ingrese un número par"<<endl;
cin >> num;

while ( (num % 2) != 0 ){
cout <<"Ingrese un número par"<<endl;
cin >> num;

}

  cout <<"Numero par: "<<setw(12)<<num<<endl;

*/




    return 0;
}
