#include <iostream>
#include "class.h"



int main(){
    //Initialize an empty cup:
    Cup test;
    int oz = 0;
    while (oz == 0)
    {
        std::cout << "Enter an amount of ounces for your cup:\n";
        std::cin >> oz;
        if(oz == 0 || oz < 0 || oz > 10){
            oz = 0;
            std::cout << "Please enter ounces between 1 and 10\n";
        }
    }
    test.fill_cup(oz);

    std::cout << "Cup has now"test.remaining_oz() << std::endl;
    return 0;
}