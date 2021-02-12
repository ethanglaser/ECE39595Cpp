#include <iostream>
#include <string>
#include "FordF350.h"

FordF350::FordF350(std::string _color) : Vehicle("Ford F350") {
   color = _color;
   std::cout << " built" << std::endl;
}

std::string FordF350::getModel( ) {
   return model;
}

std::string FordF350::getColor( ) {
   return color;
}

std::string FordF350::getEngine( ) {
   return "7.3L V8";
}

std::string FordF350::getTransmission( ) {
   return "10 speed automatic";
}

int FordF350::getNumPassengers( ) {
   return 3;
}

std::string FordF350::getWarranty( ) {
   return "3/36,000 + 5/60,000 Powertrain";
} 
