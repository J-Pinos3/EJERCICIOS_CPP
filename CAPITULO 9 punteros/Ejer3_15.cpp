#include <iostream>
#include <string>
#include <new>
using namespace std;

struct PERSONA{
    string nombre;
    string telefono;
    int edad;

    PERSONA(string nombre, string telefono, int edad){
        this->nombre = nombre;
        this->telefono = telefono;
        this->edad = edad;
    }
};


int main(int argc, char const *argv[])
{
    
    PERSONA *person_ptr = new PERSONA("Julie","1235540",21);
    
    cout << "Nombre: " << person_ptr->nombre << endl;
    cout << "Teléfono: " << person_ptr->telefono << endl;
    cout << "Edad: " << person_ptr->edad << endl;

    delete person_ptr;
    return 0;
}
