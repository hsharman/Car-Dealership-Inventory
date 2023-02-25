//
// Created by Harry on 2/4/2023.
//

#ifndef M1OEP_HSHARMAN_CAR_H
#define M1OEP_HSHARMAN_CAR_H

#endif //M1OEP_HSHARMAN_CAR_H

#include <vector>
#include <string>
#include <iostream>
#include <ctype.h>
#include <limits>

using namespace std;
using std::numeric_limits;

class Car{

private:
    int year;
    string make;
    string model;
    double price;

public:

    /*
     * Default constructor
     */
    Car();



    /*
     * Enum of possible vehicle types
     */
    enum VehicleType{
        HATCHBACK,
        SALOON,
        WAGON,
        MID_SIZE_SUV,
        SUV,
        TRUCK
    };


    /*
     * Constructor
     */
    Car(int yr, string mk, string mdl, double prc, VehicleType vtyp){
        int year = yr;
        string make = mk;
        string model = mdl;
        VehicleType type = vtyp;
        double price = prc;

    }






    vector<Car> DealershipInventory;




    // getters

    int getVehicleYear() const;

    string getVehicleMake() const;

    string getVehicleModel() const;

    VehicleType getVehicleType() const;

    int getVehiclePrice() const;


    // setters

    void setVehicleYear(int yr);

    void setVehicleMake(string mk);

    void setVehicleModel(string mdl);

    void setVehicleType(VehicleType typ);

    void setVehiclePrice(int prc);










    //int getVehicleType(ostream &outs, istream &ins);







    /*  int addAnotherVehicle(ostream &outs, istream &ins);
    void printYearInstructions(ostream &outs);
    string printMakeInstructions(ostream &outs);
    string printModelInstructions(ostream &outs);
    void printPriceInstructions(ostream &outs);
    void printVehicleTypeInstructions(ostream &outs);
    void printAddAnotherVehicleInstructions(ostream &outs);*/


/*
 *  void addCar(int year, string make, string model, double price, VehicleType type);
    void printInventory();
    void initialInstructions();*/



};