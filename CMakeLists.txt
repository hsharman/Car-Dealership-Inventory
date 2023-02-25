cmake_minimum_required(VERSION 3.23.2)
project(M2OEP_hsharman_wbradfor)

set(CMAKE_CXX_STANDARD 17)

add_executable(M2OEP_hsharman_wbradfor
        main.cpp car.h car.cpp truck.h truck.cpp SUV.h SUV.cpp convertible.h convertible.cpp)
