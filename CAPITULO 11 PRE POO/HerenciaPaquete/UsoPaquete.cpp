#include "PaqueteDosDias.h"
#include "Paquete.h"
#include "PaqueteNocturno.h"
#include <iostream>

int main()
{

    Paquete paqueteNormal("Julian","La Patria", "Quito", "Ecuador", "593-a",
    "Lucas", 30.0, 1.39);

    std::cout << "Paquete\n"
        << "Costo: " << paqueteNormal.calcularCosto() << "\n\n";



    PaqueteDosDias paqueteDosDias("John","7th Street", "Kentucky",
    "USA", "56400","Zack", 45.0, 2, 5.10);

    std::cout << "Paquete Dos Días\n"
        << "Costo: " << paqueteDosDias.calcularCosto() << "\n\n";


    PaqueteNocturno paqueteNocturno("Kevin","First Avenue", "Miami",
    "USA", "30468","Marilyn", 22.0, 3.50, 4.00);

    std::cout << "Paquete Dos Días\n"
        << "Costo: " << paqueteNocturno.calcularCosto() << "\n\n";

    return 0;
}
