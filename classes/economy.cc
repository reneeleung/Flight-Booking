#include "ticket.h"

class EconomyTicket: public Ticket {
    int price() override { return 100; }
    std::string description() override { return "economy"; }
};
