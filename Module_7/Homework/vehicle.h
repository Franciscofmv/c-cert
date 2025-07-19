#include <iostream>

using std::string;

#ifndef VEHICLE_H_
#define VEHICLE_H_

class Vehicle{
    public:
        // Constructor:
    Vehicle(string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max);
        // Get transportation mode (i.e. water, land, air...)
    virtual string get_trans_mode() = 0;
        //Get attributes:
    string get_id_info();
    double get_empty_weight();
    double get_max_gross_weight();
    double get_max_range();
    double get_max_speed();
    

    protected:
        string id_info;
        double empty_weight;
        double max_gross_weight;
        double max_range;
        double max_speed;




};
#endif
