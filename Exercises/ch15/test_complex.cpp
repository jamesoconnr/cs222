#include "complex.cpp"

int main() {
    Complex c1(20, 7);
    Complex c2(6, 3);
    c1 = c1 - c2;
    cout << c1.to_string() << endl;

    Complex c3(-5, 3);
    Complex c3abso = c3.abso();
    Complex c4(4, 2);
    c3 = c3 / c4;
    cout << c3.to_string() << endl;
    cout << c3abso.to_string() << endl;

    cout << c2 << " has been couted" << endl;
}