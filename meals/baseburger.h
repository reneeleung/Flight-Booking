#ifndef __BASEBURGER_H__
#define __BASEBURGER_H__
#include "burger.h"

class BaseBurger: public Burger{
    public:
    int getPrice() override;
    std::string description() override;
};

#endif
