cmake_minimum_required(VERSION 3.23.2)
project(M2OEP_hsharman_wbradfor)

set(CMAKE_CXX_STANDARD 17)

add_executable(M2OEP_hsharman_wbradfor
         main.cpp Car.h Car.cpp truck.h truck.cpp SUV.h SUV.cpp convertible.h convertible.cpp offroadVehicle.h offroadVehicle.cpp)

add_executable(M2OEP_Testing
        testing.cpp Car.h Car.cpp truck.h truck.cpp SUV.h SUV.cpp convertible.h convertible.cpp)


