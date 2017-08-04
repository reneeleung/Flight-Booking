#ifndef __TICKET_H__
#define __TICKET_H__
#include <string>

class Ticket {
    virtual int price() = 0;
    virtual std::string description();
    virtual ~Ticket() = default;
};

#endif
