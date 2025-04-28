// Mary Dalton
// CIS 1202 501
// April 27, 2025

#include "Car.h"

using namespace std;

Car::Car(string mfr, int year, int doors) : Vehicle(mfr, year), numDoors(doors) {}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int doors) {
    numDoors = doors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Doors: " << numDoors << endl;
}

