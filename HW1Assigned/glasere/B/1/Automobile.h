#ifndef Automobile_H_
#define Automobile_H_
#include <string>
class Automobile {
    private:
        int vehicleID;
        float miles;
        std::string lastMaintenance;
    public:
        Automobile(int vehicleID, float miles, int month, int day, int year);
        virtual float getMiles();
        virtual int getVehicleID();
        virtual std::string getLastMaintenance();
        virtual std::string toString();
};
#endif