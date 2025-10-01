//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************

#include <iostream>
#include "Complex.h"

int main() {
    Complex a(4, 5);
    Complex b(2, -3);
    Complex result;

    std::cout << "Complex number a: " << a << std::endl;
    std::cout << "Complex number b: " << b << std::endl;

    result = a + b;
    std::cout << "a + b = " << result << std::endl;

    result = a - b;
    std::cout << "a - b = " << result << std::endl;

    result = a * b;
    std::cout << "a * b = " << result << std::endl;

    result = a / b;
    std::cout << "a / b = " << result << std::endl;

    result = -a;
    std::cout << "-a = " << result << std::endl;

    std::cout << "|a| = " << a.magnitude() << std::endl;
    std::cout << "Conjugate of a: " << a.conjugate() << std::endl;

    // input
    Complex c;
    std::cout << "Enter a complex number (real and imaginary part): ";
    std::cin >> c;
    std::cout << "You entered: " << c << std::endl;

    return 0;
}
