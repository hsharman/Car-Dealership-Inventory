//
// Created by Harry on 2/4/2023.
//

#ifndef M1OEP_HSHARMAN_CAR_H
#define M1OEP_HSHARMAN_CAR_H



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
    int mileage;

public:

    /*
     * Default constructor
     */
    Car();




    /*
     * Constructor
     */
    Car(int yr, string mk, string mdl, double prc, int mlge){
        int year = yr;
        string make = mk;
        string model = mdl;
        double price = prc;
        int mileage = mlge;


    }






    vector<Car> DealershipInventory;




    // getters

    int getVehicleYear();

    string getVehicleMake() ;

    string getVehicleModel();

    int getVehiclePrice();

    int getVehicleMileage();


    // setters

    void setVehicleYear(int yr);

    void setVehicleMake(string mk);

    void setVehicleModel(string mdl);

    void setVehiclePrice(int prc);

    void setVehicleMileage(int mlge);










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

#endif //M1OEP_HSHARMAN_CAR_H