#include "Aircraft.h"

Aircraft::Aircraft(std::string model, double fuelConsumption, double flightRange, double capacity)
    : model(model), fuelConsumption(fuelConsumption), flightRange(flightRange), capacity(capacity) {}

std::string Aircraft::getModel() const { return model; }
double Aircraft::getFuelConsumption() const { return fuelConsumption; }
double Aircraft::getFlightRange() const { return flightRange; }
double Aircraft::getCapacity() const { return capacity; }

void Aircraft::setModel(const std::string &model) { this->model = model; }
void Aircraft::setFuelConsumption(double fuelConsumption) { this->fuelConsumption = fuelConsumption; }
void Aircraft::setFlightRange(double flightRange) { this->flightRange = flightRange; }
void Aircraft::setCapacity(double capacity) { this->capacity = capacity; }

std::string Aircraft::toString() const {
    return "Model: " + model + ", Fuel Consumption: " + std::to_string(fuelConsumption) +
           ", Flight Range: " + std::to_string(flightRange) + ", Capacity: " + std::to_string(capacity);
}

std::ostream& operator<<(std::ostream &os, const Aircraft &aircraft) {
    os << aircraft.toString();
    return os;
}

