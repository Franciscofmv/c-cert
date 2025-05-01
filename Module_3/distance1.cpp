
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
    feets = 0;
    inches = 0.0;
}

   // Initialize a Distance to the specified value.

Distance::Distance( int ft, double in )
{
feets = ft;
inches = in;
}

// Define + that operates on Distance + Distance.

Distance Distance::operator + ( Distance &rhs )
{
int    sum_feets;
double sum_inches;

sum_feets = feets + rhs.feets;
sum_inches = inches + rhs.inches;
    if (sum_inches >= 12.0)
    {
        sum_inches -= 12.0;
        ++sum_feets;
    }

    return Distance(sum_feets,sum_inches);
}
 
// Define + that operates on Distance + int,
// which means add feets.

Distance Distance::operator + ( int rhs )
{
return*this + Distance(rhs,0.0);
}

// Define + that operates on Distance + double,
// which means add inches.

Distance Distance::operator + ( double rhs )
{
return *this + Distance(0,rhs);
}

   // Define + that operates on int + Distance,
   // which means add feets.

   Distance operator + ( int lhs, Distance &rhs )
   {
    int    sum_feets;
    double sum_inches;

    sum_feets = lhs + rhs.feets;
    sum_inches = rhs.inches;
    return Distance(sum_feets,sum_inches);
   }

   // Define + that operates on double + Distance,
   // which means add inches.
     
   Distanceoperator + ( double lhs, Distance& rhs )
   {
    returnrhs + lhs;
   }


  // Define stream insertion operator for Distances.

  ostream& operator << ( ostream& str, Distance& d )
  {
    str << d.feets << "'" << d.inches << "\"";
    return str;
  }

   // Define stream extraction operator for Distances

   istream& operator >> ( istream& str, Distance& d )
   {
    str >> d.feets;
    if (str.get() != '\'')
    {
       cerr << "*** Error extracting Distance.\n";
       exit(1);
    }
    str >> d.inches;
    if (str.get() != '"')
    {
       cerr << "*** Error extracting Distance.\n";
       exit(1);
    }
    return str;
   } 