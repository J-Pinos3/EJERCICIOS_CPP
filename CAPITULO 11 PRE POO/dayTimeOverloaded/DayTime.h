#ifndef _DAYTIME_
#define _DAYTIME_
#include <iostream>
#include <iomanip>
using namespace std;

class DayTime{

private:
    short hour, minute, second;
    bool overflow, underflow;

    void inc(){//ayuda incremento
        ++second;
        if(second >= 60){
            second = 0; minute += 1;
        }

        if( minute >= 60 ){
            minute = 0; hour += 1;
        }

        if( hour >= 24 ){
            hour = 0;   overflow = true;
        }
    }

    void dec(){ //ayuda decremento
        --second;
        if( second < 0 ){
            second = 59;
            --minute;
        }

        if( minute < 0 ){
            minute = 59;
            --hour;
        }

        if( hour < 0 ){
            hour = 0; underflow = true;
        }
    }

public: 
    DayTime(int h = 0, int min = 0, int sec = 0){
        overflow = underflow = false;
        if( !setTime(h,min,sec) ){
            hour, minute, second = 0;
        }
    }


    bool setTime(int hour, int minute, int second = 0){
        if( hour >= 0 && hour < 24
            && minute >= 0 && minute < 60
            && second >= 0 &&  second < 60){

                this->hour = (short) hour;
                this->minute = (short) minute;
                this->second = (short) second;
                return true;
        
        }else{
            return false;
        }
    }

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    int asSeconds() const{
        return (hour*3600 + 60*minute + second);
    }


    DayTime& operator++(){ //prefijo ++seconds
        inc();
        return *this;
    }

    DayTime operator++(int){ //postfijo seconds++
        DayTime temp = *this;
        inc();
        return temp;
    }


    DayTime& operator--(){ //prefijo --seconds
        dec();
        return *this;
    }

    DayTime operator--(int){ //postfijo seconds--
        DayTime temp(*this);
        dec();
        return temp;
    }

};

    //t1 < t2
inline bool operator< (const DayTime& d1, const DayTime& d2){
    return d1.asSeconds() < d2.asSeconds();
}

    //t1 <= t2
inline bool operator<= (const DayTime& d1, const DayTime& d2){
    return d1.asSeconds() <= d2.asSeconds();
}

    //t1 == t2
inline bool operator==(const DayTime& d1, const DayTime& d2){
    return d1.asSeconds() == d2.asSeconds();
}

    //t1 != t2
inline bool operator!=(const DayTime& d1, const DayTime& d2){
    return !(d1 == d2);
}

    //t1 > t2
inline bool operator>(const DayTime& d1, const DayTime& d2){
    return (d2 < d1);
}

    //t1 >= t2
inline bool operator>=(const DayTime& d1, const DayTime& d2){
    return !(d1 <= d2);
}


// output 
ostream& operator<<( ostream& os , const DayTime& t){
    os << setfill('0')
        << setw(2) << t.getHour() << ":"
        << setw(2) << t.getMinute() << ":"
        << setw(2) << t.getSecond() << " Time";
    os << setfill(' ');
    return os;
}

//input
istream& operator>>(istream &is , DayTime& t){
    cout << "Enter daytime in format (hh:mm:ss): ";
    int hr = 0, min = 0, sec = 0;
    char c1 = '\0', c2 = '\0';

    if( !(is >> hr >> c1 >> min >> c2 >> sec) ){
        return is;
    }


    if( c1 != ':' || c2 != ':' || !t.setTime(hr, min, sec) ){
        is.setstate(ios::failbit); //error
    }

    return is;
}


#endif //_DAYTIME_