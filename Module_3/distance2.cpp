// FILENAME:   distance2.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       4/11/1996
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   distance2.cpp 
// PURPOSE:
//   Provide a type for English distances.
//   Illustrate creation of new stream insertion
//   and stream extraction operators.

#include <iostream>

typedef struct{
    int feet;
    double inches;
} Distance;

// Define functions prototypes:
Distance operator + (Distance &lhs, Distance &rhs);
std::ostream& operator << (std::ostream& str, Distance& d);
std::istream& operator >>(std::istream, Distance& d);
int main(){

    return 0;
}

std::ostream& operator << (std::ostream& str, Distance& d){
    str << d.feet << "' " << d.inches << "\"";
    return str;
}