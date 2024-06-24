#include "CargoAircraft.h"

CargoAircraft::CargoAircraft(std::string model, double fuelConsumption, double flightRange, double cargoCapacity)
    : Aircraft(model, fuelConsumption, flightRange, cargoCapacity), cargoCapacity(cargoCapacity) {}

double CargoAircraft::getCargoCapacity() const { return cargoCapacity; }
void CargoAircraft::setCargoCapacity(double cargoCapacity) { this->cargoCapacity = cargoCapacity; }

std::string CargoAircraft::toString() const {
    return Aircraft::toString() + ", Cargo Capacity: " + std::to_string(cargoCapacity) + " tons";
}




