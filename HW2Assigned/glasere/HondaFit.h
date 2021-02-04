#ifndef HondaFit_H_
#define HondaFit_H_
#include <string>
#include "Vehicle.h"

class HondaFit : public Vehicle {
   protected:
     std::string color;

   public:
      HondaFit(std::string _color);
      std::string getModel( );
      std::string getColor( );
      std::string getEngine( );
      std::string getTransmission( );
      int getNumPassengers( );
      std::string getWarranty( );
};
#endif /* VEHICLE_H_ */