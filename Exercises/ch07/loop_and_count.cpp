#include <iostream>
#include <string>
using namespace std;

void count_letters(string str, char letter){
	int count = 0;
	int index = 0;
	
	while (index < str.length()) {
	    if (str[index] == letter) {
	        count = count + 1;
	    }
	    index = index + 1;
	}
	cout << count << endl;
}

int main() {
	count_letters("AAaaaaAhhhhh", 'a');
}
