#include "protein.h"
using namespace std;

Protein::Protein(shared_ptr<Burger> component, string proteinType):
    Decorator{component}, price{3}, proteinType{proteinType}{}

int Protein::getPrice() { return component->getPrice() + price; }

string Protein::description() {
    return component->description() + " with " + proteinType;
}
