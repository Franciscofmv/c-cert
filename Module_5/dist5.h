   
// MODULE:     dist5.h
// PROGRAMMER: Gary J. Blair
// DATE:       4/11/1996
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   distanc5.cpp, dist5.h, dist5.cpp
// PURPOSE:
// Header file for Distance class

using namespace std;

class Distance
{
    public:

    // The no argument constructor 
    // initializes a Distance to 0'0".

    Distance();

    // Initialize a Distance to the specified value.

    Distance( int ft, double in );

       // Initialize a Distance to the specified
       // value, which is in meters. This can
       // also be used as a conversion operator.

    Distance( float n_meters );

       // Convert English Distance to meters.

    operator float(); // Note: no return type
                      // may be specified.

       // Define + that operates on
       // Distance + Distance.

    Distance operator + ( Distance &rhs ) const;
    
       // Define stream insertion operator
       // for Distances.
    
    friend ostream& operator << ( ostream& str,
                                  Distance& d );

       // Define stream extraction operator
       // for Distances.

    friend istream& operator >> ( istream& str,
                                  Distance& d ); 

    private:
    int     feet;
    double  inches;
   };

