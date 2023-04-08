#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[]) {

    string linea(50,'-');

    int a = 45;
    int *Ptr = NULL;
    int *Ptr_2 = nullptr;

    if(Ptr == NULL){
        cout << "Ptr no apunta a nada"<<endl;
    }

    if(Ptr_2 == nullptr){
        cout << "Ptr_2 no apunta a nada"<<endl;
    }

    cout <<endl << linea <<endl;

    Ptr = &a;
    Ptr_2 = Ptr;

    if(Ptr_2 == Ptr){
        cout << "Ptr = " << Ptr <<endl;
        cout << "*Ptr = " << *Ptr <<endl<<endl;

        cout << "Ptr_2 = " << Ptr_2 <<endl;
        cout << "*Ptr_2 = " << *Ptr_2 <<endl<<endl;
    }




  return 0;
}
