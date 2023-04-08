#include <iostream>
using namespace std;


int main() {
double A, B, C;
double mayor;
cout <<"Ingrese los numeros A, B y C"<<endl;
cin >> A >> B >> C;
mayor = A;

if(B > A){
  mayor = B;
    if(A > C){
        cout << C << A <<B<<endl;
        cout <<"La mediana es: "<<A<<endl;
    }else{
        cout << A << C <<B<<endl;
        cout <<"La mediana es: "<<B<<endl;

    }


}else if(C > A){
  mayor = C;
    if(A > B){
        cout << B<< A <<C<<endl;
        cout <<"La mediana es: "<<A<<endl;
    }else{
        cout << A << B <<C<<endl;
        cout <<"La mediana es: "<<B<<endl;

      }

}else if ( (A > B)&&(A > C)){
            if(B>C){
                cout << C << B <<A<<endl;
                cout <<"La mediana es: "<<B<<endl;

            }else{
              cout << B << C <<A<<endl;
              cout <<"La mediana es: "<<C<<endl;


            }




      }



  return 0;
}
