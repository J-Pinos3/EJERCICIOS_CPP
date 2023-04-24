#include <iostream>
#include <iomanip>
#include "account.h"
using namespace std;

bool Account::init(const string &nam, unsigned long int a, double val){
    if(nam.size() < 1){
        return false;
    }

    name = nam;
    nr = a;
    balance = val;
    return true;
}


void Account::display(){
    cout << fixed << setprecision(2)
        << "--------------------------------------\n"
        << "Account holder:    " << name <<"\n"
        << "Account number:    " << nr << "\n"
        << "Account balance:    " << balance << "\n"
        << "--------------------------------------\n\n";
}