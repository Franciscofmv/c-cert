// FILENAME:   adder.cpp
// PROGRAMMER: Gary J. Blair
// DATE:       4/11/1996
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   adder.cpp
// PURPOSE:
//   Add 2 numbers together.
//   Illustrate use of files with streams.

#include <iostream>
#include <fstream>

int main(void)
{
    char input_filename[1024];// Name of 
                              // input file.
    char output_filename[1024];  // Name of
                              // output file.
    int  a,b;                 // 2 ints from
                              // input file.
    int  sum;                 // Sum of a and b.

    std::cout << "Enter the input file name    ";
    std::cin >> input_filename;
    std::cout << "Enter the output filename    ";
    std::cin >> output_filename;

    // Stream for input
    std::ifstream data_in(input_filename); 
  
    // Stream for output
    std::ofstream data_out(output_filename);
  
    data_in >> a;
    data_in >> b;
    sum = a + b;
    data_out << "The sum of " << a << " and " << b
             <<   " is "  << sum  << std::endl;
    data_in.close();
    data_out.close();

    return 0;
} 