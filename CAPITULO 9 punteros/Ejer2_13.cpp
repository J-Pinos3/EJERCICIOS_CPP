#include <iostream>
using namespace std;



int main(int argc, char const *argv[]) {

    double *Pd = new double(13.456);
    cout << Pd<<endl;
    cout << *Pd<<endl<<endl;
    delete Pd;
    Pd = NULL;
    //*Pd = 7;errors
    cout << Pd<<endl;
    cout << *Pd<<endl;
    //*Pd = 1.2; NO SE MUESTRA NADA PORQUE ES UN PUNTEOR INVÁLIDO
    //cout << *Pd<<endl;

  return 0;
}
