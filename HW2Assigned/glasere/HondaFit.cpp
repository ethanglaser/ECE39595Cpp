#include <iostream>
#include <string>
#include "HondaFit.h"

HondaFit::HondaFit(std::string _color) : Vehicle("Honda Fit") {
    color = _color;
    std::cout << " built\n";
}

std::string HondaFit::getModel( ) {
    return model;
}

std::string HondaFit::getColor( ) {
    return color;
}

std::string HondaFit::getEngine( ) {
    std::string engine = "1.5L i-DSI 4 Cylinder";
    return engine;
}

std::string HondaFit::getTransmission( ) {
    std::string transmission = "manual";
    return transmission;
}

int HondaFit::getNumPassengers( ) {
    int passengers = 5;
    return passengers;
}

std::string HondaFit::getWarranty( ) {
    std::string warranty = "3/36,000 + 5/60,000 Powertrain";
    return warranty;
}
