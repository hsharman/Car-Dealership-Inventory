#include "car.h"
#include "truck.h"
#include "SUV.h"
#include "convertible.h"
using namespace std;

bool testCar();
bool testTruck();
bool testSUV();
bool testConvertible();

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
    return 0;
}

bool testCar() {

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

}

bool testConvertible() {

}