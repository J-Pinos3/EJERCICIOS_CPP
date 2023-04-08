#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int a = 7;
    int b = 31;

    int *Ptr_a = &a;
    int *Ptr_b = &b;

    cout <<"Ptr_a: "<<Ptr_a<<endl;
    cout <<"Ptr_b: "<<Ptr_b<<endl;

    if(Ptr_a > Ptr_b){
        cout <<Ptr_a <<" > "<<Ptr_b<<endl;
    }else{
        cout <<Ptr_a <<" < "<<Ptr_b<<endl;
    }









  return 0;
}
