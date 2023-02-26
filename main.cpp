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


    int year;
    string make;
    string model;
    double price;
    int mileage;

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

                /*
                 * Set Year
                 */
                cout << "Enter the year of the car (1908-2024): ";
                while (true) {
                    if (cin >> year && (year >= 1908 && year <= 2024)) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a year 1908-2024!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }
                userCar.setVehicleYear(year);

                /*
                 * Set Make
                 */
                cout << "Enter the make of the car" << endl;
                getline(cin, make);
                cin.clear();
                userCar.setVehicleMake(make);

                /*
                 * Set Model
                 */
                cout << "Enter the model of the car" << endl;
                getline(cin, model);
                cin.clear();
                userCar.setVehicleModel(model);


                /*
                 * Set Price
                 */
                cout << "Enter the price of the vehicle: ";
                while (true) {
                    if (cin >> price && price >= 0) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a valid price!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }
                userCar.setVehiclePrice(price);


                /*
                 * Set Mileage
                 */
                cout << "Enter the mileage of the vehicle: ";
                while (true) {
                    if (cin >> mileage && mileage >= 0) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a valid mileage!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }

                userCar.setVehicleMileage(mileage);

                VehicleInventory.push_back(userCar);

                break;

            // Convertible
            case 2:
                /*
                 * Set Year
                 */
                cout << "Enter the year of the convertible (1908-2024): ";
                while (true) {
                    if (cin >> year && (year >= 1908 && year <= 2024)) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a year 1908-2024!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }
                userConvertible.setVehicleYear(year);

                /*
                 * Set Make
                 */
                cout << "Enter the make of the convertible" << endl;
                getline(cin, make);
                cin.clear();
                userConvertible.setVehicleMake(make);

                /*
                 * Set Model
                 */
                cout << "Enter the model of the convertible" << endl;
                getline(cin, model);
                cin.clear();
                userConvertible.setVehicleModel(model);


                /*
                 * Set Price
                 */
                cout << "Enter the price of the convertible: ";
                while (true) {
                    if (cin >> price && price >= 0) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a valid price!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }
                userConvertible.setVehiclePrice(price);


                /*
                 * Set Mileage
                 */
                cout << "Enter the mileage of the convertible: ";
                while (true) {
                    if (cin >> mileage && mileage >= 0) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a valid mileage!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }

                userConvertible.setVehicleMileage(mileage);

                char spoilerChoice;
                cout << "Does the vehicle have a spoiler> (Y/N) " << endl;
                while (true) {
                    if (cin >> spoilerChoice && (spoilerChoice == 'Y' || spoilerChoice == 'y' || spoilerChoice == 'N' || spoilerChoice == 'n')) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter Y/N!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }

                userConvertible.setSpoiler(spoilerChoice);

                int topLength;
                cout << "What's the length of the top? " << endl;
                while (true) {
                    if (cin >> topLength && (topLength > 0)) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a valid top length!!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }

                userConvertible.setConvertibleTopLength(topLength);

                int horsepower;
                cout << "Does the vehicle have a spoiler> (Y/N) " << endl;
                while (true) {
                    if (cin >> horsepower && horsepower > 0) {
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Please enter a valid horsepower number!\n" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                }
                userConvertible.setHorsePower(horsepower);


                VehicleInventory.push_back(userConvertible);

                break;

                // Off-Road Vehicle
            case 3:
                cout << "Off-Road Vehicle" << endl;
               /* userOffRoadVehicle.setVehicleYear(userOffRoadVehicle.getVehicleYear(cout, cin));
                userOffRoadVehicle.setVehicleMake(userOffRoadVehicle.getVehicleMake(cout, cin));
                userOffRoadVehicle.setVehicleModel(userOffRoadVehicle.getVehicleModel(cout, cin));
                userOffRoadVehicle.setVehiclePrice(userOffRoadVehicle.getVehiclePrice(cout, cin));
                userOffRoadVehicle.setVehicleMileage(userOffRoadVehicle.getVehicleMileage(cout, cin));*/

                VehicleInventory.push_back(userOffRoadVehicle);

                break;

            // SUV
            case 4:
                cout << "SUV" << endl;

                VehicleInventory.push_back(userSUV);

                break;

            // Truck
            case 5:
                cout << "Truck" << endl;

                VehicleInventory.push_back(userTruck);

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
