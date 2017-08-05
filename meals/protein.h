#ifndef __PROTEIN_H__
#define __PROTEIN_H__
#include "decorator.h"
#include <string>

class Protein: public Decorator {
    const int price;
    const std::string proteinType;
    public:
    Protein(Burger *component, std::string proteinType);
    int getPrice() override;
    std::string description() override;
};

#endif
