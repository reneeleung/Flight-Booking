#ifndef __PASSENGER_H__
#define __PASSENGER_H__
#include <string>

class Passenger {
    std::string name;
    int age;
    public:
    Passenger(std::string name, int age);
    ~Passenger() = default;
};
#endif
