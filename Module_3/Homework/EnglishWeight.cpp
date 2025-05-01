// FILENAME: EnglishWeight.h
// PROGRAMMER: Francisco Moyet
// DATE:
// COMPILER:
// REQUIRED:
// PURPOSE:

#include "EnglishWeight.h"

// Constructors:
EnglishWeight::EnglishWeight(){
    this->ounces = 0.0;
    this->pounds = 0;
}
EnglishWeight::EnglishWeight(unsigned int lb){
    this->pounds = lb;
    this->ounces = lb*16.0; 
}
EnglishWeight::EnglishWeight(double oz){
    if(oz >= 0){
        this->ounces = oz;
        this->pounds = (int)(oz/16.0);
    }else
        std::cerr << "Ounces must be greater than or equal to zero.";
}
EnglishWeight::EnglishWeight(unsigned int lb, double oz){
    this->pounds = lb;
    this->ounces = oz;
}

// Streams overloads:
std::ostream& operator << (std::ostream & str, EnglishWeight& rhs){
    str << rhs.pounds <<" lb\n" << rhs.ounces <<" oz";
    return str;
}
std::istream& operator >> (std::istream& str, EnglishWeight& rhs)
{   
    int success = 0;
    do
    {
        std::cout << "Please, write pounds (int):\n";
        str >> rhs.pounds;
        if (str.fail())
        {
            std::cerr << "*** Error extracting pounds.\n";
            str.clear();
            str.ignore(1024,'\n');
        }
        else{
            success = 1;
        } 
    }while (!success);

    success = 0;
    do{
        std::cout << "Please, write ounces (double):\n";
        str >> rhs.ounces;
        if (str.fail())
        {
            std::cerr << "*** Error extracting ounces.\n";
            str.clear();
            str.ignore(1024, '\n');
        }else{
            success = 1;
        }
    } while(!success);
    return str;
} 

// Operator Overloading:
EnglishWeight EnglishWeight::operator +(EnglishWeight & rhs) const{
    // EnglishWeight1 + EnglishWeight2
    int sum_lb = this->pounds + rhs.pounds;
    double sum_oz = this->ounces + rhs.ounces;
    return EnglishWeight(sum_lb, sum_oz);
}

EnglishWeight EnglishWeight::operator -(EnglishWeight & rhs) const{
    //EnglishWeight1 - EnglishWeight2
    int sub_lb = this->pounds - rhs.pounds;
    double sub_oz = this->ounces - rhs.ounces;
    return EnglishWeight(sub_lb, sub_oz);
}

double EnglishWeight::operator /(EnglishWeight & rhs) const{
    //EnglishWeight1 / EnglishWeight2
    double ratio = this->ounces / rhs.ounces;
    return ratio;
}

EnglishWeight EnglishWeight::operator *(double & x) const{
    //EnglishWeight1 * number
    return EnglishWeight(this->pounds * x, this->ounces * x);
}

EnglishWeight operator *(double x, EnglishWeight &obj){
    return EnglishWeight(x * obj.pounds, x * obj.ounces);
}
// Dividing by int:
EnglishWeight EnglishWeight::operator /(unsigned int x) const{
    int divlb = this->pounds / x;
    double divoz = this->ounces / x;
    return EnglishWeight(divlb, divoz);
}
// Dividing by double:
EnglishWeight EnglishWeight::operator /(double x) const{
    int divlb = (int)(this->pounds / x);
    double divoz = this->ounces / x;
    return EnglishWeight(divlb, divoz);
}
