#include "class.h"

class EconomyClass: public Class {
    int price() override { return 100; }
    std::string description() override { return "economy"; }
};
