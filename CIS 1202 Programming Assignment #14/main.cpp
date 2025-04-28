// Mary Dalton
// CIS 1202 501
// April 27, 2025


#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int yearBuilt, numDoors, towingCapacity;
    
    cout << "Vehicle Program" << endl << endl;
    
    //Test for Vehicle class
    cout << "Vehicle:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore();
    
    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Information:\n";
    vehicle.displayInfo();
    cout << endl;
    
    //Test for Car class
    cout << "\nCar:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors: ";
    cin >> numDoors;
    cin.ignore();
    
    Car car(manufacturer, yearBuilt, numDoors);
    cout << "Vehicle Information:\n";
    car.displayInfo();
    cout << endl;
    
    //Test for Truck class
    cout << "\nTruck:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;
    cin.ignore();
    
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "\nVehicle Information:\n";
    truck.displayInfo();
    cout << endl;
    
    return 0;
}
