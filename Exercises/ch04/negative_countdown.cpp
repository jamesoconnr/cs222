#include <iostream>
using namespace std;

void countdown(int n) {
    if (n == 0) {
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    }
}

int main()
{
    // counts down infinitley 
    countdown(4);
    return 0;
}
