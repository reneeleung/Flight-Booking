#include <iostream>
#include "flight.h"
#include "passenger.h"

using namespace std;

int main() {
    vector <unique_ptr <Flight>> flights;
    flights.emplace_back(new Flight{5, "AC100", "North Pole", "5 AUG 2017"});
    flights.emplace_back(new Flight{2, "AC101", "South Pole", "6 AUG 2017"});
    flights.emplace_back(new Flight{3, "AC102", "Vancouver", "8 AUG 2017"});
    string name;
    int age;
    cout << "Enter name: " << endl;
    getline(cin,name);
    cout << "Enter age: " << endl;
    cin >> age;
    cout << "Welcome, " << name << "!" << endl;
    shared_ptr<Passenger> user{new Passenger{name,age}};
    shared_ptr<Passenger> p1{new Passenger{"Seuss",10}};
    shared_ptr<Passenger> p2{new Passenger{"Potter",25}};
    for (auto &flight: flights) {
        flight->attachObserver(p1);
        flight->attachObserver(p2);
    }
    flights.back()->notifyObservers();
    while (1) {
        cout << "Select an option" << endl;
        cout << "a - add ticket" << endl;
        cout << "v - view tickets" << endl;
        cout << "c - change ticket" << endl;
        cout << "q - quit" << endl;
        char c;
        string dest;
        int tic;
        cin >> c;
        switch (c) {
            case 'a':
                cout << "Where would you like to go?" << endl;
                cin.ignore();
                getline(cin, dest);
                for (auto &flight: flights) {
                    if (flight->getDestination() == dest && !flight->full()) {
                        flight->attachObserver(user);
                        auto ticket = shared_ptr<Ticket>{new Ticket{flight}};
                        user->addTicket(ticket);
                        break;
                    } else if (flight->getDestination() == dest) {
                        cout << "Sorry, the flight is full." << endl;
                    }
                }
                break;
            case 'v':
                user->printBookedTickets(); break;
            case 'c':
                cout << "Press r to remove ticket or u to upgrade ticket" << endl;
                while (1) {
                    cin >> c;
                    if (c == 'r' || c == 'u') break;
                    cout << "Invalid command!" << endl;
                }
                cout << "Which ticket would you like to change?" << endl;
                cin >> tic;
                if (c == 'r') user->removeTicket(tic);
                if (c == 'u') user->upgradeTicket(tic);
                break;
            case 'q': break;
        }
        if (c == 'q') break;
    }
}

