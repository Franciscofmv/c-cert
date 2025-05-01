// FILENAME: EnglishWeight.h
// PROGRAMMER: Francisco Moyet
// DATE:
// COMPILER:
// REQUIRED:
// PURPOSE:

#include <iostream>
#include "EnglishWeight.h"

int main(){
    
    EnglishWeight engWeight1;
    EnglishWeight engWeight2;
    double number;

    std::cout << "Creating first EnglishWeight object:\n";
    std::cin >> engWeight1;

    std::cout << "Creating second EnglishWeight object:\n";
    std::cin >> engWeight2;

    


    // EnglishWeight engWeight2(18);
    // EnglishWeight sum_total =  engWeight1 + engWeight2;
    std::cout << engWeight1;
    return 0;
}