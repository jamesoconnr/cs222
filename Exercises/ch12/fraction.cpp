#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(int n, int d) {
    nume = n;
    denom = d;
}

void Fraction::print() {
    cout << nume << "/" << denom << endl;
}

void Fraction::plus(Fraction& secondFrac) {
    nume *= secondFrac.denom;
    secondFrac.nume *= denom;
    denom *= secondFrac.denom;
    nume += secondFrac.nume;
}

void Fraction::minus(Fraction& secondFrac) {
    nume *= secondFrac.denom;
    secondFrac.nume *= denom;
    denom *= secondFrac.denom;
    nume -= secondFrac.nume;
}

void Fraction::times(Fraction& secondFrac) {
    nume *= secondFrac.nume;
    denom *= secondFrac.denom;
}

void Fraction::divided_by(Fraction& secondFrac) {
    nume *= secondFrac.denom;
    denom *= secondFrac.nume;
}