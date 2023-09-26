#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

struct Rectangle {
    Point corner;
    double width, height;
};

Point corner = {0.0, 0.0};
Rectangle box = {corner, 10.0, 20.0};

Point lowerRight(Rectangle r){
    Point lowerRightCorner;
    lowerRightCorner.x = corner.x + r.width;
    lowerRightCorner.y = corner.y - r.height;
    cout << "The lower right corner is located at (" << lowerRightCorner.x << ", " << lowerRightCorner.y << ")" << endl;
    return lowerRightCorner;
}

double findArea(Rectangle r){
    double area = r.width * r.height;
    cout << "The area of the rectangle is " << area << endl;
    return area;
}

int main(){
    lowerRight(box);
    findArea(box);
    return 0;
}
