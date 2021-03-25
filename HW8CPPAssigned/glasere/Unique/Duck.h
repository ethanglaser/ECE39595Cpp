#ifndef DUCK_H_
#define DUCK_H_
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include <memory>

class Duck {
public:
   Duck( );
   virtual void setFlyBehavior(std::unique_ptr<FlyBehavior>);
   virtual void setQuackBehavior(std::unique_ptr<QuackBehavior>);
   virtual void performQuack ( );
   virtual void performFly ( );
   virtual void swim( );
   virtual void display( )=0;
protected:
   std::unique_ptr<QuackBehavior> quackBehavior;
   std::unique_ptr<FlyBehavior> flyBehavior;
};
#endif /* DUCK_H_ */
