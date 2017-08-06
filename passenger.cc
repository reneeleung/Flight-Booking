#include "passenger.h"
using namespace std;

Passenger::Passenger(string name, int age): name{name}, age{age}{}

Passenger::~Passenger() {}

void Passenger::addTicket(shared_ptr<Ticket> &ticket) {
    booked_tickets.push_back(ticket);
}

void Passenger::notify() {
    cout << name << "'s flight is delayed" << endl;
}

void Passenger::removeTicket(int i) {
    if (i >= booked_tickets.size()) {
        cout << "Invalid ticket" << endl; return;
    }
    booked_tickets.erase(booked_tickets.begin() + i);
}

void Passenger::upgradeTicket(int i) {
    if (i >= booked_tickets.size()) {
        cout << "Invalid ticket" << endl; return;
    }
    booked_tickets[i]->upgradeClass();
}
void Passenger::printBookedTickets() {
    int i = 0;
    for (auto ticket: booked_tickets) {
        cout << "Ticket " << i << endl;
        cout << *ticket << endl;
        i++;
    }
    if (age < 18) cout << "All above prices are 50% off" << endl;
}
