#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {

    //char *cad1 = "Bienvenido José"; //ADVERTENCIA
    //const char *cad1 = "Bienvenido José"; //correcto
    char *cad1 = (char*)"Bienvenido José"; //correcto
    cout << "cad1: " << cad1<<endl;


    cout <<"\n\n\n"<<endl;


    string text1 = "Bienvenido a C++";
    char *text1_PTR = new char[text1.size()+1];
    strcpy(text1_PTR, text1.c_str());
    cout <<"text1: "<<text1<<"\nsizeof(text1) = " << sizeof(text1)<<endl;
    cout <<"text1_PTR: "<<text1_PTR<<"\nsizeof(text1_PTR) = " << sizeof(text1_PTR)<<endl;
    cout <<"*text1_PTR = "<< *text1_PTR<<endl;

    delete[] text1_PTR;


    cout <<"\n\n\n"<<endl;


    char * text2;
    cout <<">";
    cin.getline(text2,10);
    cout << text2<<endl;




  return 0;
}
