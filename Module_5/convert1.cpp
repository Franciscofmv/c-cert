// MODULE:     convert1.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       4/11/1996
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   convert1.cpp, dist4.h, dist4.cpp
// PURPOSE:
//   Represent planar coordinates
//   in rectangular and polar form.
//   Illustrate interclass conversions
//   in source class.

#include <iostream>
#include <stdlib.h>
#include "dist4.h"
#include <math.h>

using namespace std;


class Rectangular
{ 
    public:
    Rectangular(void) { x=0.0; y=0.0; };
    Rectangular( double x_coord, double y_coord );
    friend ostream& operator 
       <<( ostream& str, Rectangular& r );

    private:
    double x;   // The x coordinate.
    double y;   // The y coordinate.
};

class Polar
   {
    public:
    Polar(void) { radius=0.0; angle=0.0; };
    Polar( double r, double theta );
    friend ostream& operator
       <<( ostream& str, Polar& p );

    // Conversion operator to Rectangular.
    operator Rectangular();

    private:
    double radius;   // Radius from origin.
    double angle;    // Angle with conventional x-axis.
};
   
int main(void)
{ 
    const double   pi = acos(-1.0);   // Define pi.
    Polar          p1(10.0,pi/4);
    Polar          p2(20.0,pi/6);
    Rectangular    r1;

    r1 = p1;
    cout << p1 << " = " << r1 << endl;

    r1 = p2;
    cout << p2 << " = " << r1 << endl;

    return 0;
} 

Rectangular::Rectangular( double x_coord, double y_coord )
{
    x = x_coord;
    y = y_coord;
}
ostream& operator<<( ostream& str, Rectangular& r )
{ 	
 	str << "x:" << r.x << "  y:" << r.y;	
 	return str;
}
 	
Polar::Polar( double r, double theta )
{
 	radius = r;
 	angle  = theta;
}

// Conversion operator to Rectangular.

Polar::operator Rectangular()
{
    double local_x = radius * cos(angle);
    double local_y = radius * sin(angle); 
    return Rectangular(local_x,local_y);
}

ostream& operator<<( ostream& str, Polar& p )
{
    str << "radius:" << p.radius << "  angle:"
        << p.angle;
    return str;
}