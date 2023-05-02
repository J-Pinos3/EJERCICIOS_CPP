#include "Date.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;

void Date::setDate(){
    struct tm *dur;
    time_t sec;
    time(&sec);
    dur = localtime(&sec);

    day = (short) dur->tm_mday;
    month = (short) dur->tm_mon+1;
    year = (short) dur->tm_year + 1900;
}


bool Date::setDate(short int mo, short int da, short int ye){
    if(mo < 1 || mo > 12){
        return false;
    }

    if(da < 1 || da > 31){
        return false;
    }

    switch (mo) //meses con menos de 31 días
    {
        case 2:{
            if( isLeapYear(ye) ){
                if(da > 29)
                return false;
            }else if (da > 28){
                return false;
            }
        }
        break;

        case 4:
        case 6:
        case 9:
        case 11:{
            if (da > 30)
                return false;
        }
    }

    month = (short) mo;
    day = (short) da;
    year = (short) ye;
    return true;

}


void Date::print() const{
    cout << toString() <<endl;
}


const string& Date::toString() const{
    static string dateString;
    stringstream iostream;

    iostream << setfill('0')
            <<  setw(2) << month << "-"
            <<  setw(2) << day << "-" << year;

    iostream >> dateString;
    return dateString;
}