#include <iostream>
using namespace std;

void Intercambio(int *Ptr1, int *Ptr2);


int main(int argc, char const *argv[]) {

    int num1 = 10, num2 = 35;
    cout <<">";
    cin >> num1;
    cout <<endl;

    cout <<">";
    cin >> num2;
    cout <<endl;

    cout <<num1<<" <-> "<<num2<<endl;
    Intercambio(&num1,&num2);
    cout <<num1<<" <-> "<<num2<<endl;
  return 0;
}


void Intercambio(int *Ptr1, int *Ptr2){
    int temp = *Ptr1;
    *Ptr1 = *Ptr2;
    *Ptr2 = temp;
}
