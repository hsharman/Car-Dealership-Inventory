#ifndef M2OEP_HSHARMAN_WBRADFOR_CONVERTIBLE_H
#define M2OEP_HSHARMAN_WBRADFOR_CONVERTIBLE_H

#include "car.h"

class Convertible : public Car {
private:
    bool spoiler;
    double convertibleTopLength;
    int horsePower;
public:

    // Constructors
    Convertible();
    Convertible(int year, string make, string model, double price, VehicleType type,
          bool spoiler, double convertibleTopLength, int horsePower);

    // Getters
    bool getSpoiler() const;
    double getConvertibleTopLength() const;
    int getHorsePower() const;

    // Setters
    void setSpoiler(bool newSpoiler);
    void setConvertibleTopLength(double newLength);
    void setHorsePower(int newHorsePower);



};






#endif //M2OEP_HSHARMAN_WBRADFOR_CONVERTIBLE_H
