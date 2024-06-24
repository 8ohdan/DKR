#include "Airline.h"
#include <algorithm>
#include <fstream>

Airline::Airline() : logger("log.txt") {}

Airline::~Airline() {
    for (Aircraft* aircraft : fleet) {
        delete aircraft;
    }
}

void Airline::addAircraft(Aircraft* aircraft) {
    fleet.push_back(aircraft);
    logEvent("Added aircraft: " + aircraft->toString());
}

double Airline::getTotalCapacity() const {
    double totalCapacity = 0.0;
    for (const Aircraft* aircraft : fleet) {
        totalCapacity += aircraft->getCapacity();
    }
    return totalCapacity;
}

double Airline::getTotalCargoCapacity() const {
    double totalCargoCapacity = 0.0;
    for (const Aircraft* aircraft : fleet) {
        const CargoAircraft* cargoAircraft = dynamic_cast<const CargoAircraft*>(aircraft);
        if (cargoAircraft) {
            totalCargoCapacity += cargoAircraft->getCargoCapacity();
        }
    }
    return totalCargoCapacity;
}

void Airline::sortAircraftByRange() {
    std::sort(fleet.begin(), fleet.end(), [](Aircraft* a, Aircraft* b) {
        return a->getFlightRange() > b->getFlightRange();
    });
    logEvent("Sorted aircraft by flight range");
}

std::vector<Aircraft*> Airline::findAircraftByFuelConsumption(double minConsumption, double maxConsumption) const {
    std::vector<Aircraft*> result;
    for (Aircraft* aircraft : fleet) {
        if (aircraft->getFuelConsumption() >= minConsumption && aircraft->getFuelConsumption() <= maxConsumption) {
            result.push_back(aircraft);
        }
    }
    return result;
}

void Airline::saveToFile(const std::string &filename) const {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const Aircraft* aircraft : fleet) {
            outFile << aircraft->toString() << "\n";
        }
        outFile.close();
        logEvent("Saved fleet data to file: " + filename);
    }
}

void Airline::logEvent(const std::string &event) {
    logger.log(event);
}






