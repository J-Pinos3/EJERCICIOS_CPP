#include "member.h"
#include <iostream>
using namespace std;

Member* Member::ptrBoss = nullptr;

void Member::display() const{
    string line(50,'-');

    cout<< line 
        << "\n Member Number: " << nr
        << "\n Mmeber: " << name 
        << "\n Birth: " << birth.toString()
        << "\n" <<line << endl;
}