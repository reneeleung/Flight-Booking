#include "ticket.h"
#include "economyclass.cc"
#include "premiumclass.cc"
#include "businessclass.cc"
#include "firstclass.cc"
#include <iostream>

using namespace std;

Ticket(string date): date{date} {
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
            default: continue;
        }
        break;
    }

}
