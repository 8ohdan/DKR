#ifndef PASSENGERAIRCRAFT_H
#define PASSENGERAIRCRAFT_H

#include "Aircraft.h"

class PassengerAircraft : public Aircraft {
private:
    int passengerCapacity;

public:
    PassengerAircraft(std::string model, double fuelConsumption, double flightRange, int passengerCapacity);
    
    int getPassengerCapacity() const;
    void setPassengerCapacity(int passengerCapacity);

    std::string toString() const override;
};

#endif 


