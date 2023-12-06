#include <iostream>
#include "point.cpp"

using namespace std;

int main() {
    Point pointUn(3, 2);
    cout << pointUn << endl;
    Point pointDuex(5, 7);
    cout << pointDuex << endl;

    pointUn +=pointDuex;
    pointDuex -= pointUn;
    return 0;
}