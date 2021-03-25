#include <iostream>
#include "Duck.h"

Duck::Duck( ) { }

void Duck::swim( ) {
   std::cout << "All ducks float" << std::endl;
}

void Duck::performQuack ( ) {
   quackBehavior->quack( );
}

void Duck::performFly( ) {
   flyBehavior->fly( );
}

void Duck::setFlyBehavior(std::shared_ptr<FlyBehavior> fb) {
   flyBehavior = fb;
}
   
void Duck::setQuackBehavior(std::shared_ptr<QuackBehavior> qb) {
   quackBehavior = qb;
}
