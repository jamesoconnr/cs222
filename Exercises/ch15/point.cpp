#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}
string Point::to_string() {
    return "(" + std::to_string((int)x) + ", " + std::to_string((int)y) + ")";
}
double Point::distance(Point p2) {
    return sqrt((abs(x - p2.get_x()) * abs(x - p2.get_x())) + (abs(y - p2.get_y()) * abs(y - p2.get_y())));
}
Point::Point() {
    x = 0;
    y = 0;
}
double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}
Point Point::operator - (const Point &p2) {
    return Point(x - p2.get_x(), y - p2.get_y());
}

Point Point::operator + (const Point &p2) {
    return Point(x + p2.get_x(), y + p2.get_y());
}
Point operator * (int num, Point &p1) {
    return Point(p1.get_x() * num, p1.get_y() * num);
}
Point operator += (Point &p1, Point &p2) {
    p1 = p1 + p2;
    return p1;
}

Point operator -= (Point &p1, Point &p2) {
    p1 = p1 - p2;
    return p1;
}

ostream& operator << (ostream &out, const Point &p) {
    out << p.get_x() << ", " << p.get_y();
    return out;
}
