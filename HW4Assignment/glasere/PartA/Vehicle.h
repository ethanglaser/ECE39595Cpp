#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <string>

class Vehicle {
   protected:
     std::string model;

   public:
      Vehicle(std::string _model);
      virtual std::string getModel( );
      virtual std::string getColor( );
      virtual std::string getEngine( ) = 0;
      virtual std::string getTransmission( ) = 0;
      virtual int getNumPassengers( ) = 0;
      virtual std::string getWarranty( ) = 0;
};
#endif /* VEHICLE_H_ */
