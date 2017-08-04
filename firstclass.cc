#include "ticket.h"

class FirstClassTicket: public Ticket {
    int price() override { return 1000; }
    std::string description() override { return "first class"; }
};
