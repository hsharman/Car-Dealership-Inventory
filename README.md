# Car Dealership Inventory Program
Harry and Wade created a main program and testing program for multiple classes. The parent class of car, and the child classes of Truck, SUV, Convertible, and offroadVehicle.
# Car Class
The car class is designed with the private fields of year, make, model, price, and mileage. Each field has the corresponding getters and setters.
# Child Classes (Truck, SUV, Convertible, offroadVehicle)
The child classes inherit from the Car parent class. Each child class adds additional fields specific to each kind of vehicle:
Truck - bedLength, towingCapacity, liftKit
SUV - peopleCarryingCapacity, trunkSize
Convertible - spoiler, convertibleTopLength, horsePower
offroadVehicle - groundClearance, winchAttached, tireSize
# Main Program
The purpose of the main program is to add different vehicles to a vector that represents the total inventory. The user selects which type of vehicle they wish to add, and provide input in regards to year, make, model, etc, as well as some input specific to the different child classes. The user can enter as many cars as they wish and as little as one car. When they have added as many cars as they wish, the fields of each car added to the vector are written to a csv file.
# Testing Program
The testing program is designed with methods for each class (car, truck, etc) that test the functions within each method. This mainly includes testing the getters and setters of each object to confirm that the functions work properly with each field.
