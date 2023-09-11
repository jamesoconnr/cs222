#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "First Line." << endl;
    // this wont work because new_line is defined after main
    new_line();
    cout << "Second Line." << endl;
    return 0;
}

void new_line()
{
    cout << endl;
}

