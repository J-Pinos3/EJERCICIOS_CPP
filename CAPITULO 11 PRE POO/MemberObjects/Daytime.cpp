#include "Daytime.h"
#include <ctime>

const DayTime& currentTime(){

    static DayTime current;
    std::time_t sec;
    std::time(&sec);
    std::tm *time = localtime(&sec);

    current.setTime(time->tm_hour, time->tm_min, time->tm_sec);
    return current;
}