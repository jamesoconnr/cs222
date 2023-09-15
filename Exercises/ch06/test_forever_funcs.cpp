#include <iostream>
using namespace std;

void lool_forever(int n) {
    while (true) {
        cout << "n is now " << n << "." << endl;
        n = n + 1;
    }
}

void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}

int main (){
	// n increases infinitely
	//lool_forever(0);
	
	// same thing but uses recursion
	recurse_forever(1);
	return 0;
}
