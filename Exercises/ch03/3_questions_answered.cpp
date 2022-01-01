#include <iostream>
using namespace std

void do_nothing(){
	return "useless"
}

void return_nothing(){
}

int main (){
	do_nothing();
	char functionWithoutResult;
	functionWithoutResult = return_nothing() + 2;
	
	return 0
}
