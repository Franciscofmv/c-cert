//*********************************************
// FILENAME: 
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: 
// PURPOSE: 
//*********************************************

#include <iostream>
#include "vehicle.h"

using std::string;

#ifndef CAR_H_
#define CAR_H_
class Car : public Vehicle{
    public:
            // Constructor:
        Car(string id, double empty_w, double max_gross_w, double range_max, double speed_max);
            // Get transportation mode:
         string get_trans_mode();

};

#endif