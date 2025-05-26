#include <iostream>

#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad{
    private:
        char * str; // pointer to a string
        int len; // length of string
        // Keep track of number of objects created:
        static int num_strings; 
    public:
    StringBad(const char *s);
    StringBad();
    ~StringBad();
    friend std::ostream & operator << (
        std::ostream &os, const StringBad & st);
};

#endif