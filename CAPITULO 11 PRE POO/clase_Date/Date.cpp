#include "Date.h"
#include <iostream>
#include <sstream>
#include <stdexcept>
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

    if(ye < 0){
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

void Date::nextDay(){
    int d{getDay()};
    int mo{getMonth()};
    int ye{getYeat()};

    if(d < 1 || d > 31){
       throw logic_error("Invalid day entered");
    }

    if(mo < 1 || mo > 12){
        throw logic_error("Invalid month entered");
    }

    if(ye < 0){
        throw logic_error("Negative years are not allowed");
    }


    switch (mo) //meses con menos de 31 días
    {
        case 2:{
            if( isLeapYear(ye) ){
                if(d < 29)
                    d+=1;//aumenta el 29 defebrero xq es bisiesto
                else
                    d=1;//nuevo día
                    mo=3;//nuevo mes
            }else if (d < 28){
                d+=1;

            }else{
                d=1;//nuevo día, no es bisiesto
                mo=3;//nuevo mes
            }
        }
        break;

        case 4:
        case 6:
        case 9:
        case 11:{
            if(d < 30){
                d++;
            }else{
                d=1;
                mo+=1;
            }
        }
    }


    switch(mo){ //meses con 31 días
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:{
            if(d < 31){
                d++;
            }else{
                d=1;
                if(mo < 12){
                    mo++;
                }else{
                    mo=1;
                    ye++;
                }
                

            }
        }
        
    }


    month = (short) mo;
    day = (short) d;
    year = (short) ye;
}