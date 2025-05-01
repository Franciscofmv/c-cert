// FILENAME:   tripleit.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       4/11/1996
// COMPILER:   MS Visual C++ Express Edition
// REQUIRED:   tripleit.cpp
// PURPOSE:
//   Multiple numbers by 3.
//   Illustrate inline directive.

#include <iostream>

using namespace std;

inline void triple_it( int &x )
{
    x *= 3;
}

int main(void)
{
    int y=17;

    cout << "Originally y=" << y << endl;
    triple_it(y);
    cout << "After tripling, y=" << y << endl;

    return 0;
}