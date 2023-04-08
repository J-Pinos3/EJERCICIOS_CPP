#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// LISTA DE TRABAJADORES DE UNA EMPRESA (6) DE CADA UNO NOMBRE CUENTA Y SUELDO
// LA LISTA SE ALMACENA EN UN corporacion.txt
// SE CARGA AL EMPEZAR Y GUARDA AL FINALIZAR
// AÑADIR EMPLEADO -- DESPEDIR EMPLEADO -- ASIGNAR SUELDO -- LISTADO

const int MAX = 10;
void escribirArchivo();
void leerArchivo();

struct EMPLEADOS{
string nombre;
int cuenta;
double sueldo;

} trabajador,empleados[MAX];


struct LISTA {
 struct EMPLEADOS empleados[MAX];
int contador = 0;

} lista;


// PROTOTIPOS DE LAS FUNCIONES
int menu(); // Menú del programa - devuelve la opción elegida
void cargar(LISTA& lista, bool& ok); // Carga del archivo
void guardar(const LISTA& lista); // La guarda en el archivo

void leerEmpleado(EMPLEADOS& trabajador); // Lee los datos
void insertarEmpleado(LISTA& lista, EMPLEADOS trabajador,bool& ok); // Inserta un nuevo empleado en la lista
void eliminarEmpleado(LISTA& lista, int posicion, bool& ok); // Elimina el empleado en esa posición
//string nombreCompleto(EMPLEADOS trabajador);
void pagarSueldo(LISTA& lista); // Sueldo de los empleados

double mediaSueldos(const LISTA& lista); // media de los sueldos
int mayorSueldo(const LISTA& lista);

void mostrarEmpleado(EMPLEADOS trabajador);
void listado(const LISTA& lista, double media, int mayor); // Listado de empleados



int CANTIDAD_PERSONAS = 0;

string nombreArchivo;




int main(){
bool exito;
int op, pos;
 escribirArchivo();
cout<<endl;
 leerArchivo();
cout<<endl;

cargar(lista, exito);

cout <<"Empleados falla "<<endl;
cout <<"DESEA ABRIR UN ARCHIVO EXISTENTE?"<<endl;
cout <<"VARIABLE EXITO"<<endl;


if (!exito){
    cout <<"NO SE PUDO CARGAR LA LISTA"<<endl;
} else {
    do { // El bucle do evita tener que leer antes la primera opción
        op = menu();
        switch (op) {
            case 1:
            {
            leerArchivo();
            cout <<endl;
            leerEmpleado(trabajador);
            insertarEmpleado(lista, trabajador, exito);
                if (!exito) {
                cout << "Lista llena: imposible insertar" << endl;
                }
            }
            break;


            case 2:
            {
            leerArchivo();
            cout <<endl;
            cout << "Posición: ";
            cin >> pos;
            eliminarEmpleado(lista, pos - 1, exito);
                if (!exito) {
                cout << "Elemento inexistente!" << endl;
                }
            }
            break;


            case 3:
            {
            leerArchivo();
            cout <<endl;
            pagarSueldo(lista);
            }
            break;


            case 4:
            {
            listado(lista, mediaSueldos(lista), mayorSueldo(lista));
            cout<<endl<<endl;
            leerArchivo();
            cout<<endl;
            }
        }
    } while (op != 0);

guardar(lista);
}

    return 0;
}





//ESCRIBO Y LEO EL ARCHIVO COMO ENSEÑO EL INGE BYRON
void escribirArchivo(){

int cuenta;
string nombre;
double sueldo;
char c = 's';
ofstream archivoClientes;

cout <<"INGRESA EL NOMBRE DEL ARCHIVO"<<endl;

// SE ESCRIBE EL ARCHIVO
getline(cin,nombreArchivo);
archivoClientes.open(nombreArchivo.c_str(),ios::out);
cout<<"INGRESA LOS DATOS"<<endl;

//solo se saldrá si el usuario ingresa un caracter diferente de 's'
while ( c == 's'){

cout <<"\tNOMBRE: "<<endl;
getline (cin,nombre);
cout <<"\tCUENTA: "<<endl;
cin >> cuenta;
cout <<"\tSUELDO: "<<endl;
cin >> sueldo;

archivoClientes<<nombre<<endl;
archivoClientes<<cuenta<<endl;
archivoClientes<<sueldo<<endl;
cout <<"<------------------------------->"<<endl;

cout <<"INGRESAR OTRO USUARIO: \t s/n "<<endl;
cin >> c;
cin.ignore();
CANTIDAD_PERSONAS = CANTIDAD_PERSONAS + 1;


}
archivoClientes.close();
}

void leerArchivo(){

int cuenta;
string nombre;
double sueldo;
ifstream LEERclientes(nombreArchivo);
//LEERclientes.open(nombreArchivo,ios::in);
string texto;


if( LEERclientes.fail()){
cout <<"NO SE PUDO LEER EL ARCHIVO O ESTE NO EXISTE"<<endl;
} else {

    while(!LEERclientes.eof()) {

        getline(LEERclientes,texto);    // yo había pusto (cin, texto)por eso el error
        cout <<texto<<endl;
        //cout <<"DEENTRO DELL EEELSEEE"<<endl;




       /*
        LEERclientes >> nombre >> cuenta >> sueldo;
        if(!LEERclientes.eof()){
        cout<<setw(15)<<"--> EMPLEADOS <--"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Cuenta: "<<cuenta<<endl;
        cout<<"Sueldo: "<<sueldo<<endl;
        cout<<endl;
        }
        */

    }

}

LEERclientes.close();

}

