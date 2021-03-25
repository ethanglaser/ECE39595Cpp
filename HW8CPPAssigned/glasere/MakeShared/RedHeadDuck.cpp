#include <iostream>
#include "RedHeadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

RedHeadDuck::RedHeadDuck( ) {
   flyBehavior = std::make_shared<FlyWithWings>(FlyWithWings());
   quackBehavior = std::make_shared<Quack>(Quack());
}

void RedHeadDuck::display( ) {
   std::cout << "I’m a real redheaded duck" << std::endl;
}
