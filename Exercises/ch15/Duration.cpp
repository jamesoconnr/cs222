#include "Duration.h"
#include <iostream>
using namespace std;

Duration::Duration() {
    total_seconds = 0;
}
Duration::Duration(int s){
    total_seconds = s;
}
Duration Duration::operator- (Duration& d){
    return Duration(total_seconds - d.total_seconds);
}
Duration Duration::operator+ (Duration& d){
    return Duration(total_seconds + d.total_seconds);
}
int Duration::seconds(){
    return total_seconds % 60;
}
int Duration::minutes(){
    return (total_seconds % 3600) / 60;
}
int Duration::hours(){
    return (total_seconds % 86400) / 3600;
}
int Duration::days(){
    return total_seconds / 86400;
}
string Duration::format_duration(){
    int dseconds = seconds();
    int dminutes = minutes();
    int dhours = hours();
    int ddays = days();
    string duration_formatted = "P";
    bool zero = true;
    if (ddays > 0){
        duration_formatted += std::to_string(ddays) + "D";
        zero = false;
    }
    duration_formatted += "T";
    if (dhours > 0){
        duration_formatted += std::to_string(dhours) + "H";
        zero = false;
    }
    if (dminutes > 0){
        duration_formatted += std::to_string(dminutes) + "M";
        zero = false;
    }
    if (dseconds > 0){
        duration_formatted += std::to_string(dseconds) + "S";
        zero = false;
    }
    if (zero){
        duration_formatted += "0S";
    }


    return duration_formatted;
}
string Duration::to_string() {
    return format_duration();
}
