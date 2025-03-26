#include <iostream>

int square(int x);

int main(){

    std::cout << square(91) << std::endl;

    return 0;
}

int square(int x){
    int square = x * x;
    return square;
}