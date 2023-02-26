#ifndef M2OEP_HSHARMAN_WBRADFOR_CONVERTIBLE_H
#define M2OEP_HSHARMAN_WBRADFOR_CONVERTIBLE_H

#include "Car.h"

class Convertible : public Car {
private:
    bool spoiler;
    double convertibleTopLength;
    int horsePower;
public:

    // Constructors
    Convertible();
    Convertible(int year, string make, string model, double price, int mileage,
          bool spoiler, double convertibleTopLength, int horsePower);

    // Getters
    bool getSpoiler();
    double getConvertibleTopLength();
    int getHorsePower();

    // Setters
    void setSpoiler(bool newSpoiler);
    void setConvertibleTopLength(double newLength);
    void setHorsePower(int newHorsePower);



};






#endif //M2OEP_HSHARMAN_WBRADFOR_CONVERTIBLE_H
