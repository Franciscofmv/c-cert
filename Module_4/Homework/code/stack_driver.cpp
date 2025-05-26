#include <iostream>
#include "dblstk.h"


int main(){
    DoubleStack stack_1(10); 
    // Creating user menu:
    int option = 0;
    while(true){

        std::cout << "Select an option:\n\n";
        std::cout << "1. Display stack 1\n";
        std::cout << "2. Place a double value onto the top of stack 1\n";
        std::cout << "3. Remove a value from the top of stack 1\n";
        std::cout << "4. Check the total capacity stack 1\n";
        std::cout << "5. Check current number of items on stack 1\n";
        std::cout << "6. Copy stack 1 to stack 2\n";
        std::cout << "7. Check to see if the two stacks are equal\n";
        std::cout << "8. Quit\n";

        std::cin >> option;
        if (option == 1)
        {
            stack_1.display();
        }
        else if (option == 8){
            std::cout << "Exiting Program.\n";
            std::exit(0);
        }
        
    }

    return 0;
}