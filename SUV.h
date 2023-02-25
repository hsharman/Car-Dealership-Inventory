#ifndef M2OEP_HSHARMAN_WBRADFOR_SUV_H
#define M2OEP_HSHARMAN_WBRADFOR_SUV_H

#include "car.h"

class SUV : public Car{
private:
    int peopleCarryingCapacity;
    double trunkSize;
public:

    // Constructors
    SUV();
    SUV(int year, string make, string model, double price, VehicleType type, int peopleCarryingCapacity,
        double trunkSize);

    // Getter
    int getPeopleCarryingCapacity() const;
    double getTrunkSize() const;

    // Setter
    void setPeopleCarryingCapacity(int newPeopleCarryingCapacity);
    void setTrunkSize(double newTrunkSize);


};



#endif //M2OEP_HSHARMAN_WBRADFOR_SUV_H
