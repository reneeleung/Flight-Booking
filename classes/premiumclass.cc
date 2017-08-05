#include "class.h"

class PremiumClass: public Class {
    int price() override { return 200; }
    std::string description() override { return "premium economy"; }
};
