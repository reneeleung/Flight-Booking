#include "protein.h"
using namespace std;

Protein::Protein(Burger *component, string proteinType):
    Decorator{component}, price{3}, proteinType{proteinType}{}

int Protein::getPrice() { return component->getPrice() + price; }

string Protein::description() {
    return component->getDescription() + " with " + proteinType;
}
