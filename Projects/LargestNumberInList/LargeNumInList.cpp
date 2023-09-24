#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int largestNum;
int largestNumCount;

int main (int argc, char** argv){
	for (int i = 1; i < argc; i++){
		int currentInt = atoi(argv[i]);
		if (i == 1 || currentInt > largestNum){
			largestNum = currentInt;
		}
	}
	for (int i = 1; i < argc; i++){
		int currentInt = atoi(argv[i]);
		if (currentInt == largestNum){
			largestNumCount++;
		}
	}
	cout << "The largest number in the list " << largestNum << ", which appears " << largestNumCount << " time(s)" << endl;
}
