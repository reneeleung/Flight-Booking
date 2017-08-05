#ifndef __TICKET_H__
#define __TICKET_H__
#include <string>
#include <iostream>
#include "classes/class.h"

class Burger;

class Ticket {
    std::string date;
    std::string seat;
    Class *classOption;
    Burger *burgerOption;
    void printPrice();
    public:
    Ticket(std::string date);
    void modifyDate(std::string date);
    void upgradeClass();
    ~Ticket();
    friend std::ostream &operator<<(std::ostream out, Ticket &t);
};

#endif
