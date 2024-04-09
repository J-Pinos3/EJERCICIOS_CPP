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

int main(){

    func();
    //episode 6 overloading 20:00

    return 0;
}