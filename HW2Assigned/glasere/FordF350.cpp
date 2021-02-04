#include <iostream>
#include <string>
#include "FordF350.h"

FordF350::FordF350(std::string _color) : Vehicle("Ford F350") {
    color = _color;
    std::cout << " built\n";
}

std::string FordF350::getModel( ) {
    return model;
}

std::string FordF350::getColor( ) {
    return color;
}

std::string FordF350::getEngine( ) {
    std::string engine = "7.3L V8";
    return engine;
}

std::string FordF350::getTransmission( ) {
    std::string transmission = "10 speed automatic";
    return transmission;
}

int FordF350::getNumPassengers( ) {
    int passengers = 3;
    return passengers;
}

std::string FordF350::getWarranty( ) {
    std::string warranty = "3/36,000 + 5/60,000 Powertrain";
    return warranty;
}
