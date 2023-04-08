#include <iostream>
#include <string>
using namespace std;

struct PRODUCTO{
    string codigo;
    string nombre;
    double precio;
};


int main() {

string linea(50,'-');
PRODUCTO productos[5] = {};
PRODUCTO *Ptr_products = productos;// *Ptr_products = &productos[0]

cout <<"Ingrese 3 productos"<<endl<<endl;
for(int i = 0; i < 3; i++){
    cout <<"Ingrese el codigo: ";
    cin >> ( (Ptr_products+i)->codigo );

    cin.ignore();

    cout <<"Ingrese el nombre del producto: ";
    getline(cin,  (Ptr_products+i)->nombre );

    cout <<"Ingrese el precio del producto: ";
    cin >> ( (Ptr_products+i)->precio );

    cout <<endl<< linea <<endl<<endl;
}

cout <<endl<<"Productos registrados: ";
for(int i = 0; i < 3; i++){
    cout <<"Nombre: "<<(Ptr_products+i)->nombre<<endl;
    cout <<"Codigo: "<<(Ptr_products+i)->codigo<<endl;
    cout <<"Precio: "<<(Ptr_products+i)->precio<<endl;

}



  return 0;
}
