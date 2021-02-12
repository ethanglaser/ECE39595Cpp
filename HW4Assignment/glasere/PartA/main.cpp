/*
 * Put your comment here explaining what you did to get rid of the error abot getWarranty( ) not
 * being found.
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
      std::cout << vehicle->getModel( ) << ": color: " << vehicle->getColor( );
      std::cout << ", engine: " << vehicle->getEngine( ); 
      std::cout << ", transmission: " << vehicle->getTransmission( ); 
      std::cout << ", setBelts: " << vehicle->getNumPassengers( ); 
      std::cout << ", warranty: " << vehicle->getWarranty( ) + "\n"; 
      std::cout << "\n";
    }
}
