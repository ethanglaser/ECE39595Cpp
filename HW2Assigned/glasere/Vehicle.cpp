#include <iostream>
#include <string>
#include "Vehicle.h"

Vehicle::Vehicle(std::string _model) {
   model = _model;
   std::cout << model;
}

std::string Vehicle::getModel( ) { 
   return "";
}

std::string Vehicle::getVehicleModel( ) {
   return getModel( );
}

std::string Vehicle::getColor( ) { 
   return "";
}

std::string Vehicle::getEngine( ) {
   return "";
}

std::string Vehicle::getTransmission( ) {
   return "";
}

int Vehicle::getNumPassengers( ) {
   return 0;
}

std::string Vehicle::getWarranty( ) {
   return "";
}