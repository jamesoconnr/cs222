#include <iostream>
#include "fraction.cpp"

using namespace std;

int main() {
    Fraction fraction1(5, 3);
    fraction1.print();
    Fraction fraction2(2, 2);
    fraction1.plus(fraction2);
    fraction1.print();
    fraction1.times(fraction2);
    fraction1.print();
    return 0;
}