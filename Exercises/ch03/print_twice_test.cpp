#include <iostream>
using namespace std;

void print_twice(char phil) {
    	cout << phil << phil << endl;
}

int main (){
	print_twice('a');
	// wont work, not a char
	print_twice("a");
	// wont work, not a char
	print_twice(2);
    	return 0;
}
