#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
/*
transformar de decimal a binario y viceversa
*/

double Dec_bin(int n);
double Bin_dec(int n);

int main() {
short int opcion = 1;
long int numero, aux, cifra;
bool esBinario;
//MENU


/*
while( (opcion < 1)or(opcion > 2) ){
    cout <<setw(20)<<"|MENU|"<<endl<<endl;
    cout <<"1) Pasar de decimal a binario\n2) Pasar de binario a decimal"<<endl;
    cin >> opcion;
}
*/


while( opcion != 0 ){

  cout <<setw(20)<<"|MENU|"<<endl<<endl;
  cout <<"1) Pasar de decimal a binario\n2) Pasar de binario a decimal\n0) Para salir"<<endl;
  cin >> opcion;



    switch (opcion) {
      case 1:{
            cout <<" Decimal a Binario"<<endl;
            do{
                cout <<"Ingrese un numero entero >= 0: ";
                cin >> numero;
            }while(numero < 0);

        cout <<numero<<"en binario es: "<<Dec_bin(numero)<<endl;

      }
      break;



      case 2:{
            cout <<" Binario a Decimal"<<endl;
            do{
                cout <<"Ingrese un numero binario: ";
                cin >> numero;
                esBinario = true;
                aux = numero;

                while(aux != 0){
                    cifra = aux % 10;
                    if( (cifra != 0)and(cifra != 1) ){
                        esBinario = false;
                      }
                  aux = aux/10;
                }


            }while(esBinario == false);// mientras sea false piede el numero otra vez
        cout <<numero<<"en decimal es: "<<Bin_dec(numero)<<endl;

      }
      break;



      case 0:{
        cout <<"Vuelva Pronto"<<endl;
      }
      break;


      default :{
        cout <<"Error intentelo de nuevo"<<endl;

        if( (opcion < 0)||(opcion > 2) ){
            while( (opcion < 0)||(opcion > 2) ){
              cout <<"Error, intentelo de nuevo: ";
              cin >> opcion;
            }

        }


      }
      break;



    }// fin del switch con los ejercicios

    system("pause");
    system("cls");



}// fin del while con los ejercicios






    return 0;
}

//***********************
double Dec_bin(int n){
 //n es el numero decimal ingresado
int exp = 0, digito;
double binario = 0.0;

  while(n != 0){
    digito = n % 2;
    binario = binario + ( digito*pow(10,exp) );
    exp+=1;
    n = n/2;
  }

    return binario;
}//fin de pasar de decimal a binario


double Bin_dec(int n){
// n es el # binario ingresado
long long int digito, decimal = 0, exponente = 0;

  while(n != 0){
      digito = n % 10;//toma la ultima cifra
      decimal = decimal + digito*(int)(pow(2,exponente));
      exponente += 1;
      n=n/10;
  }


    return decimal;
}//fin de pasar de binario a decimal
