#include <iostream>
#include "flight.h"
#include "passenger.h"

using namespace std;

int main() {
    vector <Flight> flights;
    flights.emplace_back(5, "AC100", "North Pole", "5 AUG 2017");
    flights.emplace_back(2, "AC101", "South Pole", "5 AUG 2017");
    flights.emplace_back(3, "AC102", "Vancouver", "5 AUG 2017");
    string name;
    int age;
    cout << "Enter name: " << endl;
    getline(cin,name);
    cout << "Enter age: " << endl;
    cin >> age;
    cout << "Welcome, " << name << "!" << endl;
    Passenger user(name,age);
    Passenger p1("A child passenger",10);
    Passenger p2("An adult passenger",25);
    for (auto flight: flights) {
        flight.attachObserver(p1);
        flight.attachObserver(p2);
    }
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
                for (auto flight: flights) {
                    if (flight.getDestination() == dest && !flight.full()) {
                        flight.attachObserver(user);
                        Ticket *ticket = new Ticket{flight};
                        user.addTicket(*ticket);
                        break;
                    } else if (flight.getDestination() == dest) {
                        cout << "Sorry, the flight is full." << endl;
                    }
                }
                break;
            case 'v':
                user.printBookedTickets(); break;
            case 'c':
                cout << "Press r to remove ticket or u to upgrade ticket" << endl;
                while (1) {
                    cin >> c;
                    if (c == 'r' || c == 'u') break;
                    cout << "Invalid command!" << endl;
                }
                cout << "Which ticket would you like to change?" << endl;
                user.printBookedTickets();
                cin >> tic;
                if (c == 'r') user.removeTicket(tic);
                else user.upgradeTicket(tic);
                break;
            case 'q': return 0;
        }
    }

}

