//
// Created by Harry Sharman on 1/31/23.
//

#include "car.h"
#include <iostream>

using namespace std;

int main() {

    Car dealership;


    int userVehicleTypeNum;
    int userVehicleYear;
    string userVehicleMake;
    string userVehicleModel;
    int userVehiclePrice;
    int addAnotherVehicle;


    cout << "Welcome\n" << endl;

    while(true){
        // Print instructions
        dealership.initialInstructions();
        // Get vehicle Year
        userVehicleYear = dealership.getVehicleYear(cout, cin);
        // Get vehicle Make
        userVehicleMake = dealership.getVehicleMake(cout, cin);
        // Get vehicle Model
        userVehicleModel = dealership.getVehicleModel(cout, cin);
        // Get vehicle Price
        userVehiclePrice = dealership.getVehiclePrice(cout, cin);


        // Get vehicle type
        userVehicleTypeNum = dealership.getVehicleType(cout, cin);
        switch(userVehicleTypeNum){
            case 1: cout << "Hatchback" << endl;
                dealership.addCar(userVehicleYear, userVehicleMake, userVehicleModel, userVehiclePrice, CarDealership::HATCHBACK);
                break;
            case 2: cout << "Saloon" << endl;
                dealership.addCar(userVehicleYear, userVehicleMake, userVehicleModel, userVehiclePrice, CarDealership::SALOON);
                break;
            case 3: cout << "SUV" << endl;
                dealership.addCar(userVehicleYear, userVehicleMake, userVehicleModel, userVehiclePrice, CarDealership::SUV);
                break;
            case 4: cout << "Mid Size SUV" << endl;
                dealership.addCar(userVehicleYear, userVehicleMake, userVehicleModel, userVehiclePrice, CarDealership::MID_SIZE_SUV);
                break;
            case 5: cout << "Truck" << endl;
                dealership.addCar(userVehicleYear, userVehicleMake, userVehicleModel, userVehiclePrice, CarDealership::TRUCK);

                break;

        }

        // Determine if user wants to add another vehicle

        addAnotherVehicle = dealership.addAnotherVehicle(cout, cin);
        if(addAnotherVehicle == 2){
            break;
        }

    }







    dealership.printInventory();





}