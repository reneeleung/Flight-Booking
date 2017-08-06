#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include "burger.h"

class Decorator: public Burger {
    protected:
    Burger *component;
    public:
    Decorator(Burger *component): component{component}{}
    virtual ~Decorator() { delete component; }
};

#endif
