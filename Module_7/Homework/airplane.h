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

#ifndef AIRPLANE_H_
#define AIRPLANE_H_
class Airplane : public Vehicle{
    public:
            // Constructor:
        Airplane(string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max);
            // Get transportation mode:
         string get_trans_mode();

};

#endif