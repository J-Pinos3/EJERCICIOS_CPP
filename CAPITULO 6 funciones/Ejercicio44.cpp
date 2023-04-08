#include <iostream>
using namespace std;

double suma (double term1, double term2, double term3 = 0.0, double term4 = 0.0 );

int main() {
cout <<suma(4.8,1.6,3.7,9.87)<<endl;

cout <<suma(3.6,12.8)<<endl;

cout <<suma(9.6,3.14,5.0)<<endl;

//cout <<suma(9.6,3.14,,4.12)<<endl; NO ME PUEDO SALTAR UN PARAMETRO POR DEFECTO

    return 0;
}

//*********************************

double suma (double term1, double term2, double term3, double term4 ){


  return term1 + term2 + term3 + term4;
}
