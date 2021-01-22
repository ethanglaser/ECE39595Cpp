#include <string>
#include <iostream>
#include "Automobile.h"

Automobile::Automobile(int _vehicleID, float _miles, int _month, int _day, int _year) {
    vehicleID = _vehicleID;
    miles = _miles;
    month = _month;
    day = _day;
    year = _year;
}
int Automobile::getVehicleID() {
    return vehicleID;
}
float Automobile::getMiles( ) {
    return miles;
}
std::string Automobile::getLastMaintenance( ) {
    return ""+std::to_string(month)+"/"+std::to_string(day)+"/"+std::to_string(year);;
}

std::string Automobile::toString( ) {
   std::string address = std::to_string(vehicleID)+"\n";
   address += std::to_string(miles)+"\n";
   address += getLastMaintenance()+"\n";
   return address;
}

int main(int argc, char* argv[]) {
    Automobile* auto1 = new Automobile(12345, 0.0, 1,22,2021);
    Automobile* auto2 = new Automobile(54321, 1234567.8, 1,1,1910);
    std::cout << auto1->toString() << std::endl;
    std::cout << auto2->toString() << std::endl;
}
