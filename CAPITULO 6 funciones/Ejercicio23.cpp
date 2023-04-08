#include <iostream>
#include <cstdlib>
using namespace std;

float potenciaS (float a, int n)
{
  static float f = 1.0 ; // F sigue con el valor que tenía en la anterior llamada
    f *= a; // f = f * a
    return f;
}


float potencia (float a, int n)
{
float f = 1.0;  //cada vez que se llama a ala función f si inicia en 1

    for ( int i = 1; i <= n; i++)
      f *= a;
 return f;
}




int main(){


  float a;
  int n;
  cout << " valor de a ";
  cin >> a;
  do
  {
  cout << " valor de n ";
  cin >> n;
  } while (n<=0);

  for( int i = 1 ; i <= n ; i++)
  cout << a << " elevado a " << i << " = " << potenciaS(a,i) <<endl;
  system("PAUSE");



    return 0;
}
