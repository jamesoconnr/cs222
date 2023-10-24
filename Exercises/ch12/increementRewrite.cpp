#include <iostream>
using namespace std;

struct Time {
    	int hour, minute;
	double second;
	
	void increment(double secs);
    	void print();
};

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
	Time current_time = {9, 14, 30.0};
	current_time.increment(50.0);
	current_time.print();
	return 0;
}
