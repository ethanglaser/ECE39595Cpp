/*
 * Added getWarranty to Vehicle.h and Vehicle.cpp in the same format as other functions
 */
#include <iostream>
#include "Vehicle.h"
#include "HondaFit.h"
#include "FordF350.h"

#define LEN 4
int main(int argc, char** args) {
   Vehicle* vehicles[ ] = {nullptr, nullptr, nullptr, nullptr};
   vehicles[0] = new HondaFit("white");
   vehicles[1] = new FordF350("green");
   vehicles[2] = new HondaFit("red");
   vehicles[3] = new FordF350("yellow");
   std::cout << std::endl;

   for (int i = 0; i < LEN; i++) {
      Vehicle* vehicle = vehicles[i];
      std::cout << vehicle->getVehicleModel( ) << ": color: " << vehicle->getColor( );
      std::cout << ", engine: " << vehicle->getEngine( ); 
      std::cout << ", transmission: " << vehicle->getTransmission( ); 
      std::cout << ", setBelts: " << vehicle->getNumPassengers( ); 
      std::cout << ", warranty: " << vehicle->getWarranty( ) + "\n"; 
      std::cout << "\n";
    }
}
