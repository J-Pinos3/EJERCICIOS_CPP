#ifndef _EURO_H_
#define _EURO_H_

#include <sstream>//stringstream class
#include <iomanip>
#include <iostream>

class Euro{

friend std::ostream& operator<<(std::ostream& output, const Euro& eu);

private: 
    long int data;

public:
    Euro(int euro = 0, int cents = 0){
        data = 100L * (long)euro + cents;
    }


    Euro(double x){
        x *= 100;
        data = (long)(x >= 0.0 ?  x+0.5 : x-0.5);
    }


    long int getWholePart() const {
        return data/100;
    }

    int getCents() const {
        return (int)data%100;
    }

    double toDouble() const {
        return (double) data/100.0;
    }

    std::string toString() const;

    void print(std::ostream& os) const{
        os << toString() << " Euro" << std::endl;
    }


    Euro operator-(){
        Euro temp;
        temp.data = -data;//sign change
        return temp;
    }


    Euro operator+(const Euro& e2){
        Euro temp;
        temp.data = data +e2.data;//stores this.data + e2.data
        return temp;
    }


    Euro operator-(const Euro& e2){
        Euro temp;
        temp.data = data -e2.data;//stores this.data - e2.data
        return temp;
    }


    Euro& operator+=(const Euro& e2){
        data += e2.data;
        return *this;
    }


    Euro& operator-=(const Euro& e2){
        data -= e2.data;
        return *this;
    }
};

inline std::string Euro::toString() const{
    std::stringstream strStream;
    long temp = data;
    if( temp < 0 ){
        strStream << '-';
        temp = -temp;
    }

    strStream << temp/100 << "," << std::setfill('0') << std::setw(2) << temp%100;

    return strStream.str();
}

std::ostream& operator<<(std::ostream& output, const Euro& eu){

    std::string sign = "";
    long temp = eu.data;
    if(temp < 0){
        sign = "-";
        temp  =- temp;
    }

    output << temp/100 << "," << std::setfill('0') << std::setw(2) << temp%100;
    return output;
}

#endif //_EURO_H_