#ifndef CARGOAIRCRAFT_H
#define CARGOAIRCRAFT_H

#include "Aircraft.h"

class CargoAircraft : public Aircraft {
private:
    double cargoCapacity; 

public:
    CargoAircraft(std::string model, double fuelConsumption, double flightRange, double cargoCapacity);

    double getCargoCapacity() const;
    void setCargoCapacity(double cargoCapacity);

    std::string toString() const override;
};

#endif 



