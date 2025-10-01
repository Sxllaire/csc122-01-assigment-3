//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************

#include "Complex.h"

// Constructors
Complex::Complex() : real(0), imag(0) {}

Complex::Complex(double r, double i) : real(r), imag(i) {}

// Accessors
double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}

// Mutators
void Complex::setReal(double r) {
    real = r;
}

void Complex::setImag(double i) {
    imag = i;
}

// Arithmetic Operators
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

Complex Complex::operator*(const Complex& other) const {
    double r = real * other.real - imag * other.imag;
    double i = real * other.imag + imag * other.real;
    return Complex(r, i);
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    double r = (real * other.real + imag * other.imag) / denominator;
    double i = (imag * other.real - real * other.imag) / denominator;
    return Complex(r, i);
}

// Unary negation
Complex Complex::operator-() const {
    return Complex(-real, -imag);
}

// Special Operations
double Complex::magnitude() const {
    return std::sqrt(real * real + imag * imag);
}

Complex Complex::conjugate() const {
    return Complex(real, -imag);
}

// I/O
std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0)
        out << " + " << c.imag << "i";
    else
        out << " - " << -c.imag << "i";
    return out;
}

std::istream& operator>>(std::istream& in, Complex& c) {
    // Expected input: real imag
    in >> c.real >> c.imag;
    return in;
}
