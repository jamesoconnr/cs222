// a challenging lesson for those of us who forgot all our geometry lol

#include <cmath>
#include <iostream>
#include "complex.h"
using namespace std;




string Complex::to_string() {
    return std::to_string(real) + " + " + std::to_string(imag) + "i";
}

void Complex::calculate_polar() {
    mag = sqrt(real * real + imag * imag);
    theta = atan(imag / real);
    polar = true;
}

void Complex::calculate_cartesian() {
    real = mag * cos(theta);
    imag = mag * sin(theta);
    polar = false;
}

Complex Complex::operator-(const Complex& c) {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator/(Complex& c) {
    if (polar == false) {
        this->calculate_polar();
    }
    if (c.polar == false) {
        c.calculate_polar();
    }

    Complex num(mag / c.mag, theta - c.theta, POLAR);
    num.calculate_cartesian();
    return num;
}
Complex Complex::abso() {
    return Complex(abs(real), abs(imag));
}

int Complex::get_real() const {
    return real;
}
int Complex::get_imag() const {
    return imag;
}
ostream& operator << (ostream &out, const Complex &c) {
    out << c.get_real() << " + " << c.get_imag() << "i" ;
    return out;
}