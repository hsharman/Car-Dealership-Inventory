#include "truck.h"
#include <string>
using namespace std;

    Truck::Truck() {
    int year;
    string make;
    string model;
    double price;
    VehicleType type;
    int bedLength;
    int towingCapcity;
    bool liftKit;
    }

    int Truck::getBedLength() const {
        return bedLength;
    }

    int Truck::getTowingCapacity() const {
        return towingCapacity;
    }

    bool Truck::getLiftKit() const {
        return liftKit;
    }

    // Setter
    void Truck::setBedLength(int newBedLength) {
        bedLength = newBedLength;
    }

    void Truck::setTowingCapacity(int newTowingCapacity) {
        towingCapacity = newTowingCapacity;
    }

    void Truck::setLiftKit(bool newLiftKit) {
        liftKit = newLiftKit;
    }




