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

public:

    /*
     * Default constructor
     */
    Car();


    /*
     * Constructor
     */
    Car(int yr, string mk, string mdl, double prc){
        int year = yr;
        string make = mk;
        string model = mdl;
        double price = prc;

    }





    /*
     * Enum of possible vehicle types
     */
    /*enum VehicleType{
        HATCHBACK,
        SALOON,
        WAGON,
        MID_SIZE_SUV,
        SUV,
        TRUCK
    };*/

    /*
     *  Struct of the characteristics of the car
     *//*
    struct Car{
        int year;
        string make;
        string model;
        double price;
        VehicleType type;
    };*/

    vector<Car> DealershipInventory;




    // getters

    int getVehicleYear(ostream &outs, istream &ins);

    string getVehicleMake(ostream &outs, istream &ins);

    string getVehicleModel(ostream &outs, istream &ins);

    int getVehiclePrice(ostream &outs, istream &ins);


    // setters

    void setVehicleYear();

    void setVehicleMake();

    void setVehicleModel();

    void setVehiclePrice();










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