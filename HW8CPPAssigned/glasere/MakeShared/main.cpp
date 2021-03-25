#include "Duck.h"
#include "RedHeadDuck.h"
#include "MallardDuck.h"
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include <memory>
int main(int argc, char *argv[]) {
   std::shared_ptr<Duck> red = std::make_shared<RedHeadDuck>(RedHeadDuck());
   std::shared_ptr<Duck> mallard = std::make_shared<MallardDuck>(MallardDuck());
   std::shared_ptr<Duck> decoy = std::make_shared<DecoyDuck>(DecoyDuck());


   red->performQuack( );
   red->performFly( );
   red->swim( );
   red->setFlyBehavior(std::make_shared<FlyNoWay>(FlyNoWay()));
   red->performFly( );

   decoy->performFly( );
}
