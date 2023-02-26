#include "SUV.h"
#include <string>
using namespace std;

SUV::SUV() {
    int year;
    string make;
    string model;
    double price;
    int mileage;
    int peopleCarryingCapacity;
    double trunkSize;
}

int SUV::getPeopleCarryingCapacity() const {
    return peopleCarryingCapacity;
}

double SUV::getTrunkSize() const {
    return trunkSize;
}

void SUV::setPeopleCarryingCapacity(int newPeopleCarryingCapacity) {
    peopleCarryingCapacity = newPeopleCarryingCapacity;
}

void SUV::setTrunkSize(double newTrunkSize) {
    trunkSize = newTrunkSize;
}
