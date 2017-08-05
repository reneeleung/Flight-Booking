#include "sauce.h"
using namespace std;

Sauce::Sauce(Burger *component, string sauceType):
    Decorator{component}, sauceType{sauceType}{}

int Sauce::getPrice() { return component->getPrice(); }

string Sauce::description() {
    return component->description() + " with " + sauceType;
}
    
