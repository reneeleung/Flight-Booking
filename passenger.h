#ifndef __PASSENGER_H__
#define __PASSENGER_H__
#include <string>
#include <vector>
#include "observer.h"
#include "ticket.h"

class Passenger: public Observer {
    std::string name;
    int age;
    std::vector <Ticket *> booked_tickets;
    public:
    Passenger(std::string name, int age);
    void addTicket(Ticket &ticket);
    void removeTicket(int i);
    void upgradeTicket(int i);
    void printBookedTickets();
    void notify() override;
    ~Passenger();
};
#endif
