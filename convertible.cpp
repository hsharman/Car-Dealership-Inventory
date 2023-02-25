#include "convertible.h"
#include <string>
using namespace std;

Convertible::Convertible() {
    int year;
    string make;
    string model;
    double price;
    bool spoiler;
    double convertibleTopLength;
    int horsePower;
}

bool Convertible::getSpoiler() const {
    return spoiler;
}

double Convertible::getConvertibleTopLength() const {
    return convertibleTopLength;
}

int Convertible::getHorsePower() const {
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

