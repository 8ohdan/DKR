#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include "Aircraft.h"
#include "PassengerAircraft.h"
#include "CargoAircraft.h"
#include "Logger.h"

class Airline {
private:
    std::vector<Aircraft*> fleet;
    Logger logger;

public:
    Airline();
    ~Airline();

    void addAircraft(Aircraft* aircraft);
    double getTotalCapacity() const;
    double getTotalCargoCapacity() const;
    void sortAircraftByRange();
    std::vector<Aircraft*> findAircraftByFuelConsumption(double minConsumption, double maxConsumption) const;
    void saveToFile(const std::string &filename) const;

    void logEvent(const std::string &event);
};

#endif 





