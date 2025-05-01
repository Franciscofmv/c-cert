#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>

class Distance{
    int feet;
    double inches;

    public:
        Distance(){feet = 0; inches = 0.0;};
        Distance(int ft, double in){feet = ft; inches = in;};

        // Distance + Distance
        Distance operator + (Distance & rhs);
        //Distance + feet:3
        Distance operator + (int & ft);
        //Distance + inches:
        Distance operator + (double & in);
        //Define insertion operator for distances:
        friend std::ostream& operator << (std::ostream& str, Distance& d);
};
#endif 