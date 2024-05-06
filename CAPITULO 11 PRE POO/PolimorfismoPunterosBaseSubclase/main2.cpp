
#include <string>
#include "EmpleadoPorComision.h"
#include "EmpleadoBaseMasComision.h"
using namespace std;

//SE LLAMAN A LOS OBJETOS DEL TIPO DE CLASE DEL PUNTERO
int main(){
    
    EmpleadoPorComision *Ptr_empleadoPorComision = nullptr;

    EmpleadoBaseMasComision empleadoBaseMasComision(
        "Bob", "Lewis","333-33-3333",5000, 0.04, 300);

    Ptr_empleadoPorComision = &empleadoBaseMasComision; //permitido

    //invoca a los métodos de la clase base en el objeto de la clase derivada
    //mediante el puntero de la clase base por la relación es-un
    string primerNombre = Ptr_empleadoPorComision->getPrimerNombre();
    string apellidoPaterno = Ptr_empleadoPorComision->getApellidoPaterno();
    string nss = Ptr_empleadoPorComision->getNumeroSeguroSocial();
    double ventasBrutas = Ptr_empleadoPorComision->getVentasBrutas();
    double tarifaComision = Ptr_empleadoPorComision->getTarifaComision();


    //no se puede invocar a los métodos que solo son de la clase derivada en un objeto de las
    //clase derivada con un puntero de la clase base, no hay la relación es-un
    //*class "EmpleadoPorComision" has no member "setSalarioBase"C/C++(135)
    //double salarioBase = Ptr_empleadoPorComision->getSalarioBase(); 
    //Ptr_empleadoPorComision->setSalarioBase( 500 ); 

    return 0;
}