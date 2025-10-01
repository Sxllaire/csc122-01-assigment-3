// *************************************************************************** 
// 
//   Your Name 
//   Your Harper ID
//   Your Course and Section Number 
// 
//   I certify that this is my own work and where appropriate an extension 
//   of the starter code provided for the assignment. 
// ***************************************************************************

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructors
    Complex();                      // Default constructor
    Complex(double r, double i);    // Parameterized constructor

    // Accessors
    double getReal() const;
    double getImag() const;

    // Mutators
    void setReal(double r);
    void setImag(double i);

    // Arithmetic Operators
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // Unary negation
    Complex operator-() const;

    // Special Operations
    double magnitude() const;
    Complex conjugate() const;

    // Friend functions for I/O
    friend std::ostream& operator<<(std::ostream& out, const Complex& c);
    friend std::istream& operator>>(std::istream& in, Complex& c);
};

#endif
