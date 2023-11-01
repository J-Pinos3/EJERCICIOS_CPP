#include "Euro1.h"
#include <iostream>

int main()
{
    
    std::cout << "*  *  *  Testing Class Euro  *  *  *\n\n";
    Euro wholesale(20,50), retail;

    retail = wholesale;
    retail += Euro(9.49);  // (Euro)9.49  Ó  9.49


    std::cout << "WholeSale price: "; wholesale.print(std::cout);
    std::cout << "Retail price: " << retail << "\n";

    Euro discount(2.10);
    retail -= discount;

    std::cout <<"\nRetail price including discount: " << retail << "\n";

    wholesale = 34.10;
    std::cout << "\nNew wholesale price: " << wholesale << std::endl;


    return 0;
}
