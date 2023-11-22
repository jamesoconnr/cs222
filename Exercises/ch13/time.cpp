#include <iostream>
#include <string>
using namespace std;

struct Time {
    int hour, minute;
    double second;
    Time(int h, int m, double s){
        hour = h;
        minute = m;
        second = s;
    }
    string to_string(){
        if (std::to_string(minute).length() == 1) return std::to_string(hour) + ":0" + std::to_string(minute) + ":" + std::to_string((int)second);
        return std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string((int)second);
    }
};

int main(){
    Time eightOClock(8, 0, 0.0);
    cout << eightOClock.to_string() << endl;
}