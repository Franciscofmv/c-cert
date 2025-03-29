#include <iostream>

int main(){

    for(size_t i = 0; i < 100; i += 3){
        std::cout << sizeof(i) << std::endl;
    }

    return 0;
}