#include "class.h"

class BusinessClass: public Class {
    int price() override { return 500; }
    std::string description() override { return "business"; }
};
