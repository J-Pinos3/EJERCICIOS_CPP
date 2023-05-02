#include "Date.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    Date today, birthday(1,29,1927);
    const Date date_2010(1,1,2010);

    cout << "\nBirthday: " << birthday.toString() << endl; 

    today.setDate();//se establece la hora actual
    cout << "\nCurrent date: " << today.toString() << endl;
    

    if( today.isLess(date_2010) ){
        cout <<"We are in the future bro"<<endl;
    }else{
        cout <<"What will happen in 2010 bro?"<< endl;
    }

    cout << endl<<endl;
    Date holiday;
    short month, day, year; char c;

    cout <<"When does your next vacation begin?\n" 
    << "(mm--dd--yyyy): ";
    if( !(cin >> month >> c >> day >> c >> year) ){
        cerr << "Datos inválidos" << endl;
    }else if( !(holiday.setDate(month,day,year)) ){
        cerr << "Fecha errónea" << endl;
    }else{
        cout << "Tus primeras vacaciónes"<<endl;
        holiday.print();


        if( today.getYeat() < holiday.getYeat() ){
            cout <<"You should go on vacation this year"<<endl;
        }else{
            cout <<"Have a nice trip\n";
        }
    }


    return 0;
}
