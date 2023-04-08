#include <iostream>
using namespace std;

const int MAX = 10;
double *devuelve_mayor(const double *arr, const int n, double &mayor);


int main(int argc, char const *argv[]) {

    int n = 10;
    double mayor = 0;
    double arr1[MAX] = {598,-652.6, 21.4, 12.9, 0.0479, 987.458, 49.7,12.5, -14.8, 10000.0 };

    double *P_mayor = nullptr;

    P_mayor = devuelve_mayor(arr1, n, mayor);

    cout <<"P_mayor: "<<P_mayor<<endl;
    cout <<"&mayor: "<<&mayor<<endl;

  return 0;
}

double *devuelve_mayor(const double *arr, const int n, double &mayor){

    mayor = *(arr+0);

    for(int i = 0; i < n; i++){
        cout <<"["<<*(arr+i)<<"] ";
    }

    cout <<endl<<endl;
    for(int i = 0; i < n; i++){
        if( *(arr+i) > mayor){
            mayor = *(arr+i);
        }
    }
    cout <<"El mayor elemento del arreglo es: "<<mayor<<endl;

    return &mayor;
}
