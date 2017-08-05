#include "bookingmanager.h"
#include <iostream>

using namespace std;

BookingManager::BookingManager(Passenger &passenger): passenger{passenger}{
    cout << "Enter destination" << endl;
    cout << "a - Africa" << endl;
    cout << "e - Europe" << endl;
    cout << "as - Asia" << endl;
    cout << "na - North America" << endl;
    cout << "sa - South America" << endl;
    cout << "au - Australia" << endl;
    cout << "an - Antartica" << endl;
    string dest;
    while (1) {
        cin >> dest;
        if (dest == "a") break;
        if (dest == "e") break;
        if (dest == "as") break;
        if (dest == "na") break;
        if (dest == "sa") break;
        if (dest == "au") break;
        if (dest == "am") break;
        else continue;
    }
}
