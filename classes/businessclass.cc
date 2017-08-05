#include "ticket.h"

class BusinessClassTicket: public Ticket {
    int price() override { return 500; }
    std::string description() override { return "business class"; }
};
