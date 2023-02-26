//
// Created by Harry Sharman on 2/26/23.
//

#include "offroadVehicle.h"


offroadVehicle::offroadVehicle() {
    int year;
    string make;
    string model;
    double price;
    int mileage;
    double groundClearance;
    bool winchAttached;
    string tireSize;
}

// Getters
double offroadVehicle::getGroundClearance() const{
    return groundClearance;

}

bool offroadVehicle::getWinchAttached() const{
    return winchAttached;
}

string offroadVehicle::getTireSize() const{
    return tireSize;
}


// Setters
void offroadVehicle::setGroundClearance(double grndClrnce){
    groundClearance = grndClrnce;
}

void offroadVehicle::setWinchAttached(bool wnch){
    winchAttached = wnch;
}

void offroadVehicle::setTireSize(string tirSz){
    tireSize = tirSz;
}
