#include "class.h"
#include <iostream>

Cup::Cup(){
    //initialize with 8 ounces
    this->ounces = 0;
}
Cup::Cup(int oz){
    this->ounces = oz;
}

void Cup::fill_cup(int x){
    this->ounces += x;
}
//Destructor contains no arguments
Cup::~Cup(){
    std::cout << "Deleted" << std::endl;
}