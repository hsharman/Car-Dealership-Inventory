#ifndef M2OEP_HSHARMAN_WBRADFOR_TRUCK_H
#define M2OEP_HSHARMAN_WBRADFOR_TRUCK_H

#include "Car.h"

class Truck :: public Car {
private:
int bedLength;
int towingCapacity
bool liftKit;

public:

    // Constructors
    Truck();

    Truck(int year, string make, string model, double price, VehicleType type,
        int bedLength, int towingCapcity, bool liftKit);

    // Getter
    int getBedLength() const;

    int getTowingCapacity() const;

    bool getLiftKit() const;

    // Setter
    void setBedLength(int newBedLength);

    void setTowingCapacity(int newTowingCapacity);

    void setLiftKit(bool newLiftKit);

};


#endif //M2OEP_HSHARMAN_WBRADFOR_TRUCK_H
