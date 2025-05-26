// string1.h -- fixed and augmented string class definition
#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;
class String
{
    private:
        int len; // length of string
        char * str; // pointer to string
        static const int CINLIM = 80; // cin input limit
        static int num_strings; // number of objects
    public:
        // constructors and other methods
        String(); // default constructor
        String(const String &); // copy constructor
        ~String(); // destructor
        int length () const { return len; }
        // overloaded operator methods
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        // overloaded operator friends
        friend bool operator<(const String &st, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st, const String &st2);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);
        // static function
        static int HowMany();
        String(const char * s); // constructor
};
#endif
