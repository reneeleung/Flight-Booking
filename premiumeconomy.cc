#include "ticket.h"

class PremiumEconomyTicket: public Ticket {
    int price() override { return 200; }
    std::string description() override { return "premium economy"; }
};
