#include "subject.h"

void Subject::attachObserver(Observer &o) {
    observers.push_back(&o);
}

void Subject::detachObserver(Observer &o) {
    for (unsigned int i = 0; i < observers.size(); ++i) {
        if (observers[i] == &o) {
            observers.erase(observers.begin() + i);
            break;
        }
    }
}

void Subject::notifyObservers() {
    for (auto observer: observers) observer->notify();
}

Subject::~Subject() {}
