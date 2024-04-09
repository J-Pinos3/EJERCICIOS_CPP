#include <iostream>

void func1();
void func1(int);

int main()
{
    func1();
    func1(5);
    
    return 0;
}


void func1(){
    std::cout << "Func1\n";
}

void func1(int x){
    std::cout << "Func1 with "<< x << std::endl;
}