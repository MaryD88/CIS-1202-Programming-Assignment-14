// Mary Dalton
// CIS 1202 501
// April 27, 2025

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"


class Truck : public Vehicle {
private:
    int towingCapacity;
    
public:
    // Constructor
    Truck(std::string mfr = "", int year = 0, int towingCapacity = 0);

    //Getter and setter
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);
    
    //Override display truck info
    void displayInfo() const override;
};

#endif

