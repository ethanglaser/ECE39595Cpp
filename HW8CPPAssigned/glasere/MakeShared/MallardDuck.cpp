#include <iostream>
#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck( ) {
   flyBehavior = std::make_shared<FlyWithWings>(FlyWithWings());
   quackBehavior = std::make_shared<Quack>(Quack());
}

void MallardDuck::display( ) {
   std::cout << "I’m a real mallard duck" << std::endl;
}