// DESARROLLO DE FUNCIONES SEGÚN LUIS YAÑEZ

int menu() {
int op;
do {
cout <<setw(40)<<"1 - AÑADOR EMPLEADO" << endl;
cout <<setw(41)<<"2 - ELIMINAR EMPLEADO" << endl;
cout <<setw(44)<<"3 - PAGAR EMPLEADO" << endl;
cout <<setw(41)<<"4 - LISTADO EMPLEADOS" << endl;
cout <<setw(31)<<"0 - SALIR" << endl;
cout << "Opción: ";
cin >> op;
} while ((op < 0) || (op > 4)); // SE FUERZA AL USUARIO A SALIR CON 0
return op;
}


void cargar(LISTA& lista, bool& ok) {
EMPLEADOS trabajador;
char aux = ' '; // Variable auxiliar para leer
ifstream archivo(nombreArchivo);


lista.contador = 0; // Inicializamos la lista
//archivo.open(nombreArchivo,ios::in);
if (!archivo.is_open()) {
ok = false;
}   else {
        ok = true;
        getline(archivo, trabajador.nombre); // Leemos el primer nombre
            while ( (!archivo.eof()) && (lista.contador < CANTIDAD_PERSONAS)) {
            //getline(archivo, empleadi.apellidos); PUES NO HAY
            archivo >> trabajador.cuenta;
            archivo >> trabajador.sueldo;
            archivo.get(aux); // Saltamos el Intro
            lista.empleados[lista.contador] = trabajador; // Al final
            lista.contador++;
            getline(archivo, trabajador.nombre); // Siguiente nombre
        }   // Si hay más de MAX estudiantes, ignoramos el resto
    archivo.close();
    }

}


void guardar(const LISTA& lista) {
ofstream archivo;   //pass as reference but as  constant
archivo.open(nombreArchivo.c_str(),ios::out);
for (int i = 0; i < lista.contador; i++) {
archivo << lista.empleados[i].nombre << endl;
archivo << lista.empleados[i].cuenta << endl;
archivo << lista.empleados[i].sueldo << endl;
}
archivo <<endl; // Centinela final
archivo.close();
}


void leerEmpleado(EMPLEADOS& trabajador){

cin.sync(); // Descartamos cualquier entrada pendiente
cout << "Nombre: ";
getline(cin, trabajador.nombre);
cout << "Cuenta: ";
cin >> trabajador.cuenta;
/*
cout << "Sueldo: ";
cin >> trabajador.sueldo;
*/
trabajador.sueldo = -1; // Sin pagar de momento
cin.sync(); // Descartamos cualquier entrada pendiente


}


void insertarEmpleado(LISTA& lista, EMPLEADOS trabajador,bool& ok){

ok = true;
    if (lista.contador == CANTIDAD_PERSONAS) {
        ok = false;
    }   else {
            lista.empleados[lista.contador] = trabajador;
            // Insertamos al final
            lista.contador++;
        }


}


void eliminarEmpleado(LISTA& lista, int posicion, bool& ok){

// Espera el índice del elemento en pos
if ((posicion < 0) || (posicion > lista.contador - 1)) {
    ok = false; // Elemento inexistente
}   else {
        ok = true;
        for (int i = posicion; i < lista.contador - 1; i++) {
        lista.empleados[i] = lista.empleados[i + 1];
        }
        lista.contador--;
    }


}


void pagarSueldo(LISTA& lista){

for (int i = 0; i < lista.contador; i++) {
  // ORIGINAL  cout << "Sueldo del empleado "<< trabajador.nombre << ": ";

    //Debería ser
    cout <<"sueldo del empleado "<<lista.empleados[i].nombre<<": ";

    cin >> lista.empleados[i].sueldo;


}

}


double mediaSueldos(const LISTA& lista){

double total = 0.0;
    for (int i = 0; i < lista.contador; i++) {
        total = total + lista.empleados[i].sueldo;
    }
    return total / lista.contador;
}


int mayorSueldo(const LISTA& lista){

double max = 0;
int pos = 0;
    for (int i = 0; i < lista.contador; i++) {
        if (lista.empleados[i].sueldo > max) {
        max = lista.empleados[i].sueldo;
            pos = i;
        }
    }
    return pos;
}


void mostrarEmpleado(EMPLEADOS trabajador){

cout << setw(35) << left << trabajador.nombre;
cout << trabajador.cuenta << " ";
cout << fixed << setprecision(1) << trabajador.sueldo;

}


void listado(const LISTA& lista, double media, int mayor){

    for (int i = 0; i < lista.contador; i++) {
        cout << setw(3) << i << ": ";
        mostrarEmpleado(lista.empleados[i]);
        if (i == mayor) {
            cout << " -----> Mayor nota!";
        }
        cout << endl;
    }
cout << "Media de sueldos: " << fixed << setprecision(1)<< media << endl << endl;





}
