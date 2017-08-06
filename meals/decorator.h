#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include "burger.h"

class Decorator: public Burger {
    protected:
    std::shared_ptr<Burger> component;
    public:
    Decorator(std::shared_ptr<Burger> component): component{component}{}
    virtual ~Decorator() = default;
};

#endif
