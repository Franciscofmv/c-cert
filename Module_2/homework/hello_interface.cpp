// FILENAME: hello_interface
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 04/ / 2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED:
// PURPOSE: 

#include <iostream>
#include "hello_interface.h"

std::string get_name(){
    std::string name;
    std::cout << "Please, write your first name below:\n" << std::endl;
    std::cin >> name;
    return name;
};

void print_name(std::string name){
    std::cout << name << std::endl;
};