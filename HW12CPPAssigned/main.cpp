#include <iostream>
#include "Matrix.h"

int main(int argc, char** args) {

   Matrix m(10,10);

   for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) {
         m(i,j) = i*100 + j;
      }
   }

   for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) {
         std::cout << m(i,j) << " ";
      }
      std::cout << std::endl;
   }
}
