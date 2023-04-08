#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    
    string nombres[2] = {"Wendy Armstrong","Eve Beauty"};

    int articulos_vendidos[2][5] = { {20,51,30,17,44}, {150,120,910,100,88} };


    for(int i = 0; i < 2; i++){
        cout <<endl<<"Vendedor: " << nombres[i];
        cout <<"\nN"<<char(163)<<"mero de Items vendidos: ";

        for(int j = 0; j < 5; j++){
            cout <<"  "<<articulos_vendidos[i][j];
        }
        cout <<endl;
    }

    return 0;
}
