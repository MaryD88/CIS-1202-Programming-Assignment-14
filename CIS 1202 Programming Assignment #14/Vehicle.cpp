// Mary Dalton
// CIS 1202 501
// April 27, 2025

#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string mfr, int year) : manufacturer(mfr), yearBuilt(year) {}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int year) {
    yearBuilt = year;
}

void Vehicle::setManufacturer(const string& mfr) {
    manufacturer = mfr;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}
