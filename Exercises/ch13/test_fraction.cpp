#include <iostream>
#include "fraction.cpp"

using namespace std;

int main() {
    Fraction fraction1(5, 3);
    cout << fraction1.to_string() << endl;
    Fraction fraction2(2, 1);
    cout << fraction2.to_string() << endl;
    return 0;
}