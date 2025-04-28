// Mary Dalton
// CIS 1202 501
// April 27, 2025

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>


class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;
    
public:
    Vehicle(std::string mfr = "", int year = 0);
    
    //getters
    std::string getManufacturer() const;
    int getYearBuilt() const;
    
    //setters
    void setManufacturer(const std::string& mfr);
    void setYearBuilt(int year);
    
    virtual void displayInfo() const;
};

#endif

