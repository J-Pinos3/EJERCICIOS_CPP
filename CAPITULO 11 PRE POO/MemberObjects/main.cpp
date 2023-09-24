#include "Result.h"
#include "Daytime.h"
#include <iostream>

int main(){

    Result current;
    Result temp1(15.9);
    Result temp2(16.7,14,30,35);

    std::cout << temp1.getTime().getHour() << " "
            << temp1.getTime().getMinute() << " "
            << temp1.getTime().getSecond() << "\n"
            << temp1.getVal() << "\n";

    std::cout << "\n---------------------------------------\n\n";

    std::cout << temp2.getTime().getHour() << " "
        << temp2.getTime().getMinute() << " "
        << temp2.getTime().getSecond() << "\n"
        << temp2.getVal() << "\n";

    return 0;
}


