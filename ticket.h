#ifndef __TICKET_H__
#define __TICKET_H__
#include <string>
#include <iostream>
#include "classes/class.h"
#include "flight.h"

class Burger;

class Ticket {
    std::string seat;
    Flight &flight;
    Class *classOption;
    Burger *burgerOption;
    void printPrice();
    public:
    Ticket(Flight &flight);
    void modifyDate(std::string date);
    void upgradeClass();
    ~Ticket();
    friend std::ostream &operator<<(std::ostream &out, Ticket &t);
};

#endif
