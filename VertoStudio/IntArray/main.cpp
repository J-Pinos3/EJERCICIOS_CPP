#include <iostream>
#include "IntArray.h"

void func(){

    IntArray a(5), b(4);

    for(int i = 0; i < 5; i++){
        a.set(i, i*2);
        std::cout << a.get(i) << " - " << std::endl;
    }
    //std::cout << a.get(4) <<std::endl << std::endl;

    IntArray c(a); //IntArray c = a; también llama al constructor de copia
    for(int i = 0; i < 5; i++){
        std::cout << c.get(i) << " " ;
    }
    std::cout << std::endl;

    //c = b;
    c = a + b;
    for(int i = 0; i < 9; i++){
        std::cout << c.get(i) << " ** " ;
    }
    //std::cout << c.get(1) << " " ;
}

IntArray* createArray(){

    return new IntArray(5);
}

int main(){

    func();
    
    std::cout << "\n--------------\n";

    IntArray *arr = createArray();
    (*arr)[1] = 11;

    std::cout << arr->get(1) << "\n";

    delete arr;

    return 0;
}