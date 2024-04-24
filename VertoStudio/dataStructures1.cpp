#include <iostream>
#include <vector>

void printVector(std::vector<int> vec){
    std::cout <<"\nPrint normal\n";
    for (auto a : vec){
        std::cout << a << " ";
    }
    std::cout << "\n";
    
}


void printVectorIterators(std::vector<int> vec){
    std::cout <<"\nPrint with Iterators\n";
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        //can also declare
        //int &a = *it; so i dont need to deferentiate it every time
        std::cout << *it << " ";
    }
    std::cout << "\n";
}


int main()
{
    std::vector<int> v = {0,2,3,4,5};
    printVector(v);

    std::vector<int>::iterator itV = v.begin();
    std::cout <<"\nFirst element: " << *itV << "\n";
    itV+=1;
    std::cout <<"\nSecond element: " << *itV << "\n";

    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    printVector(v1);
    printVectorIterators(v1);
    

    std::vector<int> v2(10);
    v2[0] = 11;
    v2[1] = 22;
    v2[2] = 33;
    printVector(v2);
    
    
    return 0;
}
