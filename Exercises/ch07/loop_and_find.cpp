#include <iostream>
#include <string>
using namespace std;

void count_letters(string str, char letter){
	int count = 0;
	int index = 0;
	
	while (index < str.length()) {
		int foundThis = str.find(letter, index);
	     	if (foundThis != -1){
			index = foundThis + 1;
			count = count + 1;
		}
		index = index + 1;
	 }
	cout << "There is (are) " << count << " " << letter << "(s) in " << str <<  endl;
}

int main() {
	count_letters("AAaaaaAhhhhh", 'q');
}
