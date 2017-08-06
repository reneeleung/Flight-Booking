#ifndef __TICKET_H__
#define __TICKET_H__
#include <string>
#include <iostream>
#include "classes/class.h"
#include "flight.h"

class Burger;

class Ticket {
    std::string seat;
    std::unique_ptr<Flight> &flight;
    std::unique_ptr<Class> classOption;
    std::shared_ptr<Burger> burgerOption;
    void printPrice();
    public:
    Ticket(std::unique_ptr<Flight> &flight);
    Ticket(const Ticket &) = default;
    void modifyDate(std::string date);
    void upgradeClass();
    ~Ticket();
    friend std::ostream &operator<<(std::ostream &out, Ticket &t);
};

#endif
