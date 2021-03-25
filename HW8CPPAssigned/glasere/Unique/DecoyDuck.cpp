#include <iostream>
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

DecoyDuck::DecoyDuck( ) {
   quackBehavior = std::unique_ptr<MuteQuack>(new MuteQuack());
   flyBehavior = std::unique_ptr<FlyNoWay>(new FlyNoWay());
}

void DecoyDuck::display( ) {
   std::cout << "I’m a decoy duck" << std::endl;
}
