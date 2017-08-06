#ifndef __SUBJECT_H__
#define __SUBJECT_H__
#include <vector>
#include "observer.h"

class Subject {
    protected:
        std::vector <std::shared_ptr<Observer>> observers;
    public:
    virtual void attachObserver(std::shared_ptr<Observer> o);
    virtual void detachObserver(std::shared_ptr<Observer> o);
    virtual void notifyObservers();
    virtual ~Subject() = 0;
};

#endif
