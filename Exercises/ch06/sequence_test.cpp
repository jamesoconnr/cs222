#include <iostream>
using namespace std;

void sequence(int n)
{
   while (n != 1) {
       cout << n << endl;
       if (n%2 == 0) {      // n is even
           n = n / 2;
       } else {             // n is odd
           n = n * 3 + 1;
       }
   }
}

int main(){
	// loops between -1 and -2 infinitely
	//sequence(-1);	
	
	// print 0 infinitely
	//sequence(0);	
	
	// does nothing
	//sequence(1);	
	
	// outputs 3 10 5 16 8 4 2	
	sequence(3);	
	return 0;
}
