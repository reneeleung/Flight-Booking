#include "passenger.h"
using namespace std;

Passenger::Passenger(string name, int age): name{name}, age{age}{}

Passenger::~Passenger() {
    for (auto ticket: booked_tickets) delete ticket;
}

void Passenger::addTicket(Ticket &ticket) {
    booked_tickets.push_back(&ticket);
}

void Passenger::removeTicket(Ticket &ticket) {
    for (unsigned i = 0; i < booked_tickets.size(); ++i) {
        if (booked_tickets[i] == &ticket) {
            booked_tickets.erase(booked_tickets.begin() + i);
            break;
        }
    }
}

void printBookedTickets() {
    for (auto ticket: booked_tickets) cout << *ticket << endl;
    if (age < 18) cout << "All above prices are 50% off" << endl;
}
