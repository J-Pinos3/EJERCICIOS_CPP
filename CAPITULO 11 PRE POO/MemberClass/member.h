#ifndef MEMBER_H
#define MEMBER_H

//#include "../clase_Date/Date.h"
#include "date.h"
#include <string>

class Member{

private:
    int nr; //member number
    std::string name;
    const Date birth;

    static Member *ptrBoss;
public:
    Member(long int m_nr, const std::string& m_name, const Date& m_birth)
    : nr(m_nr), name(m_name), birth(m_birth){
        if( !setName(m_name) ){
            name = "Uknown";
        }
    }

    Member(long int m_nr, const std::string& m_name, int day, int month, int year)
    : nr(m_nr), name(m_name), birth(month, day, year){
        if( !setName(m_name) ){
            name = "Uknown";
        }
    }

    int getNr() const { return nr;  }
    const std::string& getName() { return name; }
    const Date& getBirthday() const { return birth; }

    void setNr( int n ) { nr = n; }
    bool setName( const std::string& s ){
        if( s.size() < 1 ){
            return false;
        }
        name = s;
        return true;
    }

    void display() const;

    static Member* getBoss(){
        return ptrBoss;
    }

    static void setBoss( Member* ptrMem ){
        ptrBoss = ptrMem;
    }


};

#endif //MEMBER_H