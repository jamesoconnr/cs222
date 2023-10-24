#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
	double second;
	
	void increment(double secs);
    void print();
    Time(int h, int m, double s);
    Time(int h, int m, int s);	
};

Time::Time(int h, int m, double s) {
    hour = h;
	minute = m;
	second = s;
    cout << "Double:" << endl;
    cout << hour << ":" << minute << ":" << second << endl;
}

Time::Time(int h, int m, int s) {
    hour = h;
	minute = m;
	second = s;
    cout << "Int:" << endl;
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::increment(double secs)
{
	// credits to ved for helping me out
	second += secs;
    	if(second >= 60){
    		int tempSecs = int(second/60);
    		minute += tempSecs;
    		second -= 60*tempSecs;
    	}
    	if(minute >= 60){
    		int tempMin = int(minute/60);
    	    	hour += tempMin;
    	    	minute -= 60*tempMin;
    	}
}

int main(){
	//Time current_time = {9, 14, 30.0};
	//current_time.increment(50.0);
	//current_time.print();
	
	// of course, when this is called without the proper sec type the program does compile
	// however, when another constructer with a sec type of int is added the program works and calls the correct constructor (function overload)
	Time timeIntS(1, 2, 30);
	
	return 0;
}
