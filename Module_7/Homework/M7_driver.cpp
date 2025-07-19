#include <iostream>

#include "car.h"
#include "boat.h"
#include "airplane.h"


using std::string;
using std::cout;
using std::endl;

void print_car(Car& car);
void print_boat(Boat& boat);
void print_plane(Airplane& airplane);
int main(){
        // Car Specs
    string car_info = "2026 Lotus Emira V6 SE";
    double empty_weight = 3212.0;
    double max_gross_weight = 3887.0;
    double range_max = 332.0;
    double speed_max = 180.0;
    Car Emira(
        car_info, empty_weight, max_gross_weight, 
        range_max, speed_max);

        // Boat Specs:
    string boat_info = "2025 Yamaha AR220 22-foot boat";
    double boat_empty_weight = 3538.0;
    double boat_max_gross_weight = 5738.0;
    double boat_range_max = 170;
    double boat_speed_max = 50;
    Boat YamahaAR220(
        boat_info, boat_empty_weight, boat_max_gross_weight, 
        boat_range_max, boat_speed_max);
    
        // Airplane Specs:
    string airplane_info = "2019 AIRBUS A320";
    double airplane_empty_weight = 82078;
    double airplane_max_gross_weight = 169750;
    double airplane_range_max = 3300;
    double airplane_speed_max = 541;
    Airplane AirbusA320(
        airplane_info, airplane_empty_weight, airplane_max_gross_weight,
        airplane_range_max, airplane_speed_max
    );
        // Print features:
    cout << endl;
    print_car(Emira);
    cout << endl;
    print_boat(YamahaAR220);
    cout << endl;
    print_plane(AirbusA320);
    

    return 0;
}

void print_car(Car& car){
    cout << car.get_id_info() << endl;
    cout << "Transportation mode: " << car.get_trans_mode() << endl;
    cout << "Empty weight: " << car.get_empty_weight() << " lbs"<< endl;
    cout << "Max gross weight: " << car.get_max_gross_weight() << " lbs"<<endl;
    cout << "Maximum range: " << car.get_max_range() << "miles" <<endl;
    cout << "Maximum speed: " << car.get_max_speed() << " mph" <<endl;
}

void print_boat(Boat& boat){
    cout << boat.get_id_info() << endl;
    cout << "Transportation mode: " << boat.get_trans_mode() << endl;
    cout << "Empty weight: " << boat.get_empty_weight() << " lbs"<< endl;
    cout << "Max gross weight: " << boat.get_max_gross_weight() << " lbs"<<endl;
    cout << "Maximum range: " << boat.get_max_range() << "miles" <<endl;
    cout << "Maximum speed: " << boat.get_max_speed() << " mph" <<endl;
}

void print_plane(Airplane& airplane){
    cout << airplane.get_id_info() << endl;
    cout << "Transportation mode: " << airplane.get_trans_mode() << endl;
    cout << "Empty weight: " << airplane.get_empty_weight() << " lbs"<< endl;
    cout << "Max gross weight: " << airplane.get_max_gross_weight() << " lbs"<<endl;
    cout << "Maximum range: " << airplane.get_max_range() << "nautical miles" <<endl;
    cout << "Maximum speed: " << airplane.get_max_speed() << " mph" <<endl;
}