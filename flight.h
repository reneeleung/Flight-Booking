#ifndef __FLIGHT_H__
#define __FLIGHT_H__
#include "subject.h"
#include <string>

class Flight: public Subject {
    const int capacity;
    const std::string flight_num;
    const std::string dest;
    const std::string date;
    public:
    Flight(int capacity, std::string flight_num, std::string dest, std::string date);
    std::string getFlightNumber() const { return flight_num; }
    std::string getDestination() const { return dest; }
    std::string getDate() const { return date; }
    bool full() const { return observers.size() >= capacity; }
    ~Flight() = default;
};

#endif
