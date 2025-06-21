// MODULE      inherit1.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       4/11/1996
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   inherit1.cpp
// PURPOSE:
//   Illustrate inheritance.
//

#include <iostream>
#include <stdlib.h>
#include <string.h>

using std::cout;
using std::endl;

class Thing     // Thing is the base of all our objects.
{
    public:
        Thing() { strcpy(name,""); };
        Thing( char * thing_name )
        { strcpy(name,thing_name); };
        void print();

    protected:
        char name[80];
};

void Thing::print()
{
    cout << "name:" << name;
}

    	
class Person : public Thing
{
    public:
        Person();
        Person( char *person_name, int person_age );
        void print(); 

    protected:
        int age;
 };

Person::Person() : Thing()
{
   age = -1;
}

Person::Person(char *person_name, int person_age ) :
   Thing(person_name)
{
   age = person_age;
}

void Person::print()
{
   Thing::print();
   cout << " age: " << age;
}

class Politician : public Person
{
    public:
        Politician(char *person_name, int person_age, char *pol_party );
        void print();

    protected:
        char party[40];
};

Politician::Politician(char *person_name, 
                       int person_age, 
                       char *pol_party ) : Person(person_name, person_age)
{
 	strcpy(party, pol_party);
}

void Politician::print()
{

    Person::print();
    cout << " party:" << party;
}

    	
int main(void)
{
 	Thing       t("Cessna 182");
 	Person      me("Gary J. Blair",37);
 	Politician  president("Bill Clinton",
 	46,"Democrat"); 
 	Thing      *p;  // Can point at Thing or
 	// anything derived from Thing.

    t.print();         cout << "\n";
 	me.print();        cout << "\n";
 	president.print(); cout << "\n";
 	cout <<"\nPointer output:\n";
    // The print() method will use the definition of the
    // Thing class, unless we declare the print function 
    // as a 'virtual' function (Topic 6-6):
 	p = &t;
 	p->print();
 	cout << endl;
 	
 	p = &me;
 	p->print();
 	cout << endl;
 	
 	p = &president;
 	p->print();
 	cout << endl;

        return 0;
}