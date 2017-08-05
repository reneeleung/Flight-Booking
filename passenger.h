#ifndef __PASSENGER_H__
#define __PASSENGER_H__
#include <string>
#include <vector>

class Ticket;

class Passenger {
    std::string name;
    int age;
    std::vector <Ticket *> booked_tickets;
    public:
    Passenger(std::string name, int age);
    void addTicket(Ticket &ticket);
    void removeTicket(Ticket &ticket);
    void printBookedTickets();
    ~Passenger();
};
#endif
