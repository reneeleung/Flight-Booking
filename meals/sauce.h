#ifndef __SAUCE_H__
#define __SAUCE_H__
#include "decorator.h"

class Sauce: public Decorator {
    const std::string sauceType;
    public:
    Sauce(Burger *component, std::string sauceType);
    int getPrice() override;
    std::string description() override;
};

#endif
