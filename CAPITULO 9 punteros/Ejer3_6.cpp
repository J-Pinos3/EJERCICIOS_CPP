#include <iostream>
#include <new>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int *Ptr_a = nullptr, a = 10;
    float *Ptr_val = nullptr, val = 13.47;
    string *Ptr_cad = nullptr, cad = "Hola Mundo";
    
    string line(40,'-');

    Ptr_a = new int(a);

    Ptr_val = new float;
    *Ptr_val = val;

    Ptr_cad = new string(cad);


    cout << endl << line << endl << endl;
    cout <<"a: " << a << "\t\t" << "&a: " << &a<<endl;  
    cout << "Ptr_a: " << Ptr_a << "\t\t" << "*Ptr_a: " << *Ptr_a << endl;
    cout << endl << line << endl << endl;


    cout << line << endl << endl;
    cout <<"val: " << val << "\t\t" << "&val: " << &val<<endl;  
    cout << "Ptr_val: " << Ptr_val << "\t\t" << "*Ptr_val: " << *Ptr_val << endl;
    cout << endl << line << endl << endl;


    cout << line << endl << endl;
    cout <<"cad: " << cad << "\t\t" << "&cad: " << &cad<<endl;  
    cout << "Ptr_cad: " << Ptr_cad << "\t\t" << "*Ptr_cad: " << *Ptr_cad << endl;
    cout << endl << line << endl << endl;


    delete Ptr_a;
    delete Ptr_val;
    delete Ptr_cad;

    return 0;
}
