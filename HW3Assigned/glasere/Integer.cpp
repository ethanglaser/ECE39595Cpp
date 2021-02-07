#include <iostream>
#include "Integer.h"

Integer::Integer(int v) : value(new int(v)) {}

Integer::Integer( ) : value(nullptr) {}

Integer::~Integer( ) {
   std::cout << "Integer" << std::endl;
}

void Integer::setValue(int v) {
   if (value != nullptr) {
      *value = v;
   } else {
      value = new int(v);
   }
}

int Integer::getValue( ) {
   return *value;
}

void Integer::print( ) {
   std::cout << *value;
}
