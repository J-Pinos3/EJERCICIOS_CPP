#ifndef _ACCOUNT_
#define _ACCOUNT_

#include <string>

class Account{

private:
    std::string name;
    unsigned long int nr;
    double balance;


public:
    bool init(const std::string &nam, unsigned long int a, double val);
    void display();
};

#endif //_ACCOUNT_