#include "class.h"

class FirstClass: public Class {
    int price() override { return 1000; }
    std::string description() override { return "first"; }
};
