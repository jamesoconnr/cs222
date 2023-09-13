#include <iostream>
using namespace std;

void overloaded_function(char foo){
	cout << foo << " is a char" << endl;
}

void overloaded_function(string foo){
	cout << foo << " is a string" << endl;
}

void overloaded_function(int foo){
	cout << foo << " is an int" << endl;
}

void overloaded_function(double foo){
	cout << foo << " is a double" << endl;
}

void overloaded_function(float foo){
	cout << foo << " is a float" << endl;
}

int main(){
	overloaded_function('o');
	overloaded_function("ahh");
	overloaded_function(9);
	overloaded_function(1.234567);
	float float_num = 1.2;
	overloaded_function(float_num);
}
