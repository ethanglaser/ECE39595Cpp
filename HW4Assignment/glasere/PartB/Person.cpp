#include <iostream>
#include <string>
#include "Person.h"

Person::Person(std::string _name, int _birthMonth, int _birthDay, int _birthYear, Address _address) : name(_name), address(_address) { 
   dateOfBirth = std::to_string(_birthMonth)+"/"+std::to_string(_birthDay)+"/"+std::to_string(_birthYear); // this should be the only line in the constructor body
}

std::string Person::getName() {
   return name;
}

int Person::getZipCode() {
   return address.getZipCode();
}

std::string getRole( ) { 
   return "unknown";
}
