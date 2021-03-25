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

void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> fb) {
   flyBehavior = std::move(fb);
}
   
void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> qb) {
   quackBehavior = std::move(qb);
}
