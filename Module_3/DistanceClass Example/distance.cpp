
// FILENAME:   distance.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       96/04/11
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   distance3.cpp, distance.h, distance.cpp
// PURPOSE:
//  Implement the Distance class.

#include <iostream>
#include <stdlib.h>
#include "distance.h"

// The no argument constructor initializes 
// a Distance to 0'0".

Distance::Distance()
{
   feet = 0;
    inches = 0.0;
}


   // Define + that operates on Distance + Distance.

Distance Distance::operator + ( Distance &rhs )
{
    int    sum_feet;
    double sum_inches;

    sum_feet = feet + rhs.feet;
    sum_inches = inches + rhs.inches;
    while (sum_inches >= 12.0)
    {
       sum_inches -= 12.0;
       ++sum_feet;
    }
    return Distance(sum_feet,sum_inches);
}

Distance Distance::operator +(int & ft){
    Distance dummy = {ft, 0.0};
    Distance{ft, 0.0};
 return (*this + dummy);
}

Distance Distance::operator +(double & in){
    
}
