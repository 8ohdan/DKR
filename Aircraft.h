#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
#include <iostream>

class Aircraft {
protected:
    std::string model;
    double fuelConsumption; 
    double flightRange; 
    double capacity; 

public:
    Aircraft(std::string model, double fuelConsumption, double flightRange, double capacity);
    virtual ~Aircraft() {}

    std::string getModel() const;
    double getFuelConsumption() const;
    double getFlightRange() const;
    double getCapacity() const;

    void setModel(const std::string &model);
    void setFuelConsumption(double fuelConsumption);
    void setFlightRange(double flightRange);
    void setCapacity(double capacity);

    virtual std::string toString() const;

    friend std::ostream& operator<<(std::ostream &os, const Aircraft &aircraft);
};

#endif 
