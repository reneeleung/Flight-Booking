#include <iostream>
#include "bookingmanager.h"
#include "passenger.h"

using namespace std;

int main() {
    string name;
    int age;
    cout << "Enter name: " << endl;
    getline(cin,name);
    cout << "Enter age: " << endl;
    cin >> age;
    Passenger *passenger = new Passenger(name,age);
    cout << "Welcome, " << name << "!" << endl;
    BookingManager manager{*passenger};
    delete passenger;
}

