#include <iostream>
#include <string>
#include "Command.h"

class DotProduct : public Command {
private:
   int* arr1;
   int* arr2;
   int length;
   int result;

public:
   DotProduct( );
   DotProduct(int numElements);
   void execute( );
   void identify( );


   friend std::ostream& operator<<(std::ostream& os, const DotProduct qs);
};