#include <iostream>
#include "TwoTuple.h"
#include "Node.h"
#include "Int.h"

int main(int argc, char** args) {
   const int values[ ] {5, 1, 7, 15};
   const double dvalues[ ] {5.1, 1.1, 7.1, 15.1};

   Int i(10);
   Node<Int>* rootInt = new Node<Int>(Int(10));
   for (int i = 0; i < 4; i++) {
     rootInt->insertNode(Int(values[i])); 
   }
   std::cout << "RootInt tree: " << std::endl;
   rootInt->print( );
   std::cout << "\n\n";

   Node<double>* rootDouble = new Node<double>(10.0);
   for (int i = 0; i < 4; i++) {
      rootDouble->insertNode((double) dvalues[i]); 
   }
   std::cout << "RootDouble tree: " << std::endl;
   rootDouble->print( );
   std::cout << "\n\n";

   Node<TwoTuple<float,int>>* rootTwoTuple = new Node<TwoTuple<float,int>>(TwoTuple<float,int>(0,0));
   for (int i = 0; i < 4; i++) {
      rootTwoTuple->insertNode(TwoTuple<float,int>(dvalues[i], values[i]));
   }
   std::cout << "RootDouble tree: " << std::endl;
   rootTwoTuple->print( );
   std::cout << "\n\n";
}
