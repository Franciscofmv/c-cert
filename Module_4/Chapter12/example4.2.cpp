#include "distance.h"


int main(){
    int      *p;
    int       array_size = 174;
    int      *dynamic_array;
    Distance *d1, *d2;

    p = new  int;
    if (p)
    {
        // Allocation succeeded.
        std::cout << p<< "\nAlllocation suceed\n";
    }

    dynamic_array = new  int[array_size]; // Allocate
                                        // array of
                                        // array_size
                                        // ints.

    d1 = new Distance;         // No-argument
                            // Constructor called.
    d2 = new Distance(3,4.0); // 2-argument
                            // Constructor called.

    delete p;
    delete dynamic_array;
    delete d1;
    delete d2; 
    return 0;
}