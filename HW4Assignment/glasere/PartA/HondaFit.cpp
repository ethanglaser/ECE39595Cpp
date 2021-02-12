#include <iostream>
#include <string>
#include "HondaFit.h"

HondaFit::HondaFit(std::string _color) : Vehicle("HondaFit") {
   color = _color;
   std::cout << " built" << std::endl;
}

std::string HondaFit::getModel( ) { // RINK MAKE PRIVATE
   return model;
}

std::string HondaFit::getColor( ) { // RINK MAKE PRIVATE
   return color;
}

std::string HondaFit::getEngine( ) {
   return "1.5L i-DSI 4 Cylinder";
}

std::string HondaFit::getTransmission( ) {
   return "manual";
}

int HondaFit::getNumPassengers( ) {
   return 5;
}

std::string HondaFit::getWarranty( ) {
   return "3/36,000 + 5/60,000 Powertrain";
}
