#include <iostream>
#include <vector>

void printVector(std::vector<int> vec){

    for (auto a : vec){
        std::cout << a << " ";
    }
    std::cout << "\n";
    
}



int main()
{
    std::vector<int> v = {0,2,3,4,5};
    printVector(v);

    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    printVector(v1);
    

    std::vector<int> v2(10);
    v2[0] = 11;
    v2[1] = 22;
    v2[2] = 33;
    printVector(v2);
    
    
    return 0;
}
