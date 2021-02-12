#ifndef HONDAFIT_H_ 
#define HONDAFIT_H_ 

#include "Vehicle.h"

class HondaFit : public Vehicle {
private:
   std::string color;
public:
   HondaFit(std::string _color);
   std::string getModel( );
   std::string getColor( );
   virtual std::string getEngine( );
   virtual std::string getTransmission( );
   virtual int getNumPassengers( );
   virtual std::string getWarranty( );
};
#endif /* HONDAFIT_H_ */
