   
// MODULE       dynarr1d.cpp
// PROGRAMMER:  Gary J. Blair
// DATE:        4/11/1996
// COMPILER:    MS Visual C++ 2008 Express Edition
// REQUIRED:    dynarr1d.cpp
// PURPOSE:
//   Driver for dynarr1 exercise.
//   Illustrates:
//      dynamic integer arrays with
//      subscript checking.
//      new, copy constructor,
//      overloading [], destructors.
 	
#include        <iostream>
#include        <stdlib.h>
#include        "dynarr1.h"

using namespace std;

void create_array( size_t size );
void print_array( DynamicIntArray a );

int main(void)
{
    size_t size;

    cout << "Enter the array size ";
    cin  >> size;
    create_array(size);
    cout << "main terminating.\n";

    return 0;
}

void create_array( size_t size )
{
    DynamicIntArray  x(size,"x");  // Dynamic 
                                   // array.
    long             i;            // Loop 
                                   // variable.
    DynamicIntArray *p;   // Ptr to 
                          // DynamicIntArray.
    
    cout << "The size of x is " << x.size() << endl;

    x[0] = 1;
    x[1] = 1;
    for (i=2; i<x.size(); ++i)
       x[i] = x[i-1] + x[i-2];
    print_array(x);

    p = new DynamicIntArray(3,"*p");
    cout << "The size of *p is " << p->size()
         << endl;
    (*p)[0] = 1996;
    (*p)[1] = 5;
    (*p)[2] = 30;
    print_array(*p); 
    *p = x;
    cout << "The size of *p is now " << p->size()
         << endl;
    print_array(*p);
    delete p;

    cout << "create_array returning.\n";
}

   void print_array( DynamicIntArray a )
   {
    size_t   i;   // Loop variable.

    for (i=0; i<a.size(); ++i)
       cout << "a[" << i << "] = " << a[i] << endl;
       cout << "print_array returning.\n";
   }