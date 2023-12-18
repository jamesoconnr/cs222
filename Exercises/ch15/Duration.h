#include <string>
using namespace std;
class Duration {
    int total_seconds;
    string format_duration();
    public:
        Duration();
        Duration(int seconds);
        string to_string();
        int seconds();
        int minutes();
        int hours();
        int days();
        Duration operator + (Duration& d);
        Duration operator - (Duration& d);
};