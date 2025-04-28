// Mary Dalton
// CIS 1202 501
// April 27, 2025

#include "Truck.h"

using namespace std;

Truck::Truck(string mfr, int year, int towingCapacity) : Vehicle(mfr, year), towingCapacity(towingCapacity) {}


int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing capacity: " << towingCapacity << endl;
}

