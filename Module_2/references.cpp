#include <iostream>

int main(){

    int x = 0;
    int &y = x;
    int z = 1;
     y = z;
    std::cout << &x<<" "<< &y << std::endl;
    return 0;
}