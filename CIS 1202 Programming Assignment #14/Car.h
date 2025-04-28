// Mary Dalton
// CIS 1202 501
// April 27, 2025

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;
    
public:
    //Constructor
    Car(std::string mfr = "", int year = 0, int doors = 0);
    
    //Getter and setter
    int getNumDoors() const;
    void setNumDoors(int doors);
    
    //Override to display car info
    void displayInfo() const override;
};

#endif

