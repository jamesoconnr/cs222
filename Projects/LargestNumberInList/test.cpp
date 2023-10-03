#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main (int argc, char** argv){
	for (int i = 1; i < argc; i++){
		cout << argv[i];
	}
	cout << endl;
}
