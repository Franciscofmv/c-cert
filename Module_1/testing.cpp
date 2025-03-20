#include <iostream>

int main(){
    std::cout<<"References"<<std::endl;
    // References
    int x = 10;
    int &r = x;// r is a reference to x;
    int *p = &r; // p is a pointer that points to the address of x
    std::cout<<"References to variables share the same memory "<<(&r == & x)<<std::endl;

    
    return 0;
}