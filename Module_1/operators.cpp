#include <iostream>

int main(){
/*
int/int -> int
int/float -> float
float/int -> float
float/float ->float
*/
int x = 3;
int y = 90;
int larger = 0;
// The ?: operator:
// Old way (only one statement without curly brackets):
if (x > y)
    larger = x;
else
    larger = y;
std::cout<<larger<<std::endl;

//Using ?: operator
larger = (x > y) ? x : y;
std::cout<<larger<<std::endl;

// Cast: force the compiler to perform a type change
int i=0;

float j=1.9999;
i = (int)j;
std::cout<<i<<std::endl;
return 0;
}