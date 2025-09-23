#include <iostream>
#include <cmath>

int main() 
{     	
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of short unsigned int: " << sizeof(short unsigned int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

    // sizes in bytes of the largest unsigned integer
    short unsigned int numbytes = 8 * sizeof(short unsigned int);
    long unsigned int maxshortint = pow(2, 16) - 1;
    std::cout << "maxshortint: 2^" << numbytes << " - 1 = " << maxshortint <<  std::endl;
    
    // initialize and allocate a variable with the largest unsigned integer
    short unsigned int shortint = 65535;
    std::cout << "largest short unsigned integer shortint" << shortint << std::endl;
    
    // add one to the largest integer
    short unsigned int nextshortint = shortint + 1;
    std::cout << "Adding one to the largest short integer: shortint + 1 = " << nextshortint <<  std::endl;

    return 0;
}
