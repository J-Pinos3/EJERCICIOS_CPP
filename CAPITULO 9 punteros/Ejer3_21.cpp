//4. Write a program that lets users keep track of the last time 
//they talked to each of their friends. Users should be able 
//to add new friends (as many as they want!) and store the number of days 
//ago that they last talked to each friend. Let users update this value 
//(but don't let them put in bogus numbers like negative values). 
//Make it possible to display the list sorted by the names of 
//the friends of by how recently it was since they talked to each friend.
#include <iostream>
#include <new>
#include <string>
#include <cstdlib>
using namespace std;

class Friends{
private:
    string nombre;
    int diasPasados;
    static int num;
public: 
    Friends(){
        diasPasados = 0;
    }
    void setNombre(const string& nombre){ this->nombre = nombre; }
    void setDias(const int dias){ this->diasPasados = dias; }

    string getNombre() const{ return nombre; }
    int getDias() const { return diasPasados; } 

    static void initSize(){ num = 0; }
    static void increaseSize() { num += 3; }
    static int getSize() { return num; }

    void myFriends() const{
        cout <<"Nombre: " << getNombre() << 
        "\nDías pasados: "  << getDias() << endl<<endl; 
    }
};
int Friends:: num = 0;

void ingresarAmigo(Friends *&arr, int &j);
void mostrarAmigos(const Friends *arr, int j);
void editarAmigo(Friends *&arr, int cant);


int main(int argc, char const *argv[])
{
    //INICIALIZAR EL NÚMERO DE ELEMENTOS DEL ARRAY
    Friends::initSize();    

    Friends *arr  = nullptr;
    arr = new Friends[Friends::getSize()];
    int cantidad = 0;
    int posicion = 0;

    ingresarAmigo(arr, cantidad);

    cout << endl << endl << "---------------------------------" << endl << endl;


    mostrarAmigos(arr, cantidad);

    system("pause");
    system("cls");

    cout << endl << endl << "---------------------------------" << endl << endl;
    mostrarAmigos(arr, cantidad);
    cout <<"\nIngrese la posición del usuario a editar: ";        cin >> posicion;

    editarAmigo(arr, cantidad);


    delete[] arr;
    return 0;
}


void ingresarAmigo(Friends *&arr, int &j){

    int i = 0; //controla el límite de elementos
    //int j = 0;
    char continuar ='s';
    string nom;  int dias;



    while(continuar == 's'){
        cin.get();
        cout <<"\nIngrese el nombre de su amigo: ";
        getline(cin,  nom);

        cout <<"\nIngrese el número de días de la última vez que lo vió: ";
        cin >> dias;


        if(j >= Friends::getSize() ){
            cout <<"Agrandando la lista en 3 amigos..."<<endl<<endl;
            Friends *f = new Friends[Friends::getSize()+3];

            for(i = 0; i < Friends::getSize(); i++){
                f[i] = arr[i];
            }
            delete[] arr;
            arr = f;
            Friends::increaseSize();
        }

        int valor = j++;
        
        arr[ valor ].setNombre(nom);
        arr[ valor ].setDias(dias);
        cout << endl;
        cout <<"Continuar? s/n: ";
        cin.get();
        cin.get(continuar);
    }

}


void mostrarAmigos(const Friends *arr, int j){
    for(int i = 0; i < j; i++){
        arr[i].myFriends();
        
    }
}


void editarAmigo(Friends *&arr, int cant){
    
    //mostrarAmigos(arr,cant);
    cout << endl;
    int k = 0;
    bool enc = false;
    string nom_aux{""};
    int dias_aux{0};
    cin.ignore();
    cout <<"\nIngrese los datos del usuario que desea modificar: ";
    cout <<"\nIngrese el nombre: ";   getline(cin, nom_aux);
    cout <<"\nIngrese los días pasados: ";    cin >> dias_aux;
    cout << endl;

    for(int i = 0; i < cant && enc == false; i++){
        if( nom_aux == arr[i].getNombre() && dias_aux == arr[i].getDias() ){
            k = i;
            enc = true;
        }
    }


    cout <<"\n\nUsuario encontrado: "<< endl;
    cout <<"Nombre: "<<arr[k].getNombre();
    cout <<"\nDías pasados: "<<arr[k].getDias();
    
    cout << endl <<"Nuevos Datos: ";

    cin.ignore();
    cout <<"\nIngrese el nombre: ";   getline(cin, nom_aux);

    cout <<"\nIngrese los días pasados: ";    cin >> dias_aux;
    arr[k].setNombre(nom_aux);
    arr[k].setDias(dias_aux);


    cout << endl <<"Usuario modificado:"<<endl;
    cout <<"Nombre: "<<arr[k].getNombre();
    cout <<"\nDías pasados: "<<arr[k].getDias();

}