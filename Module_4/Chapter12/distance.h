#ifndef DISTANCE_H_
#define DISTANCE_H_

#include <iostream>

class Distance{
    int feet;
    double inches;

    public:
        Distance();
        Distance(int ft, double in);

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