//*********************************************
// FILENAME: 
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: 
// PURPOSE: 
//*********************************************


#include <iostream>
#include "car.h"

    // Constructor:
Car::Car(string id, double empty_w, double max_gross_w, double range_max, double speed_max)
: Vehicle(id, empty_w, max_gross_w, range_max, speed_max){

}
    // Get transportation mode:
string Car::get_trans_mode(){
    return "Land";
}