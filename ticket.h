#ifndef __TICKET_H__
#define __TICKET_H__
#include <string>
#include "classes/class.h"

class Burger;

class Ticket {
    std::string date;
    Class *classOption;
    Burger *burgerOption;
    public:
    Ticket(std::string date);
    void modifyDate(std::string date);
    void upgradeClass();
    int price();
    std::string description();
    ~Ticket();
};

#endif
