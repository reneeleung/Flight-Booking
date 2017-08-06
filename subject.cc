#include "subject.h"

using namespace std;

void Subject::attachObserver(shared_ptr<Observer> o) {
    observers.emplace_back(o);
}

void Subject::detachObserver(shared_ptr<Observer> o) {
    for (unsigned int i = 0; i < observers.size(); ++i) {
        if (observers[i] == o) {
            observers.erase(observers.begin() + i);
            break;
        }
    }
}

void Subject::notifyObservers() {
    for (auto observer: observers) observer->notify();
}

Subject::~Subject() {}
