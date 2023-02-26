#include "Car.h"
#include "truck.h"
#include "SUV.h"
#include "convertible.h"
#include "offroadVehicle.h"
using namespace std;

bool testCar();
bool testTruck();
bool testSUV();
bool testConvertible();
bool testOffroadVehicle();

int main() {
    srand(time(NULL));
    if (testCar()) {
        cout << "Passed all Car test cases" << endl;
    }
    if (testTruck()) {
        cout << "Passed all Truck test cases" << endl;
    }
    if (testSUV()) {
        cout << "Passed all SUV test cases" << endl;
    }
    if (testConvertible()) {
        cout << "Passed all Convertible test cases" << endl;
    }
    if (testOffroadVehicle()){
        cout << "Passed all offRoadVehicle test cases" << endl;
    }
    return 0;
}

bool testCar() {
    bool passed = true;
    Car testingCar;
    // Test vehicle year
    testingCar.setVehicleYear(2020);
    if (testingCar.getVehicleYear() != 2020){
        passed = false;
        cout << "FAILED setVehicleYear test case" << endl;
    }

    // Test vehicle make
    testingCar.setVehicleMake("Porsche");
    if (testingCar.getVehicleMake() != "Porsche"){
        passed = false;
        cout << "FAILED setVehicleMake test case" << endl;
    }

    // Test vehicle model
    testingCar.setVehicleModel("911 Turbo GTS");
    if (testingCar.getVehicleModel() != "911 Turbo GTS"){
        passed = false;
        cout << "FAILED setVehicleModel test case" << endl;
    }

    // Test vehicle price
    testingCar.setVehiclePrice(175000);
    if (testingCar.getVehiclePrice() != 175000){
        passed = false;
        cout << "FAILED setVehiclePrice test case" << endl;
    }

    // Test vehicle mileage
    testingCar.setVehicleMileage(42000);
    if (testingCar.getVehicleMileage() != 42000){
        passed = false;
        cout << "FAILED setVehicleMileage test case" << endl;
    }


    return passed;
}

bool testTruck() {
    bool passed = true;
    Truck testingTruck;
    testingTruck.setBedLength(10);
    if (testingTruck.getBedLength() != 10) {
        passed = false;
        cout << "FAILED setBedLength test case" << endl;
    }
    testingTruck.setTowingCapacity(1000);
    if (testingTruck.getTowingCapacity() != 1000) {
        passed = false;
        cout << "Failed setTowingCapacity test case" << endl;
    }
    testingTruck.setLiftKit(true);
    if (testingTruck.getLiftKit() != true) {
        passed = false;
        cout << "Failed setLiftKit test case" << endl;
    }
    return passed;
}

bool testSUV() {
    bool passed = true;
    SUV testSUV;

    // Test people carrying capacity
    testSUV.setPeopleCarryingCapacity(7);
    if (testSUV.getPeopleCarryingCapacity() != 7){
        passed = false;
        cout << "FAILED setPeopleCarryingCapacity test case" << endl;
    }

    // Test trunk size
    testSUV.setTrunkSize(62.7);
    if (testSUV.getTrunkSize() != 62.7){
        passed = false;
        cout << "FAILED setTrunkSize test case" << endl;
    }

    return passed;
}

bool testConvertible() {
    bool passed = true;
    Convertible testConvertible;

    // Test spoiler
    testConvertible.setSpoiler(true);
    if (testConvertible.getSpoiler() != true){
        passed = false;
        cout << "FAILED setSpoiler test case" << endl;
    }

    // Test top length
    testConvertible.setConvertibleTopLength(75);
    if (testConvertible.getConvertibleTopLength() != 75){
        passed = false;
        cout << "FAILED setConvertibleTopLength test case" << endl;
    }

    // Test horsepower
    testConvertible.setHorsePower(650);
    if (testConvertible.getHorsePower() != 650){
        passed = false;
        cout << "FAILED setHorsePower test case" << endl;
    }


    return passed;
}

bool testOffroadVehicle(){
    bool passed = true;
    offroadVehicle testOffroadVehicle;

    // Test ground clearance
    testOffroadVehicle.setGroundClearance(9.7);
    if (testOffroadVehicle.getGroundClearance() != 9.7){
        passed = false;
        cout << "FAILED setGroundClearance test case" << endl;
    }

    // Test winch attached
    testOffroadVehicle.setWinchAttached(true);
    if (testOffroadVehicle.getWinchAttached() != true){
        passed = false;
        cout << "FAILED setWinchAttached test case" << endl;
    }

    // Test tire size
    testOffroadVehicle.setTireSize("265/70R17");
    if (testOffroadVehicle.getTireSize() != "265/70R17"){
        passed = false;
        cout << "FAILED setTireSize test case" << endl;
    }

    return passed;

}
/*
 * int groundClearance;
    bool winchAttached;
    int tireSize;
 */