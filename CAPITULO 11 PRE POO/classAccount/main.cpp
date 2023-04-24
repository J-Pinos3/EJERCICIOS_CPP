#include <iostream>
#include "account.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    Account ac1;    

    if(ac1.init("Mary",5461,326.00)){
        ac1.display();
    }

    return 0;
}
