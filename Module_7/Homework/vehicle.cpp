#include <iostream>

#include "vehicle.h"

Vehicle::Vehicle(
    string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max){
        id_info = id;
        empty_weight = empty_w;
        max_gross_weight = max_gross_w;
        max_range = range_max;
        max_speed = speed_max;
}
        //Get attributes:
string Vehicle::get_id_info(){return id_info;}
double Vehicle::get_empty_weight(){return empty_weight;}
double Vehicle::get_max_gross_weight(){return max_gross_weight;}
double Vehicle::get_max_range(){return max_range;}
double Vehicle::get_max_speed(){return max_speed;}
