#ifndef __BURGER_H__
#define __BURGER_H__
#include <string>

class Burger {
    public:
    virtual int getPrice() = 0;
    virtual std::string description() = 0;
    virtual ~Burger() = default;
};

#endif
