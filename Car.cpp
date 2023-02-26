//
// Created by Harry on 2/4/2023.
//
#include "Car.h"

Car::Car(){
    int year;
    string make;
    string model;
    double price;
    int mileage;

}


/*
 * Gets the vehicle year
 */
int Car::getVehicleYear() const{
    return year;

}

/*
 * Gets the vehicle make
 */
string Car::getVehicleMake() const{
    return make;


}

/*
 * Gets the vehicle model
 */
string Car::getVehicleModel() const{
    return model;
}


/*
 * Gets the vehicle price
 */
int Car::getVehiclePrice() const{
    return price;
}

/*
 * Gets the vehicle milleage
 */
int Car::getVehicleMileage() const {
    return mileage;
}


/*
 * Set Vehicle Year
 */
void Car::setVehicleYear(int yr) {
    year = yr;

}

/*
 * Set Vehicle Make
 */
void Car::setVehicleMake(string mk) {
    make = mk;

}

/*
 * Set Vehicle Model
 */
void Car::setVehicleModel(string mdl) {
    model = mdl;

}


/*
 * Set Vehicle Price
 */
void Car::setVehiclePrice(int prc) {
    price = prc;

}

/*
 * Set Vehicle Mileage
 */
void Car::setVehicleMileage(int mlge) {
    mileage = mlge;
}


/*
     * Add car to the vector 'DealershipInventory'
     *//*
void Car::addCar(int year, string make, string model, double price, VehicleType type){
    // Create car
    Car car;

    // Set each thing
    car.year = year;
    car.make = make;
    car.model = model;
    car.price = price;
    car.type = type;

    // add car to the inventory

    DealershipInventory.push_back(car);


}*/


/*
     * Prints out the inventory of the dealership
     */
/*void Car::printInventory() {
    cout << "\nCars in inventory: " << DealershipInventory.size() << endl;
    for (int i = 0; i < DealershipInventory.size(); i++) {
        cout << "Car " << (i + 1) << ": " << endl;
        cout << "Year: " << DealershipInventory[i].year << endl;
        cout << "Make: " << DealershipInventory[i].make << endl;
        cout << "Model: " << DealershipInventory[i].model << endl;
        cout << "Price: $" << DealershipInventory[i].price << endl;
        cout << "Type: " << (DealershipInventory[i].type == HATCHBACK ? "Hatchback\n":
                             (DealershipInventory[i].type == SALOON ? "Saloon\n":
                              (DealershipInventory[i].type == WAGON ? "Wagon\n" :
                               (DealershipInventory[i].type == MID_SIZE_SUV ? "Mid Size SUV\n" :
                                (DealershipInventory[i].type == SUV ? "SUV" : "Truck\n"))))) << endl;
    }
}*/




/*
     * Initial Instructions
     */
/*void Car::initialInstructions() {
    cout << "This program adds cars to a dealership's inventory\n"
            "To quit, press 'ENTER'\n" << endl;
}*/












/*
 * Get choice of vehicle type
 */
/*int CarDealership::getVehicleType(ostream &outs, istream &ins){
    int choice;
    while(true) {
        printVehicleTypeInstructions(outs);
        if (cin >> choice && (choice == 1 | choice == 2 | choice == 3 | choice == 4 | choice == 5)) {
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            return choice;
        }
        cout << "Please enter a number 1-5!\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    }
}*/


/*
 * Determines if user wants to add another vehicle
 *//*
int CarDealership::addAnotherVehicle(ostream &outs, istream &ins){
    int choice;
    while(true) {
        printAddAnotherVehicleInstructions(outs);
        if (cin >> choice && (choice == 1 | choice == 2)) {
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            return choice;
        }
        cout << "Please enter either 1 or 2!\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    }
}
*/
/*
 * Prints out the year instructions
 *//*
void CarDealership::printYearInstructions(ostream &outs){
    outs << "Please enter the year of the vehicle (1908-2024):";
}
*/
/*
* Prints out the make instructions
*//*
string CarDealership::printMakeInstructions(ostream &outs){
    return "Please enter the make of the vehicle: ";
}
*/
/*
 * Prints out the model instructions
 *//*
string CarDealership::printModelInstructions(ostream &outs){
    return "Please enter the model of the vehicle: ";
}
*/
/*
* Prints out the price instructions
*//*
void CarDealership::printPriceInstructions(ostream &outs){
    outs << "Please enter the price of the vehicle:";
}
*/
/*
* Prints out the vehicle type instructions
*//*
void CarDealership::printVehicleTypeInstructions(ostream &outs){
    outs << "(1): Hatchback (2): Saloon (3): SUV (4): Mid Size SUV (5): Truck\n"
            "Please enter the type of vehicle you wish to add:";
}
*/
/*
 * Prints out the add another vehicle instructions
 *//*
void CarDealership::printAddAnotherVehicleInstructions(ostream &outs) {
    outs << "(1): Yes (2): No\n"
            "Would you like to enter another vehicle?";
}*/