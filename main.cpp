//
// Created by Harry Sharman on 1/31/23.
//

#include "Car.h"
#include "convertible.h"
#include "offroadVehicle.h"
#include "SUV.h"
#include "truck.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "Welcome to the car inventory program\n" << endl;

    // Initialize car inventory vector
    vector<Car> VehicleInventory;


    // Set the filename
    string filename = "../Car_Inventory.csv";

    while (true){

        // Determine what kind of vehicle the user wants to input

        int vehicleChoice;

        while(true) {
            cout << "What kind of vehicle would you like to add? " << endl;
            cout << "(1)Generic Car (2)Convertible (3)Off-Road Vehicle (4)SUV (5)Truck " << endl;
            if (cin >> vehicleChoice && (vehicleChoice == 1 | vehicleChoice == 2 | vehicleChoice == 3 | vehicleChoice == 4 | vehicleChoice == 5)) {
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                break;
            }
            cout << "Please enter a number 1-5!\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }



        // Switch statement asking for all elements of that particular vehicle
        Car userCar;
        Convertible userConvertible;
        offroadVehicle userOffRoadVehicle;
        SUV userSUV;
        Truck userTruck;
        switch(vehicleChoice){
            // Generic Car

            case 1:
                userCar.setVehicleYear(userCar.getVehicleYear(cout, cin));
                userCar.setVehicleMake(userCar.getVehicleMake(cout, cin));
                userCar.setVehicleModel(userCar.getVehicleModel(cout, cin));
                userCar.setVehiclePrice(userCar.getVehiclePrice(cout, cin));
                userCar.setVehicleMileage(userCar.getVehicleMileage(cout, cin));

                break;

            // Convertible
            case 2:
                cout << "Convertible" << endl;
                userConvertible.setVehicleYear(userConvertible.getVehicleYear(cout, cin));
                userConvertible.setVehicleMake(userConvertible.getVehicleMake(cout, cin));
                userConvertible.setVehicleModel(userConvertible.getVehicleModel(cout, cin));
                userConvertible.setVehiclePrice(userConvertible.getVehiclePrice(cout, cin));
                userConvertible.setVehicleMileage(userConvertible.getVehicleMileage(cout, cin));
                userConvertible.setSpoiler(userConvertible.getSpoiler(cout, cin));
                userConvertible.setConvertibleTopLength(userConvertible.getConvertibleTopLength(cout, cin));
                userConvertible.setHorsePower(userConvertible.getHorsePower(cout, cin));

                break;

                // Off-Road Vehicle
            case 3:
                cout << "Off-Road Vehicle" << endl;
                break;

            // SUV
            case 4:
                cout << "SUV" << endl;
                break;

            // Truck
            case 5:
                cout << "Truck" << endl;
                break;

        }


        // Add vehicle to vector inventory vector

        // Print how many vehicles are in inventory

        // Ask if user wants to add another vehicle to the inventory


        break;
    }

    // Write vector elements to .csv file



    /*Car dealership;


    int userVehicleTypeNum;
    int userVehicleYear;
    string userVehicleMake;
    string userVehicleModel;
    int userVehiclePrice;
    int addAnotherVehicle;




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
*/






    //dealership.printInventory();





}