#include <iostream>

//passing by reference example:
void triple_it(int &x){
    x = x * 3;
}

int main(){
    int x = 90;
    std::cout << x << std::endl;
    triple_it(x);
    std::cout << "Value of 3*x = \n" << x << std::endl;
    return 0;
}