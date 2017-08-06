#ifndef __CLASS_H__
#define __CLASS_H__
#include <string>

class Class {
    public:
    virtual int price() = 0;
    virtual std::string description() = 0;
    virtual ~Class() = default;
};

#endif
