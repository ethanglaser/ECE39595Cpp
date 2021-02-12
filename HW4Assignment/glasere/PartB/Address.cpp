#include <string>
#include "Address.h"

Address::Address(std::string _street, std::string _city, std::string _state, int _zip) : street(_street), city(_city), state(_state), zip(_zip) {}

std::string Address::getAddress() {
   return std::string(street+"\n"+city+"\n"+state+"\n"+std::to_string(zip)+"\n");
}

int Address::getZipCode( ) {
   return zip;
}
