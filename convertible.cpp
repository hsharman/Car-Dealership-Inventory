#include "convertible.h"
#include <string>
using namespace std;

Convertible::Convertible() {
    int year;
    string make;
    string model;
    double price;
    int mileage;
    bool spoiler;
    double convertibleTopLength;
    int horsePower;
}

bool Convertible::getSpoiler() {
    /*char choice;
    cout << "Does the vehicle have a spoiler> (Y/N) " << endl;
    while (true) {
        if (ins >> choice && (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n')) {
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        cout << "Please enter Y/N!\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    }*/

    return spoiler;
}

double Convertible::getConvertibleTopLength()  {
   /* int length;
    cout << "What's the length of the top? " << endl;
    while (true) {
        if (ins >> length && (length > 0)) {
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        cout << "Please enter a valid top length!!\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    }*/

    return convertibleTopLength;
}

int Convertible::getHorsePower()  {
   /* int horsepower;
    cout << "Does the vehicle have a spoiler> (Y/N) " << endl;
    while (true) {
        if (ins >> horsepower && horsepower > 0) {
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        cout << "Please enter a valid horsepower number!\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    }*/
    return horsePower;
}

void Convertible::setSpoiler(bool newSpoiler) {
    spoiler = newSpoiler;
}

void Convertible::setConvertibleTopLength(double newLength) {
    convertibleTopLength = newLength;
}

void Convertible::setHorsePower(int newHorsePower) {
    horsePower = newHorsePower;
}

