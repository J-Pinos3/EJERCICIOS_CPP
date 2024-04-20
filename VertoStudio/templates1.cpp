#include <iostream>

template<typename T>
T powerOf2(T i){
    return i*i;
}


int main()
{
    
    std::cout << powerOf2(0.25)<< "\n";

    std::cout << powerOf2(25)<< "\n";

    std::cout << powerOf2(3)<< "\n";
    
    return 0;
}
