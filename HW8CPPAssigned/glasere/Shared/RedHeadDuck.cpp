#include <iostream>
#include "RedHeadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

RedHeadDuck::RedHeadDuck( ) {
   flyBehavior = std::shared_ptr<FlyWithWings>(new FlyWithWings());
   quackBehavior = std::shared_ptr<Quack>(new Quack());
}

void RedHeadDuck::display( ) {
   std::cout << "I’m a real redheaded duck" << std::endl;
}
