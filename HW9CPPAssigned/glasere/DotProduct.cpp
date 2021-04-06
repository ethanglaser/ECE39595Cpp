#include <iostream>
#include <string>
#include <stdlib.h>

#include "DotProduct.h"

DotProduct::DotProduct(int numElements) : length(numElements) {
   result = 0;
   arr1 = new int[length];
   for (int i=0; i<length; i++) {
      arr1[i] = rand( ) % 100;
   }
   arr2 = new int[length];
   for (int i=0; i<length; i++) {
      arr2[i] = rand( ) % 100;
   }
}

DotProduct::DotProduct( ) { // this is a delegating constructor!
   DotProduct(0);
}

std::ostream& operator<<(std::ostream& os, const DotProduct dp) {
   os << "inner product on arrays of length " << dp.length << ", result is " << dp.result << "\n\n";
   return os;
}

void DotProduct::execute( ) {
    for (int i=0; i<length; i++) {
      result += arr1[i] * arr2[i];
    }
}

void DotProduct::identify( ) {
   std::cout << *this;
}
