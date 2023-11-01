#include "EnumClass.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Some statements with objects" 
    << "of type lights\n\n"; 
    

    Lights A1, A2(Lights::RED);
    Lights::State as;

    as = A2.getState();
    if(as == Lights::RED){
        A1.setState(Lights::GREEN);
        A2.setState(Lights::AMBER);
    }
    
    std::cout << "\n";


    return 0;
}
