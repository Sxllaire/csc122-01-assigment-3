//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imag;

public:
    // constructors
    Complex();
    Complex(double r, double i);

    // accessors
    double getReal() const;
    double getImag() const;

    // mutators
    void setReal(double r);
    void setImag(double i);

    // arithmetic operator
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // negation
    Complex operator-() const;

    // special operations
    double magnitude() const;
    Complex conjugate() const;

    // functions for I/O
    friend std::ostream& operator<<(std::ostream& out, const Complex& c);
    friend std::istream& operator>>(std::istream& in, Complex& c);
};

#endif
