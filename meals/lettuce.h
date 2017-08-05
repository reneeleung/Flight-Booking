#ifndef __LETTUCE_H__
#define __LETTUCE_H__
#include "decorator.h"
#include <string>

class Lettuce: public Decorator {
    const int price;
    public:
    Lettuce(Burger *component);
    int getPrice() override;
    std::string description() override;
};

#endif
