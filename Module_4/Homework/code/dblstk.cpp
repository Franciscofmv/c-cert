#include <iostream>
#include <string>

#include "dblstk.h"


// Constructor:
DoubleStack::DoubleStack(size_t	capacity){
    this-> data = new(std::nothrow) double[0];
    if (!data){
        std::cerr <<"*** Memory allocation failed.\n";
    }
    this->stack_capacity = capacity;
    this->stack_size = 0;

}
// Copy Constructor:
DoubleStack::DoubleStack(const DoubleStack& rhs){
    size_t i;
    size_t capacity = rhs.stack_capacity;
    this->data = new double[capacity];
    this->stack_size = capacity; 

    for(i=0; i<capacity; ++i){
        this->data[i] = rhs.data[i];
    }

    
}
// Destructor:
DoubleStack::~DoubleStack(void){
    delete [] data;
    stack_size = 0;
}
	 
// Overloading '=' operator:
DoubleStack& DoubleStack::operator=(DoubleStack& rhs ){
    // Check for rhs (they share same memory address):
    if (this == &rhs){
        return *this;
    }
}
int	DoubleStack::push( double&	item ){
    unsigned int new_size = this->stack_size + 1;

    // Check if we still have the capacity to push a new number:
    if (new_size <= this->stack_capacity){

        double *data_temp = new double[this->stack_size];
        for(unsigned int i = 0; i < this->stack_size; ++i){
            data_temp[i] = this->data[i];
        }
        delete [] this->data;
        
        //Push new item:
        this->data = new(std::nothrow) double[new_size];
        if (!data){
            std::cerr << "*** Memory allocation failed.\n";
            return 0;
        }
        data[0] = item;
        for (unsigned int i = 1; i < new_size; ++i){
            this->data[i] = data_temp[i];
        }
    }
    else{
        return 0;
    }

    return 1;
}


    // Display stack:
void DoubleStack::display(){
    std::cout << "This is a test.\n";
}