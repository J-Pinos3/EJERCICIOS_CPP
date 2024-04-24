#include <iostream>
#include <list>

int main()
{
    std::list<int> v = {0,2,3,4,5};


    std::list<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    for(auto i: v1){
        std::cout << i << "  ";
    }
    std::cout << "\n";
    auto itV = v1.begin();
    std::cout <<"\nFirst element: " << *itV << "\n";
    //itV += 1 prohibited;
    itV++;
    std::cout <<"\nSecond element: " << *itV << "\n";

    //itV returns an iterator to the second element
    //insert an element at that position
    v1.insert(itV, -105);
        for(auto i: v1){
        std::cout << i << "  ";
    }





/* cant use [index] cuz list are random access
    std::list<int> v2(10);
    v2[0] = 11;
    v2[1] = 22;
    v2[2] = 33;
*/
    
    
    return 0;
}
