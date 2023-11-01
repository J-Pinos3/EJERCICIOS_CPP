#ifndef _DATE_
#define _DATE_

#include <string>
using namespace std;

class Date{

private: 
    short int month, day, year;

public:

    Date(){
        month = day = year = 1;
    }

    Date(short int month, short int day, short int year){
        if( !setDate(month, day, year) ){
            month = day = year = 1;
        }
    }

    Date(const Date& datezz){
        this->month = datezz.month;
        this->day = datezz.day;
        this->year = datezz.year;
    }

    void setDate();
    bool setDate(short int month, short int day, short int year);
    int getMonth() const{ return month; }
    int getDay() const { return day; }
    int getYeat() const { return year; }


    bool isEqual(const Date& d) const{
        return (month == d.month && day == d.day && year == d.year);
    }


    bool isLess(const Date &d) const;
    const string& toString() const;
    void print() const;
    void nextDay();

    static bool isLeapYear(int year);
};

inline bool Date::isLess(const Date &d) const{
    if(year != d.year){
        return year < d.year;

    }else if(month != d.month){
        return month < d.month;

    }else{
        return day < d.day;
    }
}


#endif //_DATE_