#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

double convert_to_seconds(const Time& t)
{
    int minutes = t.hour * 60 + t.minute;
    double seconds = minutes * 60 + t.second;

    return seconds;
}

double increment(const double& t, double secs){
  cout << "Incrementing time " << secs << " seconds" << endl;
  double time = t + secs;
  return time;
}

Time make_time(double secs)
{
    Time time;
    time.hour = int(secs / 3600.0);
    secs -= time.hour * 3600.0;
    time.minute = int(secs / 60.0);
    secs -= time.minute * 60;
    time.second = secs;

    return time;
}

int main() {
	Time myTime = {2, 32, 39.271};
  double myTimeSec = convert_to_seconds(myTime);
  double incrementedTime = increment(myTimeSec, 2.25);
  Time finalTime = make_time(incrementedTime);
  cout << "The time " << myTime.hour << ":" << myTime.minute << ":" << myTime.second << " was incremented to " << finalTime.hour << ":" << finalTime.minute << ":" << finalTime.second << endl;
  return 0;
}

//void increment(Time& time, double secs)
//{
//    cout << time.hour << " " << time.minute << " " << time.second << endl;
//    time.second += secs;
//
//    while (time.second >= 60.0) {
//        time.second -= 60.0;
//        time.minute += 1;
//    }
//    while (time.minute >= 60) {
//        time.minute -= 60;
//        time.hour += 1;
//    }
//    cout << time.hour << " " << time.minute << " " << time.second << endl;
//}
