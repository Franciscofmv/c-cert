// MODULE:     distanc5.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       96/04/11
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   distance5.cpp, dist5.h, dist5.cpp
// PURPOSE:
//   Provide a class for English distances.
//   Illustrate conversions.

#include <iostream>
#include <stdlib.h>   
#include "dist5.h"

using namespace std;

int main(void)
{
    Distance   a;
    Distance   b(5.2);   // Initialize b
                         // to 5.2 meters.
    Distance   c;
    float      x;

    a = 2.5;            // Constructor called
                        // for conversion.

    cout << "2.5m = " << a << endl;
    cout << "5.2m = " << b << endl;
    
    // Explicit use of conversion constructor.
    c = Distance(3.8) + b;
    cout << "c = 3.8m + " << b << " = " << c
         << endl;

    x = c;
    cout << c << " = " << x << "m\n";
    c = x;
    cout << "After converting to metric then back to English c = " << c << endl; 

    return 0;
} 