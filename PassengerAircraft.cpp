#include "PassengerAircraft.h"

PassengerAircraft::PassengerAircraft(std::string model, double fuelConsumption, double flightRange, int passengerCapacity)
    : Aircraft(model, fuelConsumption, flightRange, passengerCapacity), passengerCapacity(passengerCapacity) {}

int PassengerAircraft::getPassengerCapacity() const { return passengerCapacity; }
void PassengerAircraft::setPassengerCapacity(int passengerCapacity) { this->passengerCapacity = passengerCapacity; }

std::string PassengerAircraft::toString() const {
    return Aircraft::toString() + ", Passenger Capacity: " + std::to_string(passengerCapacity);
}


