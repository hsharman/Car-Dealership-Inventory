//
// Created by Harry Sharman on 2/26/23.
//


#ifndef M2OEP_HSHARMAN_WBRADFOR_OFFROADVEHICLE_H
#define M2OEP_HSHARMAN_WBRADFOR_OFFROADVEHICLE_H

#include "Car.h"

class offroadVehicle : public Car{

private:
    double groundClearance;
    bool winchAttached;
    string tireSize;


public:
    // Constructors
    offroadVehicle();

    offroadVehicle(int year, string make, string model, int price, int mileage,
                   double groundClearace, bool winchAttached, string tireSize);

    // Getters
    double getGroundClearance();

    bool getWinchAttached();

    string getTireSize();


    // Setters
    void setGroundClearance(double grndClrnce);

    void setWinchAttached(bool wnch);

    void setTireSize(string tirSz);


};





#endif //M2OEP_HSHARMAN_WBRADFOR_OFFROADVEHICLE_H
