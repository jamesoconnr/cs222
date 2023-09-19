#include <iostream>
#include <string>
using namespace std;

void reverse_string(string str){
	int strIndex = str.size() - 1;
	string reversedStr = "";
	while (strIndex > -1){
		char currentLetter = str[strIndex];
		reversedStr = reversedStr + currentLetter;
		strIndex = strIndex - 1;
	}
	cout << reversedStr << endl;
}

int main(){
	string str1 = "james";
	reverse_string(str1);
}
