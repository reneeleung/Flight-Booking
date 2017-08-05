#include "passenger.h"
using namespace std;

Passenger::Passenger(string name, int age): name{name}, age{age}{}

Passenger::~Passenger() {
    for (auto ticket: booked_tickets) delete ticket;
}
