#include "ticket.h"
#include "classes/economyclass.cc"
#include "classes/premiumclass.cc"
#include "classes/businessclass.cc"
#include "classes/firstclass.cc"
#include "meals/baseburger.h"
#include "meals/protein.h"
#include "meals/lettuce.h"
#include "meals/sauce.h"
#include <iostream>

using namespace std;

Ticket::Ticket(Flight *flight): flight{flight}, burgerOption{new BaseBurger}{
    cout << "Select your class" << endl;
    cout << "e - economy" << endl;
    cout << "p - premium economy" << endl;
    cout << "b - business" << endl;
    cout << "f - first" << endl;
    char selectClass;
    while (1) {
        cin >> selectClass;
        switch (selectClass) {
            case 'e': classOption = new EconomyClass; break;
            case 'p': classOption = new PremiumClass; break;
            case 'b': classOption = new BusinessClass; break;
            case 'f': classOption = new FirstClass; break;
            default: cout << "Invalid class" << endl; continue;
        }
        break;
    }
    cout << "Enter seat" << endl;
    cin >> seat;
    cout << "Customize your burger" << endl;
    cout << "p - add proteins" << endl;
    cout << "l - add lettuce" << endl;
    cout << "s - add sauce" << endl;
    cout << "q - stop" << endl;
    char selectBurger;
    while (1) {
        cin >> selectBurger;
        if (selectBurger == 'q') break;
        string type;
        switch (selectBurger) {
            case 'p':
                cout << "What kind of protein would you like?" << endl;
                cin.ignore();
                getline(cin,type);
                burgerOption = new Protein(burgerOption, type); break;
            case 'l': burgerOption = new Lettuce(burgerOption); break;
            case 's':
                cout << "What kind of sauce would you like?" << endl;
                cin.ignore();
                getline(cin,type);
                burgerOption = new Sauce(burgerOption, type); break;
        }
    }
    cout << "You ordered " << burgerOption->description() << endl;
}

Ticket::~Ticket() {
    delete classOption;
    delete burgerOption;
}


void Ticket::upgradeClass() {
    if (classOption->description() == "first") {
        cout << "Already at highest class!" << endl;
        return;
    }
    string s = classOption->description();
    delete classOption;
    if (s == "business") classOption = new FirstClass;
    if (s == "premium economy") classOption = new BusinessClass;
    if (s == "economy") classOption = new PremiumClass;
}

void Ticket::printPrice() {
    int class_price = classOption->price();
    int burger_price = burgerOption->getPrice();
    cout << classOption->description() << " class: " << class_price << endl;
    cout << burgerOption->description() << ": " << burger_price << endl;
    cout << "Total: " << class_price + burger_price << endl;
}

ostream &operator<<(ostream &out, Ticket &t) {
    out << "Date: " << t.flight->getDate() << endl;
    out << "Flight #: " << t.flight->getFlightNumber() << endl;
    out << "Destination: " << t.flight->getDestination() << endl;
    out << "Seat: " << t.seat << endl;
    t.printPrice();
    return out;
}
