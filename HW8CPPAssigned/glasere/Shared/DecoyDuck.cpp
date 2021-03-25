#include <iostream>
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

DecoyDuck::DecoyDuck( ) {
   flyBehavior = std::shared_ptr<FlyNoWay>(new FlyNoWay());
   quackBehavior = std::shared_ptr<MuteQuack>(new MuteQuack());
}

void DecoyDuck::display( ) {
   std::cout << "I’m a decoy duck" << std::endl;
}
