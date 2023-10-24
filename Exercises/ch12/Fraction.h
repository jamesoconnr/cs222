struct Fraction {
    int nume, denom;
    Fraction(int n, int d);
    void print();
    void plus(Fraction& secondFrac);
    void minus(Fraction& secondFrac);
    void times(Fraction& secondFrac);
    void divided_by(Fraction& secondFrac);
};