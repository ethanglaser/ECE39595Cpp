#include "Duck.h"
#include "RedHeadDuck.h"
#include "MallardDuck.h"
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include <memory>
int main(int argc, char *argv[]) {
   std::unique_ptr<Duck> red(new RedHeadDuck());
   std::unique_ptr<Duck> mallard(new MallardDuck());
   std::unique_ptr<Duck> decoy(new DecoyDuck());

   red->performQuack( );
   red->performFly( );
   red->swim( );
   red->setFlyBehavior(std::unique_ptr<FlyNoWay>(new FlyNoWay( )));
   red->performFly( );

   decoy->performFly( );
}
