#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <string>

class Vehicle {
   protected:
     std::string model;

   public:
      Vehicle(std::string _model);
      virtual std::string getModel( );
      virtual std::string getVehicleModel( );
      virtual std::string getColor( );
      virtual std::string getEngine( );
      virtual std::string getTransmission( );
      virtual int getNumPassengers( );
      virtual std::string getWarranty( );
};
#endif /* VEHICLE_H_ */
