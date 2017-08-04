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
    cout << "Enter destination" << endl;
    cout << "a - Africa" << endl;
    cout << "e - Europe" << endl;
    cout << "as - Asia" << endl;
    cout << "na - North America" << endl;
    cout << "sa - South America" << endl;
    cout << "au - Australia" << endl;
    cout << "an - Antartica" << endl;
    delete passenger;
}
