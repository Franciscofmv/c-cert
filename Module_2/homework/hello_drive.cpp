// FILENAME: hello_drive.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE:
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED:
// PURPOSE: 

#include <iostream>
#include "hello_interface.h"

int main(){
    std::string name;
    name = get_name();
    print_name(name);
    return 0;
}

