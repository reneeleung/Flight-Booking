#include "lettuce.h"
using namespace std;

Lettuce::Lettuce(shared_ptr<Burger> component): Decorator{component}, price{1}{}

int Lettuce::getPrice() { return component->getPrice() + price; }

string Lettuce::description() {
    return component->description() + " with lettuce";
}
