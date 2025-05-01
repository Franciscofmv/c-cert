// FILENAME:   errin.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       8/11/1996
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   errin.cpp
// PURPOSE:
//   Illustrate recovery from stream errors.

#include   <iostream>

using namespace std;

int main(void)
{
    int   i;         // Value to be input.
    int   success = 0;  // Have we succeeded yet? 

    do
    {
       cout << "Enter an integer  ";
       cin >> i;

       if (cin.fail())   // Error inputting info
       {
          cout << "cin.fail() is true\n";
          cin.clear();   // Clear error flag.


          //Consume offending input characters
          cin.ignore(1024,'\n');

        }
        else
          success = 1;
    }while (! success);
    
    cout << "Value of i=" << i << endl;

    return 0;
}