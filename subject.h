#ifndef __SUBJECT_H__
#define __SUBJECT_H__
#include <vector>
#include "observer.h"

class Subject {
    protected:
        std::vector <Observer *> observers;
    public:
    virtual void attachObserver(Observer &o);
    virtual void detachObserver(Observer &o);
    virtual void notifyObservers();
    virtual ~Subject() = 0;
};

#endif
