#include <iostream>
#include <string>
using namespace std;

void llenar_matriz(string *mat);
void mostrar_matriz(string *mat);

int main(){

    string prov_poblac[24][2] = {};

    string *ptr_provinces_population = &prov_poblac[0][0];

    llenar_matriz(ptr_provinces_population);

    cout <<endl<<endl;

    mostrar_matriz(ptr_provinces_population);

    return 0;
}

void llenar_matriz(string *mat){
    for(int i = 0; i < 3; i++){

        cout <<"Provincia: " << i+1 <<endl;

        for(int j = 0; j < 2; j++){
            cout << "Provincia ["<<i<<"]["<<j<<"]: ";
            getline(cin, *(mat + i*2 + j)  );
            cin.ignore();
        }
        cout <<"------------------------------"<<endl;
    }
}


void mostrar_matriz(string *mat){
    cout <<"Provincia\t\tPoblacion"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << *(mat + i*2 + j) <<"\t\t";
        }
        cout <<endl;
    }
}