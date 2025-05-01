// FILENAME: EnglishWeight.h
// PROGRAMMER: Francisco Moyet
// DATE:
// COMPILER:
// REQUIRED:
// PURPOSE:

#ifndef ENGLISHWEIGHT_H_
#define ENGLISHWEIGHT_H_

#include <iostream>

class EnglishWeight{
    private:
        unsigned int pounds;
        double ounces;

    public:
        // Constructors
        EnglishWeight();
        EnglishWeight(unsigned int lb);
        EnglishWeight(double oz);
        EnglishWeight(unsigned int lb, double oz);

        // Overload istream and ostream:
        friend std::ostream& operator << (std::ostream &str, EnglishWeight &rhs);
        friend std::istream& operator >> (std::istream& str, EnglishWeight &rhs);

        // Overload operators +, -, /, and *:
        EnglishWeight operator +(EnglishWeight & rhs) const;
        EnglishWeight operator -(EnglishWeight & rhs) const;
        double operator /(EnglishWeight &rhs) const;
        EnglishWeight operator/(unsigned int number) const;
        EnglishWeight operator/(double number) const;
        EnglishWeight operator *(double &x) const;
        friend EnglishWeight operator *(double x, EnglishWeight &obj);
};
#endif