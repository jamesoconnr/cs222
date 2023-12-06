class Point {
    double x, y;
    public:
        Point();
        Point(double, double);
        double get_x() const;
        double get_y() const;
        Point operator + (const Point& p2);
        Point operator - (const Point& p2);
};
Point operator += (Point &p1, Point &p2);
Point operator -= (Point &p1, Point &p2);
std::ostream& operator << (std::ostream &out, const Point &p);